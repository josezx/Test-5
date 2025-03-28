// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueMadera.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloqueMadera : public ABloque
{
	GENERATED_BODY()

public:

	ABloqueMadera();

protected:
	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;

public:
	virtual void Tick(float DeltaTime) override;

public:

	bool bAbriendo;
	float VelocidadMovimiento;
	float DistanciaApertura; // Distancia máxima al abrir
	FVector PosicionInicial; // Posición inicial
};
