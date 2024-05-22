// Copyright Epic Games, Inc. All Rights Reserved.

#include "AstralPlague/Player/AstralLocalPlayer.h"

#include "AudioMixerBlueprintLibrary.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "AstralPlague/Settings/AstralSettingsLocal.h"
#include "CommonUserSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AstralLocalPlayer)

class UObject;

UAstralLocalPlayer::UAstralLocalPlayer()
{
}

void UAstralLocalPlayer::PostInitProperties()
{
	Super::PostInitProperties();

	if (UAstralSettingsLocal* LocalSettings = GetLocalSettings())
	{
		//LocalSettings->OnAudioOutputDeviceChanged.AddUObject(this, &UAstralLocalPlayer::OnAudioOutputDeviceChanged);
	}
}

void UAstralLocalPlayer::SwitchController(class APlayerController* PC)
{
	Super::SwitchController(PC);	
}

bool UAstralLocalPlayer::SpawnPlayActor(const FString& URL, FString& OutError, UWorld* InWorld)
{
	const bool bResult = Super::SpawnPlayActor(URL, OutError, InWorld);	

	return bResult;
}

UAstralSettingsLocal* UAstralLocalPlayer::GetLocalSettings() const
{
	return UAstralSettingsLocal::Get();
}

void UAstralLocalPlayer::OnAudioOutputDeviceChanged(const FString& InAudioOutputDeviceId)
{
	FOnCompletedDeviceSwap DevicesSwappedCallback;
	DevicesSwappedCallback.BindUFunction(this, FName("OnCompletedAudioDeviceSwap"));
	UAudioMixerBlueprintLibrary::SwapAudioOutputDevice(GetWorld(), InAudioOutputDeviceId, DevicesSwappedCallback);
}

void UAstralLocalPlayer::OnCompletedAudioDeviceSwap(const FSwapAudioOutputResult& SwapResult)
{
	if (SwapResult.Result == ESwapAudioOutputDeviceResultState::Failure)
	{
	}
}
