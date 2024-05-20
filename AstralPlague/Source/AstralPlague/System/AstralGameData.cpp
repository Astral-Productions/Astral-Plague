// Copyright Epic Games, Inc. All Rights Reserved.

#include "AstralGameData.h"
#include "AstralAssetManager.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AstralGameData)

UAstralGameData::UAstralGameData()
{
}

const UAstralGameData& UAstralGameData::UAstralGameData::Get()
{
	return UAstralAssetManager::Get().GetGameData();
}
