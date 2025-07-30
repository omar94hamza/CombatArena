// Copyright Epic Games, Inc. All Rights Reserved.

#include "CombatArenaGameMode.h"
#include "CombatArenaCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACombatArenaGameMode::ACombatArenaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
