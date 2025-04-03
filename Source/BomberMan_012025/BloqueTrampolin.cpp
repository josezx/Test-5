// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueTrampolin.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Materials/MaterialInterface.h"

ABloqueTrampolin::ABloqueTrampolin()
{
	PrimaryActorTick.bCanEverTick = true;
	bDestruible = true;

	// Malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (MeshAsset.Succeeded())
	{
		MeshBloque->SetStaticMesh(MeshAsset.Object);
	}

	// Material metálico como resorte
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel"));
	if (MaterialAsset.Succeeded())
	{
		MeshBloque->SetMaterial(0, MaterialAsset.Object);
	}

	// Efecto de rebote o explosión visual (puedes cambiarlo luego)
	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/StarterContent/Particles/P_Explosion.P_Explosion"));
	if (ParticleAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleAsset.Object);
		ParticleSystem->SetWorldScale3D(FVector(15.0f));
	}

	// Movimiento estilo rebote
	AmplitudSalto = 30.f;
	FrecuenciaSalto = 3.f; // ciclos por segundo
	TiempoAcumulado = 0.f;
}

void ABloqueTrampolin::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}

void ABloqueTrampolin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoAcumulado += DeltaTime;

	FVector NuevaPos = PosicionInicial;
	NuevaPos.Z += FMath::Abs(FMath::Sin(TiempoAcumulado * FrecuenciaSalto)) * AmplitudSalto;

	SetActorLocation(NuevaPos);
}
