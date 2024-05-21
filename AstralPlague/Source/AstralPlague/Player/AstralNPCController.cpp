// Copyright Epic Games, Inc. All Rights Reserved.

#include "AstralNPCController.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "AstralPlague/AstralLogChannels.h"
#include "Engine/World.h"
#include "GameFramework/PlayerState.h"
#include "AstralPlague/GameModes/AstralGameMode.h"
#include "Perception/AIPerceptionComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AstralNPCController)

class UObject;

AAstralNPCController::AAstralNPCController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bWantsPlayerState = true;
	bStopAILogicOnUnposses = false;
}

void AAstralNPCController::SetGenericTeamId(const FGenericTeamId& NewTeamID)
{
	UE_LOG(LogAstralTeams, Error, TEXT("You can't set the team ID on a player bot controller (%s); it's driven by the associated player state"), *GetPathNameSafe(this));
}

FGenericTeamId AAstralNPCController::GetGenericTeamId() const
{
	
	if (IGenericTeamAgentInterface* PSWithTeamInterface = Cast<IGenericTeamAgentInterface>(PlayerState))
	{
		return PSWithTeamInterface->GetGenericTeamId();
	}
	return FGenericTeamId::NoTeam;
}

ETeamAttitude::Type AAstralNPCController::GetTeamAttitudeTowards(const AActor& Other) const
{
	if (const APawn* OtherPawn = Cast<APawn>(&Other)) {

		if (const IGenericTeamAgentInterface* TeamAgent = Cast<IGenericTeamAgentInterface>(OtherPawn->GetController()))
		{
			FGenericTeamId OtherTeamID = TeamAgent->GetGenericTeamId();

			//Checking Other pawn ID to define Attitude
			if (OtherTeamID.GetId() != GetGenericTeamId().GetId())
			{
				return ETeamAttitude::Hostile;
			}
			else
			{
				return ETeamAttitude::Friendly;
			}
		}
	}

	return ETeamAttitude::Neutral;
}

void AAstralNPCController::OnPlayerStateChanged()
{
	// Empty, place for derived classes to implement without having to hook all the other events
}


void AAstralNPCController::InitPlayerState()
{
	Super::InitPlayerState();
	
}

void AAstralNPCController::CleanupPlayerState()
{
	Super::CleanupPlayerState();
	
}

void AAstralNPCController::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	
}


void AAstralNPCController::ServerRestartController()
{
	if (GetNetMode() == NM_Client)
	{
		return;
	}

	ensure((GetPawn() == nullptr) && IsInState(NAME_Inactive));

	if (IsInState(NAME_Inactive) || (IsInState(NAME_Spectating)))
	{
 		AAstralGameMode* const GameMode = GetWorld()->GetAuthGameMode<AAstralGameMode>();

		if ((GameMode == nullptr) || !GameMode->ControllerCanRestart(this))
		{
			return;
		}

		// If we're still attached to a Pawn, leave it
		if (GetPawn() != nullptr)
		{
			UnPossess();
		}

		// Re-enable input, similar to code in ClientRestart
		ResetIgnoreInputFlags();

		GameMode->RestartPlayer(this);
	}
}

void AAstralNPCController::OnUnPossess()
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

