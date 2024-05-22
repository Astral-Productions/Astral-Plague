// Copyright Epic Games, Inc. All Rights Reserved.

#include "AstralCharacterGameplayComponent.h"

#include "EnhancedInputSubsystems.h"
#include "Components/GameFrameworkComponentDelegates.h"
#include "Logging/MessageLog.h"
#include "AstralPlague/AstralLogChannels.h"
#include "AstralPlague/Player/AstralPlayerController.h"
#include "AstralPlague/Player/AstralPlayerState.h"
#include "AstralPlague/Character/AstralPawnExtensionComponent.h"
#include "AstralPlague/Character/AstralPawnData.h"
#include "AstralPlague/Character/AstralPlagueCharacter.h"
#include "AstralPlague/AbilitySystem/AstralAbilitySystemComponent.h"
#include "AstralPlague/Camera/AstralCameraComponent.h"
#include "AstralPlague/AstralGameplayTags.h"
#include "Components/GameFrameworkComponentManager.h"
#include "AstralPlague/Camera/AstralCameraMode.h"
#include "InputMappingContext.h"
#include "AstralPlague/Input/AstralMappableConfigPair.h"  

#include UE_INLINE_GENERATED_CPP_BY_NAME(AstralCharacterGameplayComponent)

#if WITH_EDITOR
#include "Misc/UObjectToken.h"
#endif	// WITH_EDITOR

namespace AstralHero
{
	static const float LookYawRate = 300.0f;
	static const float LookPitchRate = 165.0f;
};

const FName UAstralCharacterGameplayComponent::NAME_BindInputsNow("BindInputsNow");
const FName UAstralCharacterGameplayComponent::NAME_ActorFeatureName("Hero");

UAstralCharacterGameplayComponent::UAstralCharacterGameplayComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	AbilityCameraMode = nullptr;
	bReadyToBindInputs = false;
}

void UAstralCharacterGameplayComponent::OnRegister()
{
	Super::OnRegister();

	if (!GetPawn<APawn>())
	{
		UE_LOG(LogAstral, Error, TEXT("[UAstralCharacterGameplayComponent::OnRegister] This component has been added to a blueprint whose base class is not a Pawn. To use this component, it MUST be placed on a Pawn Blueprint."));

#if WITH_EDITOR
		if (GIsEditor)
		{
			static const FText Message = NSLOCTEXT("AstralHeroComponent", "NotOnPawnError", "has been added to a blueprint whose base class is not a Pawn. To use this component, it MUST be placed on a Pawn Blueprint. This will cause a crash if you PIE!");
			static const FName HeroMessageLogName = TEXT("AstralHeroComponent");
			
			FMessageLog(HeroMessageLogName).Error()
				->AddToken(FUObjectToken::Create(this, FText::FromString(GetNameSafe(this))))
				->AddToken(FTextToken::Create(Message));
				
			FMessageLog(HeroMessageLogName).Open();
		}
#endif
	}
	else
	{
		// Register with the init state system early, this will only work if this is a game world
		RegisterInitStateFeature();
	}
}

