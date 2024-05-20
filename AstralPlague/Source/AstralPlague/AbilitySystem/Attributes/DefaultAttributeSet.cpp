// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultAttributeSet.h"

#include "AstralPlague/AbilitySystem/AstralAbilitySystemComponent.h"

UDefaultAttributeSet::UDefaultAttributeSet()
	: Health(100.0f)
	, MaxHealth(100.0f)
{
	bOutOfHealth = false;
	MaxHealthBeforeAttributeChange = 0.0f;
	HealthBeforeAttributeChange = 0.0f;
}

UAstralAbilitySystemComponent* UDefaultAttributeSet::GetAstralAbilitySystemComponent() const
{
	return Cast<UAstralAbilitySystemComponent>(GetOwningAbilitySystemComponent());
}
