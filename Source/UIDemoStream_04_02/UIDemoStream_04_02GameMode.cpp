// Copyright Epic Games, Inc. All Rights Reserved.

#include "UIDemoStream_04_02GameMode.h"
#include "UIDemoStream_04_02PlayerController.h"
#include "UIDemoStream_04_02Character.h"
#include "UObject/ConstructorHelpers.h"

AUIDemoStream_04_02GameMode::AUIDemoStream_04_02GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AUIDemoStream_04_02PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}