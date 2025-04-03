// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
ABloque::ABloque()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Para la creacion de la malla 
	MeshBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshBloque"));
	MeshBloque->SetupAttachment(RootComponent);
	RootComponent = MeshBloque;
	// Establecer el tamaño inicial del bloque
	AjustarTamano(FVector(10.0f, 10.0f, 10.0f));
}

// Called when the game starts or when spawned
void ABloque::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ABloque::AjustarTamano(FVector NuevoTamano)
{
	MeshBloque->SetWorldScale3D(NuevoTamano);
}
