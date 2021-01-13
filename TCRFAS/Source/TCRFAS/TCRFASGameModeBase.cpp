// Copyright Epic Games, Inc. All Rights Reserved.


#include "TCRFASGameModeBase.h"


#include "MenuHUD.h"
#include "PlayerControllerPawn.h"
#include "GameFramework/DefaultPawn.h"

ATCRFASGameModeBase::ATCRFASGameModeBase()
{
    bNetLoadOnClient = false;
    bPauseable = true;
    bStartPlayersAsSpectators = false;
    
    DefaultPawnClass = ADefaultPawn::StaticClass();
    PlayerControllerClass = APlayerController::StaticClass();


    UiManager = AUIManager::StaticClass();
    HUDClass = AMenuHUD::StaticClass();



    float test = 0;
}
