// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CompuertaTeletransportadora.h"// portal
#include "BomberMan_012025GameMode.generated.h"


UCLASS(minimalapi)
class ABomberMan_012025GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberMan_012025GameMode();
public:

	virtual void BeginPlay() override;
public:

	UPROPERTY()
	TArray<AActor*> BloquesA; // Guarda todos los bloques generados
	TArray<TArray<int32>> MapaLaberinto;
	//portal para abajo
	UPROPERTY()
	TMap<AActor*, float> ActoresTeletransportados;

	UPROPERTY()
	ACompuertaTeletransportadora* Compuerta1;

	UPROPERTY()
	ACompuertaTeletransportadora* Compuerta3;

	void GenerarLaberinto();
};



