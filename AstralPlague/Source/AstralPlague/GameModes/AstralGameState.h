// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "AbilitySystemInterface.h"
#include "ModularGameState.h"

#include "AstralGameState.generated.h"

struct FAstralVerbMessage;

class APlayerState;
class UAbilitySystemComponent;
class UAstralAbilitySystemComponent;
class UAstralExperienceManagerComponent;
class UObject;
struct FFrame;

/**
 * AAstralGameState
 *
 *	The base game state class used by this project.
 */
UCLASS(Config = Game)
class ASTRALPLAGUE_API AAstralGameState : public AModularGameStateBase, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:

	AAstralGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//~AActor interface
	virtual void PreInitializeComponents() override;
	virtual void PostInitializeComponents() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void Tick(float DeltaSeconds) override;
	//~End of AActor interface

	//~AGameStateBase interface
	virtual void AddPlayerState(APlayerState* PlayerState) override;
	virtual void RemovePlayerState(APlayerState* PlayerState) override;
	virtual void SeamlessTravelTransitionCheckpoint(bool bToTransitionMap) override;
	//~End of AGameStateBase interface

	//~IAbilitySystemInterface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	//~End of IAbilitySystemInterface

	// Gets the ability system component used for game wide things
	UFUNCTION(BlueprintCallable, Category = "Astral|GameState")
	UAstralAbilitySystemComponent* GetAstralAbilitySystemComponent() const { return AbilitySystemComponent; }


private:
	// Handles loading and managing the current gameplay experience
	UPROPERTY()
	TObjectPtr<UAstralExperienceManagerComponent> ExperienceManagerComponent;

	// The ability system component subobject for game-wide things (primarily gameplay cues)
	UPROPERTY(VisibleAnywhere, Category = "Astral|GameState")
	TObjectPtr<UAstralAbilitySystemComponent> AbilitySystemComponent;


};
