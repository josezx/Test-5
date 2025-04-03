// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueHielo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloqueHielo : public ABloque
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;

public:
	ABloqueHielo(); // <<<<<< AÑADIDO AQUÍ
	virtual void Tick(float DeltaTime) override;


private:
	FVector PosicionInicial;
	float AmplitudOscilacion;
	float FrecuenciaOscilacion;
	float TiempoAcumulado;
};
