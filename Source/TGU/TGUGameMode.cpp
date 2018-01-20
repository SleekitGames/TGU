// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TGUGameMode.h"
#include "TGUCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATGUGameMode::ATGUGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Dynamic/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
