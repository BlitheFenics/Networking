// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "lab7GameMode.h"
#include "lab7Character.h"
#include "UObject/ConstructorHelpers.h"

Alab7GameMode::Alab7GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
