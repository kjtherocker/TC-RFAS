// Fill out your copyright notice in the Description page of Project Settings.


#include "UiScreen_Commandboard.h"


void AUiScreen_Commandboard::Initialize()
{
}

void AUiScreen_Commandboard::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    DefaultInputBindings(this);

    InputComponent->BindAction("Activate" , IE_Pressed, this, &AUiScreen_Commandboard::ActivateCurrentObjectCursorIsOn);
}

void AUiScreen_Commandboard::MenuSelection()
{
   
}

void AUiScreen_Commandboard::SetMenuConstraints()
{
    m_CursorYMax = 0;
    m_CursorYCurrent = 0;
    m_CursorYMin = 0;
    
    m_CursorXMax = NumberOfItems - 1;
    m_CursorXMin = DefaultAttack;
    m_CursorXCurrent = DefaultAttack;
}

//void AUiScreen_Commandboard::SetCommandboardReferences(ACreature_Base* aCreature)
//{
//  //  CommandboardCreature = aCreature;
//}

void AUiScreen_Commandboard::ActivateCurrentObjectCursorIsOn()
{
 // if(m_CursorXCurrent == Attack)
 // {
 //     //Default attack into select menu-
 //     
 // }

    if(m_CursorXCurrent == Skills)
    {
        //Push Skill menu
        
    }

    if(m_CursorXCurrent == Overclock)
    {
        //Push Overclock menu
        
    }
}

void AUiScreen_Commandboard::OnPush()
{
    Super::OnPush();
    
    SetMenuConstraints();
}
