// Copyright Astral Productions 2024

#pragma once

#include "CoreMinimal.h"
#include "ModularAIController.h"
#include "AstralNPCController.generated.h"

UCLASS()
class ASTRALPLAGUE_API AAstralNPCController : public AModularAIController
{
	GENERATED_BODY()
public:
	AAstralNPCController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//~ILyraTeamAgentInterface interface
	virtual void SetGenericTeamId(const FGenericTeamId& NewTeamID) override; 
	virtual FGenericTeamId GetGenericTeamId() const override;	
	ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;
	//~End of ILyraTeamAgentInterface interface
	
	// Attempts to restart this controller (e.g., to respawn it)
	void ServerRestartController();

	virtual void OnUnPossess() override;

protected:
	// Called when the player state is set or cleared
	virtual void OnPlayerStateChanged();

	//~AController interface
	virtual void InitPlayerState() override;
	virtual void CleanupPlayerState() override;
	virtual void OnRep_PlayerState() override;
	//~End of AController interface

private:	

	UPROPERTY()
	TObjectPtr<APlayerState> LastSeenPlayerState;
};
