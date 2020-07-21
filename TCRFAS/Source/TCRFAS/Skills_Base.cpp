// Fill out your copyright notice in the Description page of Project Settings.


#include "Skills_Base.h"


void USkills_Base::Initialize()
{
    m_ElementalType = Fire;
    m_SkillAilment = Poison;
    m_SkillType = Attack;
    m_SkillFormation = Multi;
    m_Damagetype = Magic;

    m_CostToUse = 40;
    m_Damage = 10;
    SkillName = "SKILL BASE";
    SkillDescription = "Something wrong happend to have this appear";

    
}



void USkills_Base::UseSkillMulti(ACreature_Base* aAttacker, TArray<ACreature_Base*> aVictim)
{
}

void USkills_Base::UseSkill(ACreature_Base* aAttacker, ACreature_Base* aVictim)
{
}

