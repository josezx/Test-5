// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bomba.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABomba : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABomba();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, Category = "Bomba")
	float TiempoParaExplotar = 2.0f;

	FTimerHandle TimerExplosion;
	FTimerHandle TimerFuegoCentral;

	void Explotar();
	UPROPERTY(EditAnywhere, Category = "Explosi�n")
	int32 RangoExplosion = 3; // Cu�ntos bloques alcanza la explosi�n (en cada direcci�n)

	UPROPERTY(EditAnywhere, Category = "Explosi�n")
	float DistanciaEntreBloques = 300.f; // Distancia base entre bloques
};
