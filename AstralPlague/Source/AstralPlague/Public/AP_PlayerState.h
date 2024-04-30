// ©Astral Productions 2024, all rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "AstralAbilitySystemComponent.h"
#include "AP_PlayerState.generated.h"

class APlayerState;
class UAbilitySystemComponent;
class UAstralAbilitySystemComponent;

/**
 * 
 */
UCLASS()
class ASTRALPLAGUE_API AAP_PlayerState : public APlayerState, public  IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	//~IAbilitySystemInterface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	//~End of IAbilitySystemInterface

	
	// Gets the ability system component used for game wide things
	UFUNCTION(BlueprintCallable, Category = "Astral|GameState")
	UAstralAbilitySystemComponent* GetAstralAbilitySystemComponent() const { return AbilitySystemComponent; }

private:
	
	// The ability system component subobject for game-wide things (primarily gameplay cues)
	UPROPERTY(VisibleAnywhere, Category = "Astral|GameState")
	TObjectPtr<UAstralAbilitySystemComponent> AbilitySystemComponent;
	
};
