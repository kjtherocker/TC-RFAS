// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Creature_Base.h"
#include "GameFramework/PlayerController.h"
#include "CombatManager.generated.h"

/**
 * 
 */

class ACreature_Base;

UCLASS()
class TCRFAS_API ACombatManager : public APlayerController
{
	GENERATED_BODY()

	public :

	 TArray<ACreature_Base*> TurnOrderAlly;
	 TArray<ACreature_Base*> TurnOrderEnemy;
	
	 void CombatStart();
};
