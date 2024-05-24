// Copyright Epic Games, Inc. All Rights Reserved.

#include "AstralPlayerController.h"
#include "CommonInputTypeEnum.h"
#include "Components/PrimitiveComponent.h"
#include "AstralPlague/AstralLogChannels.h"
/*#include "AstralPlague/AstralCheatManager.h"*/
#include "AstralPlayerState.h"
#include "AstralPlague/Camera/AstralPlayerCameraManager.h"
#include "AstralPlague/AbilitySystem/AstralAbilitySystemComponent.h"
#include "EngineUtils.h"
#include "AstralPlague/AstralGameplayTags.h"
#include "GameFramework/Pawn.h"
#include "Net/UnrealNetwork.h"
#include "Engine/GameInstance.h"
#include "AbilitySystemGlobals.h"
#include "CommonInputSubsystem.h"
#include "AstralLocalPlayer.h"
#include "AstralPlague/GameModes/AstralGameState.h"
#include "AstralPlague/Settings/AstralSettingsLocal.h"
#include "ReplaySubsystem.h"
#include "GameMapsSettings.h"
#include "AstralPlague/Camera/AstralPlayerCameraManager.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AstralPlayerController)

namespace Astral
{
	namespace Input
	{
		static int32 ShouldAlwaysPlayForceFeedback = 0;
		static FAutoConsoleVariableRef CVarShouldAlwaysPlayForceFeedback(TEXT("AstralPC.ShouldAlwaysPlayForceFeedback"),
			ShouldAlwaysPlayForceFeedback,
			TEXT("Should force feedback effects be played, even if the last input device was not a gamepad?"));
	}
}

AAstralPlayerController::AAstralPlayerController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PlayerCameraManagerClass = AAstralPlayerCameraManager::StaticClass();

}

void AAstralPlayerController::PreInitializeComponents()
{
	Super::PreInitializeComponents();
}

void AAstralPlayerController::BeginPlay()
{
	Super::BeginPlay();
	SetActorHiddenInGame(false);
}

void AAstralPlayerController::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void AAstralPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Disable replicating the PC target view as it doesn't work well for replays or client-side spectating.
	// The engine TargetViewRotation is only set in APlayerController::TickActor if the server knows ahead of time that 
	// a specific pawn is being spectated and it only replicates down for COND_OwnerOnly.
	// In client-saved replays, COND_OwnerOnly is never true and the target pawn is not always known at the time of recording.
	// To support client-saved replays, the replication of this was moved to ReplicatedViewRotation and updated in PlayerTick.
	DISABLE_REPLICATED_PROPERTY(APlayerController, TargetViewRotation);
}

void AAstralPlayerController::ReceivedPlayer()
{
	Super::ReceivedPlayer();
}

void AAstralPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	// If we are auto running then add some player input
	if (GetIsAutoRunning())
	{
		if (APawn* CurrentPawn = GetPawn())
		{
			const FRotator MovementRotation(0.0f, GetControlRotation().Yaw, 0.0f);
			const FVector MovementDirection = MovementRotation.RotateVector(FVector::ForwardVector);
			CurrentPawn->AddMovementInput(MovementDirection, 1.0f);	
		}
	}

	AAstralPlayerState* AstralPlayerState = GetAstralPlayerState();

	if (PlayerCameraManager && AstralPlayerState)
	{
		APawn* TargetPawn = PlayerCameraManager->GetViewTargetPawn();

		if (TargetPawn)
		{
			// Update view rotation on the server so it replicates
			if (HasAuthority() || TargetPawn->IsLocallyControlled())
			{
				//AstralPlayerState->SetReplicatedViewRotation(TargetPawn->GetViewRotation());
			}

			// Update the target view rotation if the pawn isn't locally controlled
			if (!TargetPawn->IsLocallyControlled())
			{
				AstralPlayerState = TargetPawn->GetPlayerState<AAstralPlayerState>();
				if (AstralPlayerState)
				{
					// Get it from the spectated pawn's player state, which may not be the same as the PC's playerstate
					//TargetViewRotation = AstralPlayerState->GetReplicatedViewRotation();
				}
			}
		}
	}
}

AAstralPlayerState* AAstralPlayerController::GetAstralPlayerState() const
{
	return CastChecked<AAstralPlayerState>(PlayerState, ECastCheckedType::NullAllowed);
}

UAstralAbilitySystemComponent* AAstralPlayerController::GetAstralAbilitySystemComponent() const
{
	const AAstralPlayerState* AstralPS = GetAstralPlayerState();
	return (AstralPS ? AstralPS->GetAstralAbilitySystemComponent() : nullptr);
}

void AAstralPlayerController::OnPlayerStateChanged()
{
	// Empty, place for derived classes to implement without having to hook all the other events
}

void AAstralPlayerController::InitPlayerState()
{
	Super::InitPlayerState();
	
}

void AAstralPlayerController::CleanupPlayerState()
{
	Super::CleanupPlayerState();
	
}

void AAstralPlayerController::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	
}

void AAstralPlayerController::SetPlayer(UPlayer* InPlayer)
{
	Super::SetPlayer(InPlayer);

	
}




void AAstralPlayerController::PreProcessInput(const float DeltaTime, const bool bGamePaused)
{
	Super::PreProcessInput(DeltaTime, bGamePaused);
}

