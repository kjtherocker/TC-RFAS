// Fill out your copyright notice in the Description page of Project Settings.


#include "FireBall.h"

void UFireBall::Initialize()
{
    m_ElementalType = Fire;
    m_SkillAilment = Poison;
    m_SkillType = Attack;
    m_SkillFormation = Multi;
    m_Damagetype = Magic;

    m_CostToUse = 40;
    m_Damage = 10;
    SkillName = "Fire Ball";
    SkillDescription = "FireBall that will hit the whole enemy team";
    
}

void UFireBall::UseSkillMulti(ACreature_Base* aAttacker, TArray<ACreature_Base*> aVictim)
{
    int Damage = aAttacker->GetAllMagic();


    for(int i = 0 ; i < aVictim.Num();i++)
    {
        aVictim[i]->DecrementHealth(Damage);
    }
    
}
