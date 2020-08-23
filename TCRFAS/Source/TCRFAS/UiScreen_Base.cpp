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

void AUiScreen_Base::Initialize()
{
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

	DefaultInputBindings(this);
}



void AUiScreen_Base::OnPush()
{
	InputComponent->Activate();
}

void AUiScreen_Base::OnPop()
{
	InputComponent->Deactivate();
}

void AUiScreen_Base::ReturnToLastScreen()
{
}

void AUiScreen_Base::SetMenuConstraints()
{
}

void AUiScreen_Base::MoveMenuCursorPositionY(float aMovement)
{
	m_CursorYPrevious = m_CursorYCurrent;    

	m_CursorYCurrent = MenuDirectionCalculation(aMovement, m_CursorYCurrent, m_CursorYMax, m_CursorYMin,StopAtStartAndEnd);
	
	MenuSelection();
}

void AUiScreen_Base::MoveMenuCursorPositionX(float aMovement)
{

	m_CursorXPrevious = m_CursorXCurrent;
        
	m_CursorXCurrent = MenuDirectionCalculation(aMovement, m_CursorXCurrent, m_CursorXMax, m_CursorXMin,StopAtStartAndEnd);
	
	MenuSelection();
}

void AUiScreen_Base::MenuSelection()
{
}

void AUiScreen_Base::ActivateCurrentObjectCursorIsOn()
{
}

void AUiScreen_Base::DefaultInputBindings(AUiScreen_Base* aBindedClass)
{
	InputComponent->BindAxis("Keyboard_Up", aBindedClass,  &AUiScreen_Base::MoveMenuCursorPositionX);
	InputComponent->BindAxis("Keyboard_Down", aBindedClass,  &AUiScreen_Base::MoveMenuCursorPositionX);
	InputComponent->BindAxis("Keyboard_Left", aBindedClass,  &AUiScreen_Base::MoveMenuCursorPositionY);
	InputComponent->BindAxis("Keyboard_Right", aBindedClass,  &AUiScreen_Base::MoveMenuCursorPositionY);
	
}

int AUiScreen_Base::MenuDirectionCalculation(float Axis, int aCurrent, int aMax, int aMin, MenuDirection aMenuDirection)
{

	if(aMenuDirection == Looping)
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

	if(aMenuDirection == StopAtStartAndEnd)
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

	return 0;
}

