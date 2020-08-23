// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CombatManager.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/UserWidget.h"
#include "UiScreen_Base.generated.h"


class UUserWidget;


enum MenuDirection
{
	Looping,
	StopAtStartAndEnd
};


UCLASS()
class TCRFAS_API AUiScreen_Base : public APawn
{
	GENERATED_BODY()


public:
	// Sets default values for this pawn's properties
	AUiScreen_Base();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void Initialize();
	virtual void OnPush();
	virtual void OnPop();
	virtual void ReturnToLastScreen();

	virtual void SetMenuConstraints();
	
	virtual void MoveMenuCursorPositionX(float aMovement);
	virtual void MoveMenuCursorPositionY(float aMovement);
	virtual void MenuSelection();

	virtual void ActivateCurrentObjectCursorIsOn();
	
	virtual void DefaultInputBindings(AUiScreen_Base* aBindedClass);
	
	virtual int MenuDirectionCalculation(float Axis, int aCurrent,int aMax, int aMin,MenuDirection aMenuDirection);

	ACombatManager* CombatManager;

	
	int cputest;
	
	int m_CursorYMax;
	int m_CursorYCurrent;
	int m_CursorYPrevious;
	int m_CursorYMin;
    
	int m_CursorXMax;
	int m_CursorXCurrent;
	int m_CursorXPrevious;
	int m_CursorXMin;
    

};
