// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueToxico.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloqueToxico : public ABloque
{
	GENERATED_BODY()

public:
	ABloqueToxico();

protected:
	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;

public:
	virtual void Tick(float DeltaTime) override;

private:
	FVector PosicionInicial;
	float TiempoAcumulado;
	float AmplitudTemblor;
	float FrecuenciaTemblor;
	float RotacionLenta;
};
