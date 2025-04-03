// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueExplosivo.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Materials/MaterialInterface.h"
#include "Kismet/GameplayStatics.h"

ABloqueExplosivo::ABloqueExplosivo()
{
	PrimaryActorTick.bCanEverTick = true;
	bDestruible = true;
	bHaExplotado = false;

	// Malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (MeshAsset.Succeeded())
	{
		MeshBloque->SetStaticMesh(MeshAsset.Object);
	}

	// Material rojo/oscuro
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Game/StarterContent/Materials/M_Rock_Basalt.M_Rock_Basalt"));
	if (MaterialAsset.Succeeded())
	{
		MeshBloque->SetMaterial(0, MaterialAsset.Object);
	}

	// Preview (humo leve antes de explotar)
	ExplosionPreview = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PreviewEffect"));
	ExplosionPreview->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> PreviewAsset(TEXT("/Game/StarterContent/Particles/P_Smoke.P_Smoke"));
	if (PreviewAsset.Succeeded())
	{
		ExplosionPreview->SetTemplate(PreviewAsset.Object);
		ExplosionPreview->SetWorldScale3D(FVector(0.6f));
	}

	// Carga la explosión final (solo se usa al detonar)
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ExplosionAsset(TEXT("/Game/StarterContent/Particles/P_Explosion.P_Explosion"));
	if (ExplosionAsset.Succeeded())
	{
		ExplosionFinal = ExplosionAsset.Object;
	}
}

void ABloqueExplosivo::BeginPlay()
{
	Super::BeginPlay();
}

void ABloqueExplosivo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// No tiene movimiento
}

void ABloqueExplosivo::Detonar()
{
	if (bHaExplotado) return;

	bHaExplotado = true;

	// Reproduce explosión
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionFinal, GetActorLocation());

	// Destruye el bloque
	Destroy();
}