bool UAstralCharacterGameplayComponent::CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) const
{
	check(Manager);

	APawn* Pawn = GetPawn<APawn>();

	if (!CurrentState.IsValid() && DesiredState == AstralGameplayTags::InitState_Spawned)
	{
		// As long as we have a real pawn, let us transition
		if (Pawn)
		{
			return true;
		}
	}
	else if (CurrentState == AstralGameplayTags::InitState_Spawned && DesiredState == AstralGameplayTags::InitState_DataAvailable)
	{
		// The player state is required.
		if (!GetPlayerState<AAstralPlayerState>())
		{
			return false;
		}

		// If we're authority or autonomous, we need to wait for a controller with registered ownership of the player state.
		if (Pawn->GetLocalRole() != ROLE_SimulatedProxy)
		{
			AController* Controller = GetController<AController>();

			const bool bHasControllerPairedWithPS = (Controller != nullptr) && \
				(Controller->PlayerState != nullptr) && \
				(Controller->PlayerState->GetOwner() == Controller);

			if (!bHasControllerPairedWithPS)
			{
				return false;
			}
		}

		const bool bIsLocallyControlled = Pawn->IsLocallyControlled();
		const bool bIsBot = Pawn->IsBotControlled();

		if (bIsLocallyControlled && !bIsBot)
		{
			AAstralPlayerController* AstralPC = GetController<AAstralPlayerController>();

			// The input component and local player is required when locally controlled.
			if (!Pawn->InputComponent || !AstralPC || !AstralPC->GetLocalPlayer())
			{
				return false;
			}
		}

		return true;
	}
	else if (CurrentState == AstralGameplayTags::InitState_DataAvailable && DesiredState == AstralGameplayTags::InitState_DataInitialized)
	{
		// Wait for player state and extension component
		AAstralPlayerState* AstralPS = GetPlayerState<AAstralPlayerState>();

		return AstralPS && Manager->HasFeatureReachedInitState(Pawn, UAstralPawnExtensionComponent::NAME_ActorFeatureName, AstralGameplayTags::InitState_DataInitialized);
	}
	else if (CurrentState == AstralGameplayTags::InitState_DataInitialized && DesiredState == AstralGameplayTags::InitState_GameplayReady)
	{
		// TODO add ability initialization checks?
		return true;
	}

	return false;
}

void UAstralCharacterGameplayComponent::HandleChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState)
{
	if (CurrentState == AstralGameplayTags::InitState_DataAvailable && DesiredState == AstralGameplayTags::InitState_DataInitialized)
	{
		APawn* Pawn = GetPawn<APawn>();
		AAstralPlayerState* AstralPS = GetPlayerState<AAstralPlayerState>();
		if (!ensure(Pawn && AstralPS))
		{
			return;
		}

		const UAstralPawnData* PawnData = nullptr;

		if (UAstralPawnExtensionComponent* PawnExtComp = UAstralPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
		{
			PawnData = PawnExtComp->GetPawnData<UAstralPawnData>();

			// The player state holds the persistent data for this player (state that persists across deaths and multiple pawns).
			// The ability system component and attribute sets live on the player state.
			PawnExtComp->InitializeAbilitySystem(AstralPS->GetAstralAbilitySystemComponent(), AstralPS);
		}

		if (AAstralPlayerController* AstralPC = GetController<AAstralPlayerController>())
		{
			if (Pawn->InputComponent != nullptr)
			{
				InitializePlayerInput(Pawn->InputComponent);
			}
		}

		// Hook up the delegate for all pawns, in case we spectate later
		if (PawnData)
		{
			if (UAstralCameraComponent* CameraComponent = UAstralCameraComponent::FindCameraComponent(Pawn))
			{
				CameraComponent->DetermineCameraModeDelegate.BindUObject(this, &ThisClass::DetermineCameraMode);
			}
		}
	}
}

void UAstralCharacterGameplayComponent::OnActorInitStateChanged(const FActorInitStateChangedParams& Params)
{
	if (Params.FeatureName == UAstralPawnExtensionComponent::NAME_ActorFeatureName)
	{
		if (Params.FeatureState == AstralGameplayTags::InitState_DataInitialized)
		{
			// If the extension component says all all other components are initialized, try to progress to next state
			CheckDefaultInitialization();
		}
	}
}

void UAstralCharacterGameplayComponent::CheckDefaultInitialization()
{
	static const TArray<FGameplayTag> StateChain = { AstralGameplayTags::InitState_Spawned, AstralGameplayTags::InitState_DataAvailable, AstralGameplayTags::InitState_DataInitialized, AstralGameplayTags::InitState_GameplayReady };

	// This will try to progress from spawned (which is only set in BeginPlay) through the data initialization stages until it gets to gameplay ready
	ContinueInitStateChain(StateChain);
}

void UAstralCharacterGameplayComponent::BeginPlay()
{
	Super::BeginPlay();

	// Listen for when the pawn extension component changes init state
	BindOnActorInitStateChanged(UAstralPawnExtensionComponent::NAME_ActorFeatureName, FGameplayTag(), false);

	// Notifies that we are done spawning, then try the rest of initialization
	ensure(TryToChangeInitState(AstralGameplayTags::InitState_Spawned));
	CheckDefaultInitialization();
}

void UAstralCharacterGameplayComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UnregisterInitStateFeature();

	Super::EndPlay(EndPlayReason);
}

