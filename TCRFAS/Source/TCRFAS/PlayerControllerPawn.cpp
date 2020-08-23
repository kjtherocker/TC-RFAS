// Fill out your copyright notice in the Description page of Project Settings.



#include "PlayerControllerPawn.h"

APlayerControllerPawn::APlayerControllerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlayerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EnemyStaticMesh"));
	
//RootComponent = CapsuleComponent;

}

// Called when the game starts or when spawned
void APlayerControllerPawn::BeginPlay()
{
//	Super::BeginPlay();
//	AutoPossessPlayer = EAutoReceiveInput::Player0;
//	
//	PlayerController = Cast<APlayerController>(GetController());
//
//	if (PlayerController)
//	{
//		PlayerController->bShowMouseCursor = false; 
//		PlayerController->bEnableClickEvents = false; 
//		PlayerController->bEnableMouseOverEvents = false;
//	}

	

}

// Called every frame
void APlayerControllerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APlayerControllerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//Super::SetupPlayerInputComponent(PlayerInputComponent);
//
	//InputComponent->BindAxis("Keyboard_Up",this , &APlayerControllerPawn::CalculateMoveInput);
	//InputComponent->BindAxis("Keyboard_Down",this , &APlayerControllerPawn::CalculateMoveInput);
}

void APlayerControllerPawn::CalculateMoveInput(float Value)
{
	//MoveDirection.X = Value * MoveSpeed * GetWorld()->DeltaTimeSeconds;
	//SetActorLocation( GetActorLocation() + MoveDirection);
//
	//if(Value >0.1f)
	//{
	//	GEngine->AddOnScreenDebugMessage(-1,5.f, FColor::Green,  FString::Printf(TEXT("the index is not valid %f"), GetActorLocation().X));
	//	float test = 12;
	//}
}



