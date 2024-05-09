// Copyright Astral Productions 2024

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AstralPawnData.generated.h"

class APawn;
class UAstralAbilitySet;
class UAstralAbilityTagRelationshipMapping;
class UAstralCameraMode;
class UAstralInputConfig;
class UObject;


/**
 * UAstralPawnData
 *
 *	Non-mutable data asset that contains properties used to define a pawn.
 */
UCLASS(BlueprintType, Const, Meta = (DisplayName = "Astral Pawn Data", ShortTooltip = "Data asset used to define a Pawn."))
class ASTRALPLAGUE_API UAstralPawnData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	UAstralPawnData(const FObjectInitializer& ObjectInitializer);

public:

	// Class to instantiate for this pawn (should usually derive from AAstralPawn or AAstralCharacter).
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Astral|Pawn")
	TSubclassOf<APawn> PawnClass;

	//@todo Investigate this functionality and associated classes.
	
	/*// Ability sets to grant to this pawn's ability system.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Astral|Abilities")
	TArray<TObjectPtr<UAstralAbilitySet>> AbilitySets;

	// What mapping of ability tags to use for actions taking by this pawn
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Astral|Abilities")
	TObjectPtr<UAstralAbilityTagRelationshipMapping> TagRelationshipMapping;

	// Input configuration used by player controlled pawns to create input mappings and bind input actions.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Astral|Input")
	TObjectPtr<UAstralInputConfig> InputConfig;

	// Default camera mode used by player controlled pawns.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Astral|Camera")
	TSubclassOf<UAstralCameraMode> DefaultCameraMode;*/
};
