// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Creature_Base.h"
#include "UObject/NoExportTypes.h"
#include "Skills_Base.generated.h"

/**
 * 
 */

enum SkillType
{
	Attack,
    Heal,
    Defence,
    Domain,

};

enum DamageType
{
	Strength,
    Magic
};


enum SkillRange
{
	Single,
    Multi,
};

enum ElementalTypes;
enum Ailment;


class ACreature_Base;

UCLASS()
class TCRFAS_API USkills_Base : public UObject
{
	GENERATED_BODY()


	public:

	ElementalTypes m_ElementalType;
    SkillType m_SkillType;
    SkillRange m_SkillFormation;
    DamageType m_Damagetype;
    Ailment m_SkillAilment;
	

    FString SkillName;
    FString SkillDescription;
	
    int m_CostToUse;
    int m_Damage;
    int m_SkillRange;


	virtual void UseSkillMulti(ACreature_Base* aAttacker, TArray<ACreature_Base*> aVictim);
	virtual void UseSkill(ACreature_Base* aAttacker, ACreature_Base* aVictim);
	
	virtual void Initialize();
	
};