//@Todo Update this logic 

void UAstralCharacterGameplayComponent::InitializePlayerInput(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	const APawn* Pawn = GetPawn<APawn>();
	if (!Pawn)
	{
		return;
	}

	const APlayerController* PC = GetController<APlayerController>();
	check(PC);

	
	const UAstralLocalPlayer* LP = Cast<UAstra>(PC->GetLocalPlayer());
	check(LP);

	UEnhancedInputLocalPlayerSubsystem* Subsystem = LP->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	check(Subsystem);

	Subsystem->ClearAllMappings();

	if (const UAstralPawnExtensionComponent* PawnExtComp = UAstralPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
	{
		if (const UAstralPawnData* PawnData = PawnExtComp->GetPawnData<UAstralPawnData>())
		{
			if (const UAstralInputConfig* InputConfig = PawnData->InputConfig)
			{
				for (const FInputMappingContextAndPriority& Mapping : DefaultInputMappings)
				{
					if (UInputMappingContext* IMC = Mapping.InputMapping.Get())
					{
						if (Mapping.bRegisterWithSettings)
						{
							if (UEnhancedInputUserSettings* Settings = Subsystem->GetUserSettings())
							{
								Settings->RegisterInputMappingContext(IMC);
							}
							
							FModifyContextOptions Options = {};
							Options.bIgnoreAllPressedKeysUntilRelease = false;
							// Actually add the config to the local player							
							Subsystem->AddMappingContext(IMC, Mapping.Priority, Options);
						}
					}
				}

				// The Astral Input Component has some additional functions to map Gameplay Tags to an Input Action.
				// If you want this functionality but still want to change your input component class, make it a subclass
				// of the UAstralInputComponent or modify this component accordingly.
				UAstralInputComponent* AstralIC = Cast<UAstralInputComponent>(PlayerInputComponent);
				if (ensureMsgf(AstralIC, TEXT("Unexpected Input Component class! The Gameplay Abilities will not be bound to their inputs. Change the input component to UAstralInputComponent or a subclass of it.")))
				{
					// Add the key mappings that may have been set by the player
					AstralIC->AddInputMappings(InputConfig, Subsystem);

					// This is where we actually bind and input action to a gameplay tag, which means that Gameplay Ability Blueprints will
					// be triggered directly by these input actions Triggered events. 
					TArray<uint32> BindHandles;
					AstralIC->BindAbilityActions(InputConfig, this, &ThisClass::Input_AbilityInputTagPressed, &ThisClass::Input_AbilityInputTagReleased, /*out#2# BindHandles);

					AstralIC->BindNativeAction(InputConfig, AstralGameplayTags::InputTag_Move, ETriggerEvent::Triggered, this, &ThisClass::Input_Move, /*bLogIfNotFound=#2# false);
					AstralIC->BindNativeAction(InputConfig, AstralGameplayTags::InputTag_Look_Mouse, ETriggerEvent::Triggered, this, &ThisClass::Input_LookMouse, /*bLogIfNotFound=#2# false);
					AstralIC->BindNativeAction(InputConfig, AstralGameplayTags::InputTag_Look_Stick, ETriggerEvent::Triggered, this, &ThisClass::Input_LookStick, /*bLogIfNotFound=#2# false);
					AstralIC->BindNativeAction(InputConfig, AstralGameplayTags::InputTag_Crouch, ETriggerEvent::Triggered, this, &ThisClass::Input_Crouch, /*bLogIfNotFound=#2# false);
					AstralIC->BindNativeAction(InputConfig, AstralGameplayTags::InputTag_AutoRun, ETriggerEvent::Triggered, this, &ThisClass::Input_AutoRun, /*bLogIfNotFound=#2# false);
				}
			}
		}
	}

	if (ensure(!bReadyToBindInputs))
	{
		bReadyToBindInputs = true;
	}
 
	UGameFrameworkComponentManager::SendGameFrameworkComponentExtensionEvent(const_cast<APlayerController*>(PC), NAME_BindInputsNow);
	UGameFrameworkComponentManager::SendGameFrameworkComponentExtensionEvent(const_cast<APawn*>(Pawn), NAME_BindInputsNow);
}

//@Todo Update this logic 

void UAstralCharacterGameplayComponent::AddAdditionalInputConfig(const UAstralInputConfig* InputConfig)
{
	/*TArray<uint32> BindHandles;

	const APawn* Pawn = GetPawn<APawn>();
	if (!Pawn)
	{
		return;
	}
	
	const APlayerController* PC = GetController<APlayerController>();
	check(PC);

	const ULocalPlayer* LP = PC->GetLocalPlayer();
	check(LP);

	UEnhancedInputLocalPlayerSubsystem* Subsystem = LP->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	check(Subsystem);

	if (const UAstralPawnExtensionComponent* PawnExtComp = UAstralPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
	{
		UAstralInputComponent* AstralIC = Pawn->FindComponentByClass<UAstralInputComponent>();
		if (ensureMsgf(AstralIC, TEXT("Unexpected Input Component class! The Gameplay Abilities will not be bound to their inputs. Change the input component to UAstralInputComponent or a subclass of it.")))
		{
			AstralIC->BindAbilityActions(InputConfig, this, &ThisClass::Input_AbilityInputTagPressed, &ThisClass::Input_AbilityInputTagReleased, /*out#2# BindHandles);
		}
	}*/
}

//@Todo Update this logic 
void UAstralCharacterGameplayComponent::RemoveAdditionalInputConfig(const UAstralInputConfig* InputConfig)
{
	//@TODO: Implement me!
}

bool UAstralCharacterGameplayComponent::IsReadyToBindInputs() const
{
	return bReadyToBindInputs;
}

void UAstralCharacterGameplayComponent::Input_AbilityInputTagPressed(FGameplayTag InputTag)
{
	if (const APawn* Pawn = GetPawn<APawn>())
	{
		if (const UAstralPawnExtensionComponent* PawnExtComp = UAstralPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
		{
			if (UAstralAbilitySystemComponent* AstralASC = PawnExtComp->GetAstralAbilitySystemComponent())
			{				
				AstralASC->AbilityInputTagPressed(InputTag);
			}
		}	
	}
}

void UAstralCharacterGameplayComponent::Input_AbilityInputTagReleased(FGameplayTag InputTag)
{
	const APawn* Pawn = GetPawn<APawn>();
	if (!Pawn)
	{
		return;
	}

	if (const UAstralPawnExtensionComponent* PawnExtComp = UAstralPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
	{
		if (UAstralAbilitySystemComponent* AstralASC = PawnExtComp->GetAstralAbilitySystemComponent())
		{
			AstralASC->AbilityInputTagReleased(InputTag);
		}
	}
}

void UAstralCharacterGameplayComponent::Input_Move(const FInputActionValue& InputActionValue)
{
	APawn* Pawn = GetPawn<APawn>();
	AController* Controller = Pawn ? Pawn->GetController() : nullptr;

	// If the player has attempted to move again then cancel auto running
	if (AAstralPlayerController* AstralController = Cast<AAstralPlayerController>(Controller))
	{
		//@Todo Update this logic 
		//AstralController->SetIsAutoRunning(false);
	}
	
	if (Controller)
	{
		const FVector2D Value = InputActionValue.Get<FVector2D>();
		const FRotator MovementRotation(0.0f, Controller->GetControlRotation().Yaw, 0.0f);

		if (Value.X != 0.0f)
		{
			const FVector MovementDirection = MovementRotation.RotateVector(FVector::RightVector);
			Pawn->AddMovementInput(MovementDirection, Value.X);
		}

		if (Value.Y != 0.0f)
		{
			const FVector MovementDirection = MovementRotation.RotateVector(FVector::ForwardVector);
			Pawn->AddMovementInput(MovementDirection, Value.Y);
		}
	}
}

void UAstralCharacterGameplayComponent::Input_LookMouse(const FInputActionValue& InputActionValue)
{
	APawn* Pawn = GetPawn<APawn>();

	if (!Pawn)
	{
		return;
	}
	
	const FVector2D Value = InputActionValue.Get<FVector2D>();

	if (Value.X != 0.0f)
	{
		Pawn->AddControllerYawInput(Value.X);
	}

	if (Value.Y != 0.0f)
	{
		Pawn->AddControllerPitchInput(Value.Y);
	}
}

void UAstralCharacterGameplayComponent::Input_LookStick(const FInputActionValue& InputActionValue)
{
	APawn* Pawn = GetPawn<APawn>();

	if (!Pawn)
	{
		return;
	}
	
	const FVector2D Value = InputActionValue.Get<FVector2D>();

	const UWorld* World = GetWorld();
	check(World);

	if (Value.X != 0.0f)
	{
		Pawn->AddControllerYawInput(Value.X * AstralHero::LookYawRate * World->GetDeltaSeconds());
	}

	if (Value.Y != 0.0f)
	{
		Pawn->AddControllerPitchInput(Value.Y * AstralHero::LookPitchRate * World->GetDeltaSeconds());
	}
}

void UAstralCharacterGameplayComponent::Input_Crouch(const FInputActionValue& InputActionValue)
{
	if (AAstralPlagueCharacter* Character = GetPawn<AAstralPlagueCharacter>())
	{
		//@Todo Update this logic 
		//Character->ToggleCrouch();
	}
}

void UAstralCharacterGameplayComponent::Input_AutoRun(const FInputActionValue& InputActionValue)
{
	if (APawn* Pawn = GetPawn<APawn>())
	{
		if (AAstralPlayerController* Controller = Cast<AAstralPlayerController>(Pawn->GetController()))
		{
			//@Todo Update this logic 
			// Toggle auto running
			//Controller->SetIsAutoRunning(!Controller->GetIsAutoRunning());
		}	
	}
}

TSubclassOf<UAstralCameraMode> UAstralCharacterGameplayComponent::DetermineCameraMode() const
{
	if (AbilityCameraMode)
	{
		return AbilityCameraMode;
	}

	const APawn* Pawn = GetPawn<APawn>();
	if (!Pawn)
	{
		return nullptr;
	}

	if (UAstralPawnExtensionComponent* PawnExtComp = UAstralPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
	{
		if (const UAstralPawnData* PawnData = PawnExtComp->GetPawnData<UAstralPawnData>())
		{
			return PawnData->DefaultCameraMode;
		}
	}

	return nullptr;
}

void UAstralCharacterGameplayComponent::SetAbilityCameraMode(TSubclassOf<UAstralCameraMode> CameraMode, const FGameplayAbilitySpecHandle& OwningSpecHandle)
{
	if (CameraMode)
	{
		AbilityCameraMode = CameraMode;
		AbilityCameraModeOwningSpecHandle = OwningSpecHandle;
	}
}

void UAstralCharacterGameplayComponent::ClearAbilityCameraMode(const FGameplayAbilitySpecHandle& OwningSpecHandle)
{
	if (AbilityCameraModeOwningSpecHandle == OwningSpecHandle)
	{
		AbilityCameraMode = nullptr;
		AbilityCameraModeOwningSpecHandle = FGameplayAbilitySpecHandle();
	}
}

