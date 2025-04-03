// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueFuego.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Materials/MaterialInterface.h"

ABloqueFuego::ABloqueFuego()
{
	PrimaryActorTick.bCanEverTick = true;
	bDestruible = true;

	// Asignar malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (MeshAsset.Succeeded())
	{
		MeshBloque->SetStaticMesh(MeshAsset.Object);
	}

	// Asignar material fuego
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/Fuego.Fuego'"));
	if (MaterialAsset.Succeeded())
	{
		MeshBloque->SetMaterial(0, MaterialAsset.Object);
	}

	// Partículas de fuego
	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/StarterContent/Particles/P_Fire.P_Fire"));
	if (ParticleAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleAsset.Object);
		ParticleSystem->SetWorldScale3D(FVector(8.0f));
	}

	// Movimiento aleatorio de rotación
	RotationSpeed = FMath::RandRange(30.f, 90.f);
	RotationAxis = FVector(FMath::FRand(), FMath::FRand(), FMath::FRand()).GetSafeNormal();
}

void ABloqueFuego::BeginPlay()
{
	Super::BeginPlay();
}

void ABloqueFuego::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator DeltaRotation = FRotator::ZeroRotator;
	DeltaRotation += FQuat(RotationAxis, FMath::DegreesToRadians(RotationSpeed * DeltaTime)).Rotator();
	AddActorLocalRotation(DeltaRotation);
}
