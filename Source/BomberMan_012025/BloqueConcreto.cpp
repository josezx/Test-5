// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueConcreto.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "Particles/ParticleSystemComponent.h"

ABloqueConcreto::ABloqueConcreto()
{
	PrimaryActorTick.bCanEverTick = true;
	bDestruible = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshBloqueConcretoAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (MeshBloqueConcretoAsset.Succeeded())
	{
		MeshBloque->SetStaticMesh(MeshBloqueConcretoAsset.Object);
	}

	static ConstructorHelpers::FObjectFinder<UMaterialInterface> BloqueConcretoMaterialAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'"));
	if (BloqueConcretoMaterialAsset.Succeeded())
	{
		MeshBloque->SetMaterial(0, BloqueConcretoMaterialAsset.Object);
	}

	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	// Encontrar una partícula que simule vapor o niebla
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSystemAsset(TEXT("/Game/StarterContent/Particles/P_Steam_Lit.P_Steam_Lit"));
	if (ParticleSystemAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleSystemAsset.Object);

		// Escalar el sistema de partículas para que sea más grande
		ParticleSystem->SetWorldScale3D(FVector(1.0f, 1.0f, 1.5f));
	}

	bPuedeGirar = true; // Se asignará desde el GameMode
	RotationSpeed = 50.0f; // Velocidad de rotación por defecto
}

void ABloqueConcreto::BeginPlay()
{
	Super::BeginPlay();

}

void ABloqueConcreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bPuedeGirar)
	{
		FRotator NewRotation = GetActorRotation();
		NewRotation.Yaw += RotationSpeed * DeltaTime;
		SetActorRotation(NewRotation);
	}

}