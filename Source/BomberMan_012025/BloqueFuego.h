// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueFuego.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloqueFuego : public ABloque
{
	GENERATED_BODY()
	public:
	ABloqueFuego();

protected:
	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;

public:
	virtual void Tick(float DeltaTime) override;

private:
	float RotationSpeed;
	FVector RotationAxis;
};
