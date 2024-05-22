// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameplayEffectTypes.h"

#include "AstralGameplayEffectContext.generated.h"

class AActor;
class FArchive;
class IAstralAbilitySourceInterface;
class UObject;
class UPhysicalMaterial;

USTRUCT()
struct FAstralGameplayEffectContext : public FGameplayEffectContext
{
	GENERATED_BODY()

	FAstralGameplayEffectContext();

	FAstralGameplayEffectContext(AActor* InInstigator, AActor* InEffectCauser)
		: FGameplayEffectContext(InInstigator, InEffectCauser)
	{
	}

	/** Returns the wrapped FAstralGameplayEffectContext from the handle, or nullptr if it doesn't exist or is the wrong type */
	static ASTRALPLAGUE_API FAstralGameplayEffectContext* ExtractEffectContext(struct FGameplayEffectContextHandle Handle);

	/** Sets the object used as the ability source */
	void SetAbilitySource(const IAstralAbilitySourceInterface* InObject, float InSourceLevel);

	/** Returns the ability source interface associated with the source object. Only valid on the authority. */
	const IAstralAbilitySourceInterface* GetAbilitySource() const;

	virtual FGameplayEffectContext* Duplicate() const override
	{
		FAstralGameplayEffectContext* NewContext = new FAstralGameplayEffectContext();
		*NewContext = *this;
		if (GetHitResult())
		{
			// Does a deep copy of the hit result
			NewContext->AddHitResult(*GetHitResult(), true);
		}
		return NewContext;
	}

	virtual UScriptStruct* GetScriptStruct() const override
	{
		return FAstralGameplayEffectContext::StaticStruct();
	}

	/** Returns the physical material from the hit result if there is one */
	const UPhysicalMaterial* GetPhysicalMaterial() const;

public:
	/** ID to allow the identification of multiple bullets that were part of the same cartridge */
	UPROPERTY()
	int32 CartridgeID = -1;

protected:
	/** Ability Source object (should implement IAstralAbilitySourceInterface). NOT replicated currently */
	UPROPERTY()
	TWeakObjectPtr<const UObject> AbilitySourceObject;
};

template<>
struct TStructOpsTypeTraits<FAstralGameplayEffectContext> : public TStructOpsTypeTraitsBase2<FAstralGameplayEffectContext>
{
	enum
	{
		WithNetSerializer = true,
		WithCopy = true
	};
};

