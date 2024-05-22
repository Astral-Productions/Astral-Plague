// Copyright Epic Games, Inc. All Rights Reserved.

#include "AstralGameplayEffectContext.h"

#include "AstralAbilitySourceInterface.h"
#include "AstralPlague/AbilitySystem/AstralAbilitySourceInterface.h"
#include "Engine/HitResult.h"
#include "PhysicalMaterials/PhysicalMaterial.h"



#include UE_INLINE_GENERATED_CPP_BY_NAME(AstralGameplayEffectContext)

class FArchive;

FAstralGameplayEffectContext::FAstralGameplayEffectContext()
{
	
}

FAstralGameplayEffectContext* FAstralGameplayEffectContext::ExtractEffectContext(struct FGameplayEffectContextHandle Handle)
{
	FGameplayEffectContext* BaseEffectContext = Handle.Get();
	if ((BaseEffectContext != nullptr) && BaseEffectContext->GetScriptStruct()->IsChildOf(FAstralGameplayEffectContext::StaticStruct()))
	{
		return (FAstralGameplayEffectContext*)BaseEffectContext;
	}

	return nullptr;
}


void FAstralGameplayEffectContext::SetAbilitySource(const IAstralAbilitySourceInterface* InObject, float InSourceLevel)
{
	AbilitySourceObject = MakeWeakObjectPtr(Cast<const UObject>(InObject));
	//SourceLevel = InSourceLevel;
}

const IAstralAbilitySourceInterface* FAstralGameplayEffectContext::GetAbilitySource() const
{
	return Cast<IAstralAbilitySourceInterface>(AbilitySourceObject.Get());
}

const UPhysicalMaterial* FAstralGameplayEffectContext::GetPhysicalMaterial() const
{
	if (const FHitResult* HitResultPtr = GetHitResult())
	{
		return HitResultPtr->PhysMaterial.Get();
	}
	return nullptr;
}

