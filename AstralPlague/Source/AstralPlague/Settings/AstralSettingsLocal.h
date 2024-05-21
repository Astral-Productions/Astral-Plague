// Copyright Astral Productions 2024

#pragma once

#include "CoreMinimal.h"
#include "AstralPlague/Input/AstralMappableConfigPair.h"
#include "GameFramework/GameUserSettings.h"
#include "InputCoreTypes.h"
#include "CommonInputTypeEnum.h"
#include "AstralSettingsLocal.generated.h"

enum class ECommonInputType : uint8;

class UObject;

/**
 * This class is currently very bare bones as the Astral logic is QUITE extensive. 
 */
UCLASS()
class UAstralSettingsLocal : public UGameUserSettings
{
	GENERATED_BODY()


public:
	
	void OnExperienceLoaded();
	
public:
	UAstralSettingsLocal();

	static UAstralSettingsLocal* Get();

	PRAGMA_DISABLE_DEPRECATION_WARNINGS

	class UE_DEPRECATED(5.3, "Input registration has been deprecated in favor of Enhanced Input User Settings") FInputConfigDelegate;	
	DECLARE_EVENT_OneParam(UAstralSettingsLocal, FInputConfigDelegate, const FLoadedMappableConfigPair& /*Config*/);

	/** Delegate called when a new input config has been registered */
	UE_DEPRECATED(5.3, "Input registration has been deprecated in favor of Enhanced Input User Settings")
	FInputConfigDelegate OnInputConfigRegistered;

	/** Delegate called when a registered input config has been activated */
	UE_DEPRECATED(5.3, "Input registration has been deprecated in favor of Enhanced Input User Settings")
	FInputConfigDelegate OnInputConfigActivated;
	
	/** Delegate called when a registered input config has been deactivate */
	UE_DEPRECATED(5.3, "Input registration has been deprecated in favor of Enhanced Input User Settings")
	FInputConfigDelegate OnInputConfigDeactivated;
	
	/** Register the given input config with the settings to make it available to the player. */
	UE_DEPRECATED(5.3, "Input registration has been deprecated in favor of Enhanced Input User Settings")
	void RegisterInputConfig(ECommonInputType Type, const UPlayerMappableInputConfig* NewConfig, const bool bIsActive);
	
	/** Unregister the given input config. Returns the number of configs removed. */
	UE_DEPRECATED(5.3, "Input registration has been deprecated in favor of Enhanced Input User Settings")
	int32 UnregisterInputConfig(const UPlayerMappableInputConfig* ConfigToRemove);

	/** Get an input config with a certain name. If the config doesn't exist then nullptr will be returned. */
	UFUNCTION(BlueprintCallable)
	const UPlayerMappableInputConfig* GetInputConfigByName(FName ConfigName) const;

	/** Get all currently registered input configs */
	UE_DEPRECATED(5.3, "Input registration has been deprecated in favor of Enhanced Input User Settings")
	const TArray<FLoadedMappableConfigPair>& GetAllRegisteredInputConfigs() const { return RegisteredInputConfigs; }
	
	
	PRAGMA_ENABLE_DEPRECATION_WARNINGS

private:
	
	PRAGMA_DISABLE_DEPRECATION_WARNINGS
	
	UE_DEPRECATED(5.3, "Input registration has been deprecated in favor of Enhanced Input User Settings")
	TArray<FLoadedMappableConfigPair> RegisteredInputConfigs;
	
	PRAGMA_ENABLE_DEPRECATION_WARNINGS
};

