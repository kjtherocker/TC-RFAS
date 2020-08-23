// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "UiScreen_Base.h"
#include "UiScreen_Commandboard.generated.h"

/**
 * 
 */

enum Commandboard
{
	DefaultAttack,
	Skills,
	Overclock,
	NumberOfItems
	
	
};

UCLASS()
class TCRFAS_API AUiScreen_Commandboard : public AUiScreen_Base
{
	GENERATED_BODY()

public:

	virtual void Initialize() override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void MenuSelection() override;

	virtual void SetMenuConstraints() override;

	//void SetCommandboardReferences(ACreature_Base* aCreature);

	virtual void ActivateCurrentObjectCursorIsOn() override;

	virtual void OnPush() override;

	//ACreature_Base* CommandboardCreature;
};
