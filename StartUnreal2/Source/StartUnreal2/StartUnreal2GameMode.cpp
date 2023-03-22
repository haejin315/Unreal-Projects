// Copyright Epic Games, Inc. All Rights Reserved.

#include "StartUnreal2GameMode.h"
#include "StartUnreal2Character.h"
#include "UObject/ConstructorHelpers.h"

AStartUnreal2GameMode::AStartUnreal2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
