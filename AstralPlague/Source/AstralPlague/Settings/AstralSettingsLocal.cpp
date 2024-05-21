// Copyright Astral Productions 2024


#include "AstralSettingsLocal.h"


#include "Engine/Engine.h"
#include "EnhancedActionKeyMapping.h"
#include "Framework/Application/SlateApplication.h"
#include "Engine/World.h"
#include "Misc/App.h"
#include "CommonInputSubsystem.h"
#include "GenericPlatform/GenericPlatformFramePacer.h"

#include "PlayerMappableInputConfig.h"
#include "EnhancedInputSubsystems.h"
#include "ICommonUIModule.h"
#include "CommonUISettings.h"

#include "Widgets/Layout/SSafeZone.h"

#include "DeviceProfiles/DeviceProfileManager.h"
#include "DeviceProfiles/DeviceProfile.h"
#include "HAL/PlatformFramePacer.h"


PRAGMA_DISABLE_DEPRECATION_WARNINGS

void UAstralSettingsLocal::OnExperienceLoaded()
{
	
}

UAstralSettingsLocal::UAstralSettingsLocal()
{
	
}

UAstralSettingsLocal* UAstralSettingsLocal::Get()
{
	return GEngine ? CastChecked<UAstralSettingsLocal>(GEngine->GetGameUserSettings()) : nullptr;
}

void UAstralSettingsLocal::RegisterInputConfig(ECommonInputType Type, const UPlayerMappableInputConfig* NewConfig, const bool bIsActive)
{
	if (NewConfig)
	{
		const int32 ExistingConfigIdx = RegisteredInputConfigs.IndexOfByPredicate( [&NewConfig](const FLoadedMappableConfigPair& Pair) { return Pair.Config == NewConfig; } );
		if (ExistingConfigIdx == INDEX_NONE)
		{
			const int32 NumAdded = RegisteredInputConfigs.Add(FLoadedMappableConfigPair(NewConfig, Type, bIsActive));
			if (NumAdded != INDEX_NONE)
			{
				OnInputConfigRegistered.Broadcast(RegisteredInputConfigs[NumAdded]);
			}	
		}
	}
}

int32 UAstralSettingsLocal::UnregisterInputConfig(const UPlayerMappableInputConfig* ConfigToRemove)
{
	if (ConfigToRemove)
	{
		const int32 Index = RegisteredInputConfigs.IndexOfByPredicate( [&ConfigToRemove](const FLoadedMappableConfigPair& Pair) { return Pair.Config == ConfigToRemove; } );
		if (Index != INDEX_NONE)
		{
			RegisteredInputConfigs.RemoveAt(Index);
			return 1;
		}
			
	}
	return INDEX_NONE;
}

const UPlayerMappableInputConfig* UAstralSettingsLocal::GetInputConfigByName(FName ConfigName) const
{
	for (const FLoadedMappableConfigPair& Pair : RegisteredInputConfigs)
	{
		if (Pair.Config->GetConfigName() == ConfigName)
		{
			return Pair.Config;
		}
	}
	return nullptr;
}

PRAGMA_ENABLE_DEPRECATION_WARNINGS
