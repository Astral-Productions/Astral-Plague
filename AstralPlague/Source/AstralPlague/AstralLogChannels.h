// Copyright Astral Productions 2024

#pragma once

#pragma once

#include "Logging/LogMacros.h"

class UObject;

ASTRALPLAGUE_API DECLARE_LOG_CATEGORY_EXTERN(LogAstral, Log, All);
ASTRALPLAGUE_API DECLARE_LOG_CATEGORY_EXTERN(LogAstralExperience, Log, All);
ASTRALPLAGUE_API DECLARE_LOG_CATEGORY_EXTERN(LogAstralAbilitySystem, Log, All);
ASTRALPLAGUE_API DECLARE_LOG_CATEGORY_EXTERN(LogAstralTeams, Log, All);

ASTRALPLAGUE_API FString GetClientServerContextString(UObject* ContextObject = nullptr);
