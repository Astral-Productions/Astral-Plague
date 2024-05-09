// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "AstralPlayerController.h"
#include "GameFramework/PlayerState.h"
#include "AstralPlayerState.generated.h"

class APLayerState;
class UAbilitySystemComponent;
class UAstralAbilitySystemComponent;
class UObject;

UCLASS(Config = Game)
class ASTRALPLAGUE_API AAstralPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:

	AAstralPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void PostInitializeComponents() override;

	UFUNCTION(BlueprintCallable, Category = "Astral|PlayerState")
	AAstralPlayerController* GetAstralPlayerController() const;
	
	//~IAbilitySystemInterface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	//~End of IAbilitySystemInterface

	// Gets the ability system component used for game wide things
	UFUNCTION(BlueprintCallable, Category = "Astral|PlayerState")
	UAstralAbilitySystemComponent* GetAstralAbilitySystemComponent() const { return AbilitySystemComponent; }


private:
	// The ability system component subobject for game-wide things (primarily gameplay cues)
	UPROPERTY(VisibleAnywhere, Category = "Astral|PlayerState")
	TObjectPtr<UAstralAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<const class UDefaultAttributeSet> StatsSet;
};
