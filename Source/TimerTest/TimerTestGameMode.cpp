// Copyright Epic Games, Inc. All Rights Reserved.

#include "TimerTestGameMode.h"
#include "TimerTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATimerTestGameMode::ATimerTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
