// Copyright Astral Productions 2024


#include "AstralPawnData.h"

UAstralPawnData::UAstralPawnData(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PawnClass = nullptr;
	InputConfig = nullptr;
	DefaultCameraMode = nullptr;
}

