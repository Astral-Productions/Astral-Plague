// Copyright Epic Games, Inc. All Rights Reserved.

#include "AstralPlagueGameMode.h"
#include "Character/AstralPlagueCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAstralPlagueGameMode::AAstralPlagueGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
