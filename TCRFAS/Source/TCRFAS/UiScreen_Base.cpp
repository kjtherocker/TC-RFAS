// Fill out your copyright notice in the Description page of Project Settings.


#include "UiScreen_Base.h"

// Sets default values
AUiScreen_Base::AUiScreen_Base()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUiScreen_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUiScreen_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AUiScreen_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	//InputComponent->BindAxis("Keyboard_Up", this, &AUiScreen_Base::MoveMenuCursorPosition );
}

void AUiScreen_Base::Initialize()
{
}

void AUiScreen_Base::OnPush()
{
	
}

void AUiScreen_Base::OnPop()
{
}

void AUiScreen_Base::ReturnToLastScreen()
{
}

void AUiScreen_Base::MoveMenuCursorPosition(float aMovement)
{

	m_CursorXPrevious = m_CursorXCurrent;
	m_CursorYPrevious = m_CursorYCurrent;
        
	m_CursorXCurrent = MenuDirectionCalculationLooping(aMovement, m_CursorXCurrent, m_CursorXMax, m_CursorXMin);
	m_CursorYCurrent = MenuDirectionCalculationLooping(aMovement, m_CursorYCurrent, m_CursorYMax, m_CursorYMin);
	
	MenuSelection(m_CursorXCurrent, m_CursorYCurrent);
}

void AUiScreen_Base::MenuSelection(int aCursorX, int aCursorY)
{
}

int AUiScreen_Base::MenuDirectionCalculationLooping(float Axis, int aCurrent, int aMax, int aMin)
{
	if (Axis < 0)
	{
		aCurrent--;
	}
        
	if (Axis > 0)
	{
		aCurrent++;
	}

	if (aCurrent < aMin)
	{
		aCurrent = aMax;
	}
	else if (aCurrent > aMax)
	{
		aCurrent = aMin;
	}

	return aCurrent;
}

int AUiScreen_Base::MenuDirectionCalculationEnd(float Axis, int aCurrent, int aMax, int aMin)
{
	if (Axis < 0)
	{
		aCurrent++;
	}
        
	if (Axis > 0)
	{
		aCurrent--;
	}

	if (aCurrent < aMin)
	{
		aCurrent = aMin;
	}
	else if (aCurrent > aMax)
	{
		aCurrent = aMax;
	}

	return aCurrent;
}

int AUiScreen_Base::MenuDirectionCalculationEndInvertAxis(float Axis, int aCurrent, int aMax, int aMin)
{
	if (Axis > 0)
	{
		aCurrent++;
	}
        
	if (Axis < 0)
	{
		aCurrent--;
	}

	if (aCurrent < aMin)
	{
		aCurrent = aMin;
	}
	else if (aCurrent > aMax)
	{
		aCurrent = aMax;
	}

	return aCurrent;
}

