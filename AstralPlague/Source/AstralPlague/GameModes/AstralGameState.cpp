// Copyright Epic Games, Inc. All Rights Reserved.

#include "AstralGameState.h"

#include "AstralPlague/AbilitySystem/AstralAbilitySystemComponent.h"
#include "Async/TaskGraphInterfaces.h"

#include "AstralPlague/GameModes/AstralExperienceManagerComponent.h"

#include "AstralPlague/Player/AstralPlayerState.h"
#include "AstralPlague/AstralLogChannels.h"
#include "Net/UnrealNetwork.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AstralGameState)

class APlayerState;
class FLifetimeProperty;

extern ENGINE_API float GAverageFPS;


AAstralGameState::AAstralGameState(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	AbilitySystemComponent = ObjectInitializer.CreateDefaultSubobject<UAstralAbilitySystemComponent>(this, TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	ExperienceManagerComponent = CreateDefaultSubobject<UAstralExperienceManagerComponent>(TEXT("ExperienceManagerComponent"));

}

void AAstralGameState::PreInitializeComponents()
{
	Super::PreInitializeComponents();
}

void AAstralGameState::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	check(AbilitySystemComponent);
	AbilitySystemComponent->InitAbilityActorInfo(/*Owner=*/ this, /*Avatar=*/ this);
}

UAbilitySystemComponent* AAstralGameState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AAstralGameState::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void AAstralGameState::AddPlayerState(APlayerState* PlayerState)
{
	Super::AddPlayerState(PlayerState);
}

void AAstralGameState::RemovePlayerState(APlayerState* PlayerState)
{
	//@TODO: This isn't getting called right now (only the 'rich' AGameMode uses it, not AGameModeBase)
	// Need to at least comment the engine code, and possibly move things around
	Super::RemovePlayerState(PlayerState);
}

void AAstralGameState::SeamlessTravelTransitionCheckpoint(bool bToTransitionMap)
{
	// Remove inactive and bots
	for (int32 i = PlayerArray.Num() - 1; i >= 0; i--)
	{
		APlayerState* PlayerState = PlayerArray[i];
		if (PlayerState && (PlayerState->IsABot() || PlayerState->IsInactive()))
		{
			RemovePlayerState(PlayerState);
		}
	}
}


void AAstralGameState::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);	
}

