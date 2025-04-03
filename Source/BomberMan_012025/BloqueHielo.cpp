// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueHielo.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Materials/MaterialInterface.h"

ABloqueHielo::ABloqueHielo()
{
	PrimaryActorTick.bCanEverTick = true;
	bDestruible = true;

	// Malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (MeshAsset.Succeeded())
	{
		MeshBloque->SetStaticMesh(MeshAsset.Object);
	}

	// Material hielo
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Game/StarterContent/Materials/M_Glass.M_Glass"));
	if (MaterialAsset.Succeeded())
	{
		MeshBloque->SetMaterial(0, MaterialAsset.Object);
	}

	// Partícula de niebla/vapor
	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/StarterContent/Particles/P_Steam_Lit.P_Steam_Lit"));
	if (ParticleAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleAsset.Object);
		ParticleSystem->SetWorldScale3D(FVector(1.0f));
	}

	// Movimiento
	AmplitudOscilacion = 10.f;
	FrecuenciaOscilacion = 2.f;
	TiempoAcumulado = 0.f;
}

void ABloqueHielo::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}

void ABloqueHielo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoAcumulado += DeltaTime;

	FVector NuevaPos = PosicionInicial;
	NuevaPos.Z += FMath::Sin(TiempoAcumulado * FrecuenciaOscilacion) * AmplitudOscilacion;
	SetActorLocation(NuevaPos);
}
