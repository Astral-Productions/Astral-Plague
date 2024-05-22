// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once


#include "../../../Plugins/CommonGame/Source/Public/CommonLocalPlayer.h"


#include "AstralLocalPlayer.generated.h"

struct FGenericTeamId;

class APlayerController;
class UInputMappingContext;
class UAstralSettingsLocal;

class UObject;
class UWorld;
struct FFrame;
struct FSwapAudioOutputResult;

/**
 * UAstralLocalPlayer
 */
UCLASS()
class ASTRALPLAGUE_API UAstralLocalPlayer : public UCommonLocalPlayer
{
	GENERATED_BODY()

public:

	UAstralLocalPlayer();

	//~UObject interface
	virtual void PostInitProperties() override;
	//~End of UObject interface

	//~UPlayer interface
	virtual void SwitchController(class APlayerController* PC) override;
	//~End of UPlayer interface

	//~ULocalPlayer interface
	virtual bool SpawnPlayActor(const FString& URL, FString& OutError, UWorld* InWorld) override;
	
	//~End of ULocalPlayer interface

	
	/** Gets the local settings for this player, this is read from config files at process startup and is always valid */
	UFUNCTION()
	UAstralSettingsLocal* GetLocalSettings() const;
	

	/** Starts an async request to load the shared settings, this will call OnSharedSettingsLoaded after loading or creating new ones */
	void LoadSharedSettingsFromDisk(bool bForceLoad = false);

protected:
	

	void OnAudioOutputDeviceChanged(const FString& InAudioOutputDeviceId);
	
	UFUNCTION()
	void OnCompletedAudioDeviceSwap(const FSwapAudioOutputResult& SwapResult);

	

private:


	FUniqueNetIdRepl NetIdForSharedSettings;

	UPROPERTY(Transient)
	mutable TObjectPtr<const UInputMappingContext> InputMappingContext;

	UPROPERTY()
	TWeakObjectPtr<APlayerController> LastBoundPC;
};
