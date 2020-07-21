// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Skills_Base.h"
#include "FireBall.generated.h"

/**
 * 
 */
UCLASS()
class TCRFAS_API UFireBall : public USkills_Base
{
	GENERATED_BODY()


	virtual void Initialize() override;
	virtual void UseSkillMulti(ACreature_Base* aAttacker, TArray<ACreature_Base*> aVictim) override;
};
