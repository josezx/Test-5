// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueLadrillo.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"


ABloqueLadrillo::ABloqueLadrillo()
{
	PrimaryActorTick.bCanEverTick = true;
	bDestruible = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMeshBloqueLadrillo(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMeshBloqueLadrillo.Succeeded())
	{
		MeshBloque->SetStaticMesh(ObjetoMeshBloqueLadrillo.Object);
		MeshBloque->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
	//para asignar textura al bloque
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoBloqueLadrilloMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_CobbleStone_Smooth.M_CobbleStone_Smooth'"));
	if (ObjetoBloqueLadrilloMaterial.Succeeded())
	{
		MeshBloque->SetMaterial(0, ObjetoBloqueLadrilloMaterial.Object);
	}

	// Inicializar variables
	velocidad = 1.0f; // Velocidad de movimiento
	amplitud = 500.0f;   // Distancia maxima de apertura


}

void ABloqueLadrillo::BeginPlay()
{
	Super::BeginPlay();
	// Guardar la posición inicial en el eje Z
	PosicionInicial = GetActorLocation().Z;


}

void ABloqueLadrillo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Calcular la nueva posición en el eje Z
	FVector NewLocation = GetActorLocation();
	float Tiempo = GetWorld()->GetTimeSeconds(); // Tiempo actual del juego

	// Movimiento oscilatorio en el eje Z (arriba y abajo, pero no baja de 5.0f)
	float Oscilacion = FMath::Sin(Tiempo * velocidad) * amplitud;

	// Movimiento oscilatorio en el eje Z (arriba y abajo)
	NewLocation.Z = FMath::Max(PosicionInicial + Oscilacion, 5.0f);

	// Actualizar la posición del actor
	SetActorLocation(NewLocation);



}
