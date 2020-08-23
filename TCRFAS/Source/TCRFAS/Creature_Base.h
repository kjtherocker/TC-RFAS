// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Creature_Base.generated.h"

UENUM()
enum ElementalTypes
{
    Null,
    Fire,
    Water,
    Wind,
    Lighting,
    Shadow,
    Light
};

UENUM()
enum Ailment
{
	None,
    Poison,
    Daze,
    Sleep,
    Rage,
};

UENUM()
enum DomainStages
{
	NotActivated,
    Encroaching,
    Finished,
    End
};

UENUM()
enum Charactertype
{
	Undefined,
    Ally,
    Enemy
};

class USkills_Base;


UCLASS()
class TCRFAS_API ACreature_Base : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACreature_Base();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void SetCreature();

	virtual int GetAllStrength();
	virtual int GetAllMagic();

	virtual void DecrementHealth(int Decremenby);

	virtual void IncrementHealth(int Increment);

	virtual void InitializeAllSkills();
	
	virtual void Death();


	UPROPERTY(EditAnywhere)
	 TArray<USkills_Base*> Skills;
	
	UPROPERTY(EditAnywhere)
     USkeletalMesh* BaseMesh;
	
	ElementalTypes ElementalTypeStrength;
	ElementalTypes ElementalTypeWeakness;
	
	UPROPERTY()
	int CurrentHealth;
	int MaxHealth;

	UPROPERTY()
	int CurrentMana;
	int MaxMana;
	
	int Strength;
	int Magic;
	int Hit;
	int Evasion;
	int Defence;
	int Resistance;
	
	bool IsAlive;
	
	int m_CreatureMovement = 4;
	int AmountOfTurns;
	
	int BuffandDebuff;
	int BuffandDebuffDamageStrength;
	int BuffandDebuffDamageMagic;
	
	bool IsSelected;
	bool IsCurrentTurnHolder;

	UPROPERTY()
	FString Name = "No Name";
	
};
