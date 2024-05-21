// Fill out your copyright notice in the Description page of Project Settings.


#include "AstralPlayerState.h"

#include "AstralPlague/AstralLogChannels.h"
#include "AstralPlague/AbilitySystem/AstralAbilitySet.h"
#include "AstralPlague/AbilitySystem/AstralAbilitySystemComponent.h"
#include "AstralPlague/AbilitySystem/Attributes/DefaultAttributeSet.h"
#include "AstralPlague/Character/AstralPawnData.h"
#include "AstralPlague/GameModes/AstralExperienceManagerComponent.h"
#include "AstralPlague/GameModes/AstralGameMode.h"
#include "Components/GameFrameworkComponentManager.h"


AAstralPlayerState::AAstralPlayerState(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	AbilitySystemComponent = ObjectInitializer.CreateDefaultSubobject<UAstralAbilitySystemComponent>(this, TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Full); //Unless we enable multiplayer full replication is the best bet

	StatsSet = CreateDefaultSubobject<UDefaultAttributeSet>(TEXT("StatsSet"));
}

void AAstralPlayerState::SetPawnData(const UAstralPawnData* InPawnData)
{
	check(InPawnData);

	if (GetLocalRole() != ROLE_Authority)
	{
		return;
	}

	if (PawnData)
	{
		UE_LOG(LogAstral, Error, TEXT("Trying to set PawnData [%s] on player state [%s] that already has valid PawnData [%s]."), *GetNameSafe(InPawnData), *GetNameSafe(this), *GetNameSafe(PawnData));
		return;
	}

	//MARK_PROPERTY_DIRTY_FROM_NAME(ThisClass, PawnData, this);
	PawnData = InPawnData;

	for (const UAstralAbilitySet* AbilitySet : PawnData->AbilitySets)
	{
		if (AbilitySet)
		{
			AbilitySet->GiveToAbilitySystem(AbilitySystemComponent, nullptr);
		}
	}

	//UGameFrameworkComponentManager::SendGameFrameworkComponentExtensionEvent(this, NAME_AstralAbilityReady);
	
	//ForceNetUpdate(); Likely for replication 
}

UAbilitySystemComponent* AAstralPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AAstralPlayerState::OnExperienceLoaded(const UAstralExperienceDefinition* CurrentExperience)
{
	if (AAstralGameMode* AstralGameMode = GetWorld()->GetAuthGameMode<AAstralGameMode>())
	{
		if (const UAstralPawnData* NewPawnData = AstralGameMode->GetPawnDataForController(GetOwningController()))
		{
			SetPawnData(NewPawnData);
		}
		else
		{
			UE_LOG(LogAstral, Error, TEXT("AAstralPlayerState::OnExperienceLoaded(): Unable to find PawnData to initialize player state [%s]!"), *GetNameSafe(this));
		}
	}
}

void AAstralPlayerState::PreInitializeComponents()
{
	Super::PreInitializeComponents();
}

void AAstralPlayerState::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	check(AbilitySystemComponent);
	AbilitySystemComponent->InitAbilityActorInfo(this, GetPawn());

	UWorld* World = GetWorld();
	if (World && World->IsGameWorld() && World->GetNetMode() != NM_Client)
	{
		AGameStateBase* GameState = GetWorld()->GetGameState();
		check(GameState);
		UAstralExperienceManagerComponent* ExperienceComponent = GameState->FindComponentByClass<UAstralExperienceManagerComponent>();
		check(ExperienceComponent);
		ExperienceComponent->CallOrRegister_OnExperienceLoaded(FOnAstralExperienceLoaded::FDelegate::CreateUObject(this, &ThisClass::OnExperienceLoaded));
	}
}

AAstralPlayerController* AAstralPlayerState::GetAstralPlayerController() const
{
	return Cast<AAstralPlayerController>(GetOwner());
}
