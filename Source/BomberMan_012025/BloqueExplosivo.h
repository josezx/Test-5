// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueExplosivo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloqueExplosivo : public ABloque
{
	GENERATED_BODY()
public:
	ABloqueExplosivo();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// Función que puedes llamar desde otro actor para explotar
	UFUNCTION(BlueprintCallable)
	void Detonar();

private:
	UParticleSystemComponent* ExplosionPreview;
	UParticleSystem* ExplosionFinal;
	bool bHaExplotado;
};
