// Fill out your copyright notice in the Description page of Project Settings.


#include "Creature_Base.h"

// Sets default values
ACreature_Base::ACreature_Base()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BaseMesh = CreateDefaultSubobject<USkeletalMesh>(TEXT("EnemyStaticMesh"));
}

// Called when the game starts or when spawned
void ACreature_Base::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void ACreature_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACreature_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACreature_Base::SetCreature()
{
	IsAlive = true;
}

int ACreature_Base::GetAllStrength()
{
	int TemporaryStrength;

	TemporaryStrength = BuffandDebuffDamageStrength + Strength;

	return TemporaryStrength;
}

int ACreature_Base::GetAllMagic()
{
	int TemporaryMagic;

	TemporaryMagic = BuffandDebuffDamageMagic + Magic;

	return TemporaryMagic;
}

void ACreature_Base::DecrementHealth(int Decremenby)
{
	CurrentHealth -= Decremenby;
}

void ACreature_Base::IncrementHealth(int Increment)
{
	CurrentHealth += Increment;
}

void ACreature_Base::InitializeAllSkills()
{

	for(int i = 0; i < Skills.Num();i++)
	{
		Skills[i]->Initialize();
	}
}

void ACreature_Base::Death()
{
	CurrentHealth = 0;
	BuffandDebuff = 0;
	IsAlive = false;
	
}

