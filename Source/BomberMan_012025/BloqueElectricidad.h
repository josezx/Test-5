// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueElectricidad.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloqueElectricidad : public ABloque
{
	GENERATED_BODY()
public:
	ABloqueElectricidad();

protected:
	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;

public:
	virtual void Tick(float DeltaTime) override;

private:
	float VibracionAmplitud;
	float VibracionFrecuencia;
	float TiempoAcumulado;
	float RotacionVelocidad;
};
