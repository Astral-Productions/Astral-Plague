// Copyright Epic Games, Inc. All Rights Reserved.

#include "AstralPlayerCameraManager.h"

#include "Async/TaskGraphInterfaces.h"
#include "Engine/Canvas.h"
#include "Engine/Engine.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "AstralCameraComponent.h"
#include "AstralUICameraManagerComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AstralPlayerCameraManager)

class FDebugDisplayInfo;

static FName UICameraComponentName(TEXT("UICamera"));

AAstralPlayerCameraManager::AAstralPlayerCameraManager(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DefaultFOV = ASTRAL_CAMERA_DEFAULT_FOV;
	ViewPitchMin = ASTRAL_CAMERA_DEFAULT_PITCH_MIN;
	ViewPitchMax = ASTRAL_CAMERA_DEFAULT_PITCH_MAX;

	UICamera = CreateDefaultSubobject<UAstralUICameraManagerComponent>(UICameraComponentName);
}

UAstralUICameraManagerComponent* AAstralPlayerCameraManager::GetUICameraComponent() const
{
	return UICamera;
}

void AAstralPlayerCameraManager::UpdateViewTarget(FTViewTarget& OutVT, float DeltaTime)
{
	// If the UI Camera is looking at something, let it have priority.
	if (UICamera->NeedsToUpdateViewTarget())
	{
		Super::UpdateViewTarget(OutVT, DeltaTime);
		UICamera->UpdateViewTarget(OutVT, DeltaTime);
		return;
	}

	Super::UpdateViewTarget(OutVT, DeltaTime);
}

void AAstralPlayerCameraManager::DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos)
{
	check(Canvas);

	FDisplayDebugManager& DisplayDebugManager = Canvas->DisplayDebugManager;

	DisplayDebugManager.SetFont(GEngine->GetSmallFont());
	DisplayDebugManager.SetDrawColor(FColor::Yellow);
	DisplayDebugManager.DrawString(FString::Printf(TEXT("AstralPlayerCameraManager: %s"), *GetNameSafe(this)));

	Super::DisplayDebug(Canvas, DebugDisplay, YL, YPos);

	const APawn* Pawn = (PCOwner ? PCOwner->GetPawn() : nullptr);

	if (const UAstralCameraComponent* CameraComponent = UAstralCameraComponent::FindCameraComponent(Pawn))
	{
		CameraComponent->DrawDebug(Canvas);
	}
}

