// Copyright Epic Games, Inc. All Rights Reserved.

#include "AstralUICameraManagerComponent.h"

#include "GameFramework/HUD.h"
#include "GameFramework/PlayerController.h"
#include "AstralPlayerCameraManager.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AstralUICameraManagerComponent)

class AActor;
class FDebugDisplayInfo;

UAstralUICameraManagerComponent* UAstralUICameraManagerComponent::GetComponent(APlayerController* PC)
{
	if (PC != nullptr)
	{
		if (AAstralPlayerCameraManager* PCCamera = Cast<AAstralPlayerCameraManager>(PC->PlayerCameraManager))
		{
			return PCCamera->GetUICameraComponent();
		}
	}

	return nullptr;
}

UAstralUICameraManagerComponent::UAstralUICameraManagerComponent()
{
	bWantsInitializeComponent = true;

	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		// Register "showdebug" hook.
		if (!IsRunningDedicatedServer())
		{
			AHUD::OnShowDebugInfo.AddUObject(this, &ThisClass::OnShowDebugInfo);
		}
	}
}

void UAstralUICameraManagerComponent::InitializeComponent()
{
	Super::InitializeComponent();
}

void UAstralUICameraManagerComponent::SetViewTarget(AActor* InViewTarget, FViewTargetTransitionParams TransitionParams)
{
	TGuardValue<bool> UpdatingViewTargetGuard(bUpdatingViewTarget, true);

	ViewTarget = InViewTarget;
	CastChecked<AAstralPlayerCameraManager>(GetOwner())->SetViewTarget(ViewTarget, TransitionParams);
}

bool UAstralUICameraManagerComponent::NeedsToUpdateViewTarget() const
{
	return false;
}

void UAstralUICameraManagerComponent::UpdateViewTarget(struct FTViewTarget& OutVT, float DeltaTime)
{
}

void UAstralUICameraManagerComponent::OnShowDebugInfo(AHUD* HUD, UCanvas* Canvas, const FDebugDisplayInfo& DisplayInfo, float& YL, float& YPos)
{
}
