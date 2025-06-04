// Copyright Epic Games, Inc. All Rights Reserved.

#include "MycoProjectGameMode.h"
#include "MycoProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMycoProjectGameMode::AMycoProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
