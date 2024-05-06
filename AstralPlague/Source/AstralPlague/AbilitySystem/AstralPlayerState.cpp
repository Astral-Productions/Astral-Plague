// Fill out your copyright notice in the Description page of Project Settings.


#include "AstralPlayerState.h"
#include "AstralAbilitySystemComponent.h"


AAstralPlayerState::AAstralPlayerState(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	AbilitySystemComponent = ObjectInitializer.CreateDefaultSubobject<UAstralAbilitySystemComponent>(this, TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Full);
	
}

UAbilitySystemComponent* AAstralPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
