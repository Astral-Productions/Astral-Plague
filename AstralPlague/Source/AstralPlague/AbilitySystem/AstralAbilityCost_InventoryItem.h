// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AstralAbilityCost.h"
#include "AstralAbilityCost_InventoryItem.generated.h"

class UAstralGameplayAbility;
class UObject;

struct FGameplayAbilityActorInfo;
struct FGameplayTagContainer;

/**
 * 
 */
UCLASS()
class ASTRALPLAGUE_API UAstralAbilityCost_InventoryItem : public UAstralAbilityCost
{
	GENERATED_BODY()

public:
		UAstralAbilityCost_InventoryItem();

	//~ULyraAbilityCost interface
	virtual bool CheckCost(const UAstralGameplayAbility* Ability, const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, FGameplayTagContainer* OptionalRelevantTags) const override;
	virtual void ApplyCost(const UAstralGameplayAbility* Ability, const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) override;
	//~End of ULyraAbilityCost interface

protected:
	
	/** How much of the item to spend (keyed on ability level) */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=AbilityCost)
	FScalableFloat Quantity;

	/*/** Which item to consume #1#			Need to update this once the inventory system is created. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=AbilityCost)
	TSubclassOf<ULyraInventoryItemDefinition> ItemDefinition;*/
};
