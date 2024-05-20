// Fill out your copyright notice in the Description page of Project Settings.


#include "AstralPlayerState.h"
#include "AstralPlague/AbilitySystem/AstralAbilitySystemComponent.h"
#include "AstralPlague/AbilitySystem/Attributes/DefaultAttributeSet.h"


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

UAbilitySystemComponent* AAstralPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AAstralPlayerState::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	check(AbilitySystemComponent);
	AbilitySystemComponent->InitAbilityActorInfo(this, GetPawn());
}

AAstralPlayerController* AAstralPlayerState::GetAstralPlayerController() const
{
	return Cast<AAstralPlayerController>(GetOwner());
}
