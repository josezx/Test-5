// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemigoCharacter.generated.h"

UCLASS()
class BOMBERMAN_012025_API AEnemigoCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemigoCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Movimiento
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
	float MoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
	FVector MoveDirection;

	// Cambia dirección aleatoriamente
	virtual void CambiarDireccionAleatoria();
protected:
	FTimerHandle TimerHandle_CambioDireccion;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
