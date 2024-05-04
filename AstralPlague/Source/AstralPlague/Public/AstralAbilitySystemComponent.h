// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AstralAbilitySystemComponent.generated.h"

class AActor;
class UGameplayAbility;
class UObject;


UCLASS()
class ASTRALPLAGUE_API UAstralAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	UAstralAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
protected:	

	// Handles to abilities that had their input pressed this frame.
	TArray<FGameplayAbilitySpecHandle> InputPressedSpecHandles;

	// Handles to abilities that had their input released this frame.
	TArray<FGameplayAbilitySpecHandle> InputReleasedSpecHandles;

	// Handles to abilities that have their input held.
	TArray<FGameplayAbilitySpecHandle> InputHeldSpecHandles;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Actor)
	FGameplayTagContainer GameplayTags;
};
