// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueElectricidad.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Materials/MaterialInterface.h"

ABloqueElectricidad::ABloqueElectricidad()
{
	PrimaryActorTick.bCanEverTick = true;
	bDestruible = true;

	// Malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAssetelectrico(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (MeshAssetelectrico.Succeeded())
	{
		MeshBloque->SetStaticMesh(MeshAssetelectrico.Object);
	}
	//para asignar textura
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoBloqueAceroMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"));
	if (ObjetoBloqueAceroMaterial.Succeeded())
	{
		MeshBloque->SetMaterial(0, ObjetoBloqueAceroMaterial.Object);

	}

	// Partículas de chispa
	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/StarterContent/Particles/P_Sparks.P_Sparks"));
	if (ParticleAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleAsset.Object);
		ParticleSystem->SetWorldScale3D(FVector(15.0f));
	}

	// Movimiento
	VibracionAmplitud = 5.0f;
	VibracionFrecuencia = FMath::RandRange(2.f, 6.f);
	TiempoAcumulado = 0.0f;
	RotacionVelocidad = FMath::RandRange(10.f, 30.f);
}

void ABloqueElectricidad::BeginPlay()
{
	Super::BeginPlay();
}

void ABloqueElectricidad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoAcumulado += DeltaTime;

	// Vibración tipo chispa
	FVector NuevaPosicion = GetActorLocation();
	NuevaPosicion.Y += FMath::Sin(TiempoAcumulado * VibracionFrecuencia) * VibracionAmplitud * DeltaTime;
	SetActorLocation(NuevaPosicion);

	// Rotación leve
	AddActorLocalRotation(FRotator(0.f, RotacionVelocidad * DeltaTime, 0.f));
}
