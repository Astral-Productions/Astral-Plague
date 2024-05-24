// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonPlayerController.h"
#include "ModularPlayerController.h"
#include "AstralPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ASTRALPLAGUE_API AAstralPlayerController : public ACommonPlayerController
{
	GENERATED_BODY()

public:

	AAstralPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintCallable, Category = "Astral|PlayerController")
	AAstralPlayerState* GetAstralPlayerState() const;

	UFUNCTION(BlueprintCallable, Category = "Astral|PlayerController")
	UAstralAbilitySystemComponent* GetAstralAbilitySystemComponent() const;

	//~AActor interface
	virtual void PreInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	//~End of AActor interface

	//~AController interface
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
	virtual void InitPlayerState() override;
	virtual void CleanupPlayerState() override;
	virtual void OnRep_PlayerState() override;
	//~End of AController interface

	//~APlayerController interface
	virtual void ReceivedPlayer() override;
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetPlayer(UPlayer* InPlayer) override;

	virtual void UpdateForceFeedback(IInputInterface* InputInterface, const int32 ControllerId) override;
	virtual void UpdateHiddenComponents(const FVector& ViewLocation, TSet<FPrimitiveComponentId>& OutHiddenComponents) override;
	virtual void PreProcessInput(const float DeltaTime, const bool bGamePaused) override;
	virtual void PostProcessInput(const float DeltaTime, const bool bGamePaused) override;
	//~End of APlayerController interface

	UFUNCTION(BlueprintCallable, Category = "Astral|Character")
	void SetIsAutoRunning(const bool bEnabled);

	UFUNCTION(BlueprintCallable, Category = "Astral|Character")
	bool GetIsAutoRunning() const;

private:

	UPROPERTY()
	TObjectPtr<APlayerState> LastSeenPlayerState;

protected:
	// Called when the player state is set or cleared
	virtual void OnPlayerStateChanged();


protected:

	//~APlayerController interface

	//~End of APlayerController interface

	
	void OnStartAutoRun();
	void OnEndAutoRun();


	bool bHideViewTargetPawnNextFrame = false;
	
};
