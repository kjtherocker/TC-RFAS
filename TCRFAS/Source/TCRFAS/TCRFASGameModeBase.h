// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UIManager.h"
#include "TCRFASGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TCRFAS_API ATCRFASGameModeBase : public AGameModeBase
{
	GENERATED_BODY()


public:
    
    ATCRFASGameModeBase();

    UClass* UiManager;
};
