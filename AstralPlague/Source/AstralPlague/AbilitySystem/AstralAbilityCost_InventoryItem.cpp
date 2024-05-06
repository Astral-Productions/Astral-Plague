// Fill out your copyright notice in the Description page of Project Settings.


#include "AstralAbilityCost_InventoryItem.h"

UAstralAbilityCost_InventoryItem::UAstralAbilityCost_InventoryItem()
{
	Quantity.SetValue(1.0f);
}

//Lyra's implementation will need to be changed a good bit to match our system, but the core functionality is more or less the same.



bool UAstralAbilityCost_InventoryItem::CheckCost(const UAstralGameplayAbility* Ability,
	const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	FGameplayTagContainer* OptionalRelevantTags) const
{
	return Super::CheckCost(Ability, Handle, ActorInfo, OptionalRelevantTags);

	/*#if 0
	if (AController* PC = Ability->GetControllerFromActorInfo())
	{
		if (ULyraInventoryManagerComponent* InventoryComponent = PC->GetComponentByClass<ULyraInventoryManagerComponent>())
		{
			const int32 AbilityLevel = Ability->GetAbilityLevel(Handle, ActorInfo);

			const float NumItemsToConsumeReal = Quantity.GetValueAtLevel(AbilityLevel);
			const int32 NumItemsToConsume = FMath::TruncToInt(NumItemsToConsumeReal);

			return InventoryComponent->GetTotalItemCountByDefinition(ItemDefinition) >= NumItemsToConsume;
		}
	}
#endif
	return false;*/
}

void UAstralAbilityCost_InventoryItem::ApplyCost(const UAstralGameplayAbility* Ability,
	const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo)
{
	Super::ApplyCost(Ability, Handle, ActorInfo, ActivationInfo);
	
/*#if 0
	if (ActorInfo->IsNetAuthority())
	{
		if (AController* PC = Ability->GetControllerFromActorInfo())
		{
			if (ULyraInventoryManagerComponent* InventoryComponent = PC->GetComponentByClass<ULyraInventoryManagerComponent>())
			{
				const int32 AbilityLevel = Ability->GetAbilityLevel(Handle, ActorInfo);

				const float NumItemsToConsumeReal = Quantity.GetValueAtLevel(AbilityLevel);
				const int32 NumItemsToConsume = FMath::TruncToInt(NumItemsToConsumeReal);

				InventoryComponent->ConsumeItemsByDefinition(ItemDefinition, NumItemsToConsume);
			}
		}
	}
#endif*/
}