void AAstralPlayerController::PostProcessInput(const float DeltaTime, const bool bGamePaused)
{
	if (UAstralAbilitySystemComponent* AstralASC = GetAstralAbilitySystemComponent())
	{
		AstralASC->ProcessAbilityInput(DeltaTime, bGamePaused);
	}

	Super::PostProcessInput(DeltaTime, bGamePaused);
}

void AAstralPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);



	SetIsAutoRunning(false);
}

void AAstralPlayerController::SetIsAutoRunning(const bool bEnabled)
{
	const bool bIsAutoRunning = GetIsAutoRunning();
	if (bEnabled != bIsAutoRunning)
	{
		if (!bEnabled)
		{
			OnEndAutoRun();
		}
		else
		{
			OnStartAutoRun();
		}
	}
}

bool AAstralPlayerController::GetIsAutoRunning() const
{
	bool bIsAutoRunning = false;
	if (const UAstralAbilitySystemComponent* AstralASC = GetAstralAbilitySystemComponent())
	{
		bIsAutoRunning = AstralASC->GetTagCount(AstralGameplayTags::Status_AutoRunning) > 0;
	}
	return bIsAutoRunning;
}

void AAstralPlayerController::OnStartAutoRun()
{
	if (UAstralAbilitySystemComponent* AstralASC = GetAstralAbilitySystemComponent())
	{
		AstralASC->SetLooseGameplayTagCount(AstralGameplayTags::Status_AutoRunning, 1);
		
	}	
}

void AAstralPlayerController::OnEndAutoRun()
{
	if (UAstralAbilitySystemComponent* AstralASC = GetAstralAbilitySystemComponent())
	{
		AstralASC->SetLooseGameplayTagCount(AstralGameplayTags::Status_AutoRunning, 0);
		
	}
}

void AAstralPlayerController::UpdateForceFeedback(IInputInterface* InputInterface, const int32 ControllerId)
{
	if (bForceFeedbackEnabled)
	{
		if (const UCommonInputSubsystem* CommonInputSubsystem = UCommonInputSubsystem::Get(GetLocalPlayer()))
		{
			const ECommonInputType CurrentInputType = CommonInputSubsystem->GetCurrentInputType();
			if (Astral::Input::ShouldAlwaysPlayForceFeedback || CurrentInputType == ECommonInputType::Gamepad || CurrentInputType == ECommonInputType::Touch)
			{
				InputInterface->SetForceFeedbackChannelValues(ControllerId, ForceFeedbackValues);
				return;
			}
		}
	}
	
	InputInterface->SetForceFeedbackChannelValues(ControllerId, FForceFeedbackValues());
}

void AAstralPlayerController::UpdateHiddenComponents(const FVector& ViewLocation, TSet<FPrimitiveComponentId>& OutHiddenComponents)
{
	Super::UpdateHiddenComponents(ViewLocation, OutHiddenComponents);

	if (bHideViewTargetPawnNextFrame)
	{
		AActor* const ViewTargetPawn = PlayerCameraManager ? Cast<AActor>(PlayerCameraManager->GetViewTarget()) : nullptr;
		if (ViewTargetPawn)
		{
			// internal helper func to hide all the components
			auto AddToHiddenComponents = [&OutHiddenComponents](const TInlineComponentArray<UPrimitiveComponent*>& InComponents)
			{
				// add every component and all attached children
				for (UPrimitiveComponent* Comp : InComponents)
				{
					if (Comp->IsRegistered())
					{
						OutHiddenComponents.Add(Comp->GetPrimitiveSceneId());

						for (USceneComponent* AttachedChild : Comp->GetAttachChildren())
						{
							static FName NAME_NoParentAutoHide(TEXT("NoParentAutoHide"));
							UPrimitiveComponent* AttachChildPC = Cast<UPrimitiveComponent>(AttachedChild);
							if (AttachChildPC && AttachChildPC->IsRegistered() && !AttachChildPC->ComponentTags.Contains(NAME_NoParentAutoHide))
							{
								OutHiddenComponents.Add(AttachChildPC->GetPrimitiveSceneId());
							}
						}
					}
				}
			};

			//TODO Solve with an interface.  Gather hidden components or something.
			//TODO Hiding isn't awesome, sometimes you want the effect of a fade out over a proximity, needs to bubble up to designers.

			// hide pawn's components
			TInlineComponentArray<UPrimitiveComponent*> PawnComponents;
			ViewTargetPawn->GetComponents(PawnComponents);
			AddToHiddenComponents(PawnComponents);

			//// hide weapon too
			//if (ViewTargetPawn->CurrentWeapon)
			//{
			//	TInlineComponentArray<UPrimitiveComponent*> WeaponComponents;
			//	ViewTargetPawn->CurrentWeapon->GetComponents(WeaponComponents);
			//	AddToHiddenComponents(WeaponComponents);
			//}
		}

		// we consumed it, reset for next frame
		bHideViewTargetPawnNextFrame = false;
	}
}

void AAstralPlayerController::OnUnPossess()
{
	// Make sure the pawn that is being unpossessed doesn't remain our ASC's avatar actor
	if (APawn* PawnBeingUnpossessed = GetPawn())
	{
		if (UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(PlayerState))
		{
			if (ASC->GetAvatarActor() == PawnBeingUnpossessed)
			{
				ASC->SetAvatarActor(nullptr);
			}
		}
	}

	Super::OnUnPossess();
}


