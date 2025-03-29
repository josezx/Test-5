// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"
#include "EnemigoAIController.h"

// Sets default values
AEnemigoCharacter::AEnemigoCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MoveSpeed = 500.f;
	MoveDirection = FVector::ForwardVector;
	// Asignar AI Controller
	AIControllerClass = AEnemigoAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	// Movimiento
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->MaxWalkSpeed = MoveSpeed;
	// Asignar la malla (ruta depende de tu proyecto)
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshEnemy(TEXT("/Script/Engine.SkeletalMesh'/Game/Characters/Mannequins/Meshes/SKM_Manny_Simple.SKM_Manny_Simple'"));
	if (MeshEnemy.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MeshEnemy.Object);
		GetMesh()->SetRelativeLocation(FVector(0.f, 0.f, -90.f)); // Ajustar altura
		GetMesh()->SetRelativeRotation(FRotator(0.f, -90.f, 0.f)); // Orientar hacia adelante
	}
	static ConstructorHelpers::FObjectFinder<UAnimationAsset> WalkAnim(TEXT("/Script/Engine.AnimSequence'/Game/Characters/Mannequins/Animations/Quinn/MF_Run_Fwd.MF_Run_Fwd'"));
	if (WalkAnim.Succeeded())
	{
		GetMesh()->PlayAnimation(WalkAnim.Object, true); // true = loop
	}

}

// Called when the game starts or when spawned
void AEnemigoCharacter::BeginPlay()
{
	Super::BeginPlay();
	CambiarDireccionAleatoria();
	GetWorldTimerManager().SetTimer(TimerHandle_CambioDireccion, this, &AEnemigoCharacter::CambiarDireccionAleatoria, 2.0f, true);
}

// Called every frame
void AEnemigoCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddMovementInput(MoveDirection.GetSafeNormal(), 1.0f);

}

// Called to bind functionality to input
void AEnemigoCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
void AEnemigoCharacter::CambiarDireccionAleatoria()
{
	int Dir = FMath::RandRange(0, 3);

	switch (Dir)
	{
	case 0: MoveDirection = FVector::ForwardVector; break;    // +X
	case 1: MoveDirection = -FVector::ForwardVector; break;   // -X
	case 2: MoveDirection = FVector::RightVector; break;      // +Y
	case 3: MoveDirection = -FVector::RightVector; break;     // -Y
	default: MoveDirection = FVector::ForwardVector; break;
	}
}
