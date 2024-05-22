// Copyright Epic Games, Inc. All Rights Reserved.

#include "AstralAbilitySystemGlobals.h"

#include "AstralGameplayEffectContext.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AstralAbilitySystemGlobals)

struct FGameplayEffectContext;

UAstralAbilitySystemGlobals::UAstralAbilitySystemGlobals(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	
}

FGameplayEffectContext* UAstralAbilitySystemGlobals::AllocGameplayEffectContext() const
{
	return new FAstralGameplayEffectContext();
}

