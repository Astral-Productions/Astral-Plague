// Copyright Epic Games, Inc. All Rights Reserved.

#include "AstralMappableConfigPair.h"

#include "CommonUISettings.h"
#include "ICommonUIModule.h"
#include "PlayerMappableInputConfig.h"
#include "AstralPlague/Settings/AstralSettingsLocal.h"
#include "AstralPlague/System/AstralAssetManager.h"


#include UE_INLINE_GENERATED_CPP_BY_NAME(AstralMappableConfigPair)

PRAGMA_DISABLE_DEPRECATION_WARNINGS

bool FMappableConfigPair::CanBeActivated() const
{
	const FGameplayTagContainer& PlatformTraits = ICommonUIModule::GetSettings().GetPlatformTraits();

	// If the current platform does NOT have all the dependent traits, then don't activate it
	if (!DependentPlatformTraits.IsEmpty() && !PlatformTraits.HasAll(DependentPlatformTraits))
	{
		return false;
	}

	// If the platform has any of the excluded traits, then we shouldn't activate this config.
	if (!ExcludedPlatformTraits.IsEmpty() && PlatformTraits.HasAny(ExcludedPlatformTraits))
	{
		return false;
	}

	return true;
}

bool FMappableConfigPair::RegisterPair(const FMappableConfigPair& Pair)
{
	UAstralAssetManager& AssetManager = UAstralAssetManager::Get();

	if (UAstralSettingsLocal* Settings = UAstralSettingsLocal::Get())
	{
		// Register the pair with the settings, but do not activate it yet
		if (const UPlayerMappableInputConfig* LoadedConfig = AssetManager.GetAsset(Pair.Config))
		{
			Settings->RegisterInputConfig(Pair.Type, LoadedConfig, false);
			return true;
		}	
	}
	
	return false;
}

void FMappableConfigPair::UnregisterPair(const FMappableConfigPair& Pair)
{
	UAstralAssetManager& AssetManager = UAstralAssetManager::Get();

	if (UAstralSettingsLocal* Settings = UAstralSettingsLocal::Get())
	{
		if (const UPlayerMappableInputConfig* LoadedConfig = AssetManager.GetAsset(Pair.Config))
		{
			Settings->UnregisterInputConfig(LoadedConfig);
		}
	}
}

PRAGMA_ENABLE_DEPRECATION_WARNINGS