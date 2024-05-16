// Copyright Epic Games, Inc. All Rights Reserved.

#include "AstralInputComponent.h"

#include "EnhancedInputSubsystems.h"
/*#include "Player/AstralLocalPlayer.h"
#include "Settings/AstralSettingsLocal.h"*/

#include UE_INLINE_GENERATED_CPP_BY_NAME(AstralInputComponent)

class UAstralInputConfig;

UAstralInputComponent::UAstralInputComponent(const FObjectInitializer& ObjectInitializer)
{
}

void UAstralInputComponent::AddInputMappings(const UAstralInputConfig* InputConfig, UEnhancedInputLocalPlayerSubsystem* InputSubsystem) const
{
	check(InputConfig);
	check(InputSubsystem);

	// Here you can handle any custom logic to add something from your input config if required
}

void UAstralInputComponent::RemoveInputMappings(const UAstralInputConfig* InputConfig, UEnhancedInputLocalPlayerSubsystem* InputSubsystem) const
{
	check(InputConfig);
	check(InputSubsystem);

	// Here you can handle any custom logic to remove input mappings that you may have added above
}

void UAstralInputComponent::RemoveBinds(TArray<uint32>& BindHandles)
{
	for (uint32 Handle : BindHandles)
	{
		RemoveBindingByHandle(Handle);
	}
	BindHandles.Reset();
}
