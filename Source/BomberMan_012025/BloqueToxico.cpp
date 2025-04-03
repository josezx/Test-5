// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueToxico.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Materials/MaterialInterface.h"

ABloqueToxico::ABloqueToxico()
{
	PrimaryActorTick.bCanEverTick = true;
	bDestruible = true;

	// Malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (MeshAsset.Succeeded())
	{
		MeshBloque->SetStaticMesh(MeshAsset.Object);
	}

	// Material tóxico (puedes cambiarlo si tienes uno personalizado)
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Game/StarterContent/Materials/M_Toxic.M_Toxic"));
	if (MaterialAsset.Succeeded())
	{
		MeshBloque->SetMaterial(0, MaterialAsset.Object);
	}

	// Partícula de humo/nube tóxica
	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/StarterContent/Particles/P_Smoke.P_Smoke"));
	if (ParticleAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleAsset.Object);
		ParticleSystem->SetWorldScale3D(FVector(1.2f));
	}

	// Movimiento estilo temblor
	AmplitudTemblor = 5.f;
	FrecuenciaTemblor = 8.f;
	RotacionLenta = 10.f;
	TiempoAcumulado = 0.f;
}

void ABloqueToxico::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}

void ABloqueToxico::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoAcumulado += DeltaTime;

	// Movimiento en eje X tembloroso
	FVector NuevaPos = PosicionInicial;
	NuevaPos.X += FMath::Sin(TiempoAcumulado * FrecuenciaTemblor) * AmplitudTemblor;
	SetActorLocation(NuevaPos);

	// Rotación lenta
	AddActorLocalRotation(FRotator(0.f, RotacionLenta * DeltaTime, 0.f));
}
