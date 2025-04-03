// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueTrampolin.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloqueTrampolin : public ABloque
{
	GENERATED_BODY()

public:
	ABloqueTrampolin();
protected:
	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;

public:
	virtual void Tick(float DeltaTime) override;

private:
	FVector PosicionInicial;
	float AmplitudSalto;
	float FrecuenciaSalto;
	float TiempoAcumulado;
};
