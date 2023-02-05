// Copyright Epic Games, Inc. All Rights Reserved.

#include "GroupProject1GameMode.h"
#include "GroupProject1Character.h"
#include "UObject/ConstructorHelpers.h"

AGroupProject1GameMode::AGroupProject1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
