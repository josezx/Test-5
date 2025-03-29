// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_012025GameMode.h"
#include "BomberMan_012025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/Character.h"
#include "Engine/Engine.h"
#include "Bloque.h"
#include "Muro.h"
#include "BloqueAcero.h"
#include "BloqueMadera.h"
#include "BloqueLadrillo.h"
#include "BloqueConcreto.h"
#include "Ballom.h"

ABomberMan_012025GameMode::ABomberMan_012025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
void ABomberMan_012025GameMode::BeginPlay()
{
    Super::BeginPlay();

    //portal
    FTransform Transform1, Transform3;
    Transform1.SetLocation(FVector(1000.f, 2000.f, 1500.f)); // ejemplo
    Transform3.SetLocation(FVector(900.f, 1500.f, 500.f));

    Compuerta1 = GetWorld()->SpawnActor<ACompuertaTeletransportadora>(ACompuertaTeletransportadora::StaticClass(), Transform1);
    Compuerta3 = GetWorld()->SpawnActor<ACompuertaTeletransportadora>(ACompuertaTeletransportadora::StaticClass(), Transform3);

    Compuerta1->CompuertaDestino = Compuerta3;
    Compuerta3->CompuertaDestino = Compuerta1;

    Compuerta1->SetGameMode(this);
    Compuerta3->SetGameMode(this);
    //--------------------- portal hasta aca el codigo-----

    // Mapa del laberinto:
   // 0 = vacío, 1 = madera, 2 = ladrillo, 3 = concreto, 4 = acero
    MapaLaberinto = {
{4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
{4,0,0,0,0,4,0,1,1,0,0,4,0,1,0,4,0,0,0,1,0,0,1,0,4},
{4,0,4,4,4,4,0,2,4,4,0,4,0,0,0,4,2,4,0,1,0,0,2,0,4},
{4,0,4,0,0,0,0,4,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,4},
{4,0,4,0,1,1,1,1,0,1,0,4,4,4,4,0,0,0,0,0,0,0,2,0,4},
{4,0,4,0,1,0,0,0,0,0,4,0,2,0,4,4,2,4,2,0,1,1,1,0,4},
{4,2,4,4,2,4,4,0,2,4,4,0,1,0,2,0,0,4,2,0,1,0,0,0,4},
{4,0,1,0,0,0,2,0,4,0,1,0,0,0,4,0,0,1,1,1,1,1,1,0,4},
{4,0,4,2,4,4,4,2,2,0,1,1,1,0,2,0,1,1,1,0,0,0,1,0,4},
{4,0,1,0,2,0,2,4,4,0,0,0,2,0,4,0,0,1,0,0,1,0,2,0,4},
{4,2,4,0,1,0,1,0,1,0,1,0,1,0,4,0,0,1,0,0,1,0,1,0,4},
{4,0,4,0,0,0,2,0,0,0,1,0,0,0,4,4,4,4,2,0,1,1,1,0,4},
{4,0,4,0,1,1,0,1,1,1,1,0,0,0,0,0,1,0,0,4,0,0,0,0,4},
{4,0,0,0,2,0,4,0,4,0,0,0,0,3,4,4,4,0,1,1,1,1,1,0,4},
{4,2,0,0,1,0,4,0,4,0,1,0,0,0,0,4,0,0,0,2,4,0,1,0,4},
{4,0,4,0,1,0,4,0,0,0,1,0,4,4,0,1,0,1,0,0,0,0,1,0,4},
{4,0,1,1,1,0,1,1,1,0,1,1,1,0,0,1,0,2,2,2,2,0,4,4,4},
{4,0,1,0,2,0,0,0,1,0,0,0,2,0,0,4,4,4,0,4,4,4,4,0,4},
{4,0,1,0,1,0,1,0,1,0,1,0,1,0,0,4,0,0,0,2,4,2,4,0,4},
{4,0,1,0,4,0,2,0,1,1,1,0,0,0,0,4,0,1,1,0,0,0,4,0,4},
{4,0,1,0,4,0,1,0,0,0,1,1,1,0,0,0,0,1,0,0,2,0,4,0,4},
{4,0,4,4,4,0,3,4,4,0,4,4,2,4,2,4,4,2,0,1,1,0,2,4,4},
{4,2,4,0,2,0,1,0,1,0,4,4,1,0,0,1,0,1,1,0,0,0,0,0,4},
{4,0,1,0,1,0,2,0,1,0,4,0,0,0,4,0,0,1,0,0,0,0,1,0,4},
{4,0,2,0,4,0,4,0,4,4,4,0,2,0,4,2,4,1,0,2,2,4,4,0,4},
{4,2,4,0,4,0,1,0,1,0,4,4,0,0,1,0,2,0,1,0,4,2,2,0,4},
{4,0,4,0,2,0,0,4,0,0,0,2,2,0,1,0,0,4,4,4,0,1,1,0,4},
{4,0,4,0,4,0,0,2,2,0,0,0,0,0,1,0,0,4,0,4,0,0,1,0,4},
{4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4}
    };

    GenerarLaberinto();
    // Spawnear un Ballom en una posición del laberinto
    FVector PosicionBallom(2470.f, 4500.0f, 50.f);
    FRotator RotacionBallom = FRotator::ZeroRotator;

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

    ABallom* EnemigoBallom = GetWorld()->SpawnActor<ABallom>(ABallom::StaticClass(), PosicionBallom, RotacionBallom, SpawnParams);

    if (EnemigoBallom)
    {
        UE_LOG(LogTemp, Warning, TEXT("¡Ballom ha sido invocado!"));
    }
    /*
    //PARA BLOQUE Y MURO INTERCALADOS
    GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("Generando bloques y muros intercalados"));

    const int totalBloques = 6; // Número total de bloques
    const int totalMuros = 6;   // Número total de muros
    const float espacio = 600.0f; // Espacio entre elementos

    TArray<ABloque*> BloquesArray;
    TArray<AMuro*> MurosArray;


    int bloqueCount = 0;
    int muroCount = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            FVector posicion(900.0f + j * espacio, 6000.0f - i * espacio, 5.0f);
            if ((i + j) % 2 == 0 && bloqueCount < totalBloques)
            {
                ABloque* Bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
                if (Bloque)
                {
                    BloquesArray.Add(Bloque);
                }
                bloqueCount++;

            }
            else if (muroCount < totalMuros)
            {
                AMuro* Muro = GetWorld()->SpawnActor<AMuro>(AMuro::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
                if (Muro)
                {
                    MurosArray.Add(Muro);
                }
                muroCount++;
            }
        }
    }
    */
    /*
    // Asignar dos bloques para moverse
    if (BloquesArray.Num() >= 2)
    {
        BloquesArray[0]->bPuedeMoverse = true;
        BloquesArray[1]->bPuedeMoverse = true;
        BloquesArray[2]->bPuedeMoverse = true;
    }
    */
    /*
    // Asignar dos muros para girar
    if (MurosArray.Num() >= 2)
    {
        MurosArray[0]->bPuedeGirar = true;
        MurosArray[1]->bPuedeGirar = true;
    }

    //CREAR BLOQUES

    GetWorld()->SpawnActor < ABloqueLadrillo >(ABloqueLadrillo::StaticClass(),FVector(1000.0f, 500.0f, 5.0f), FRotator(0.0f, 0.0f, 0.0f));
    GetWorld()->SpawnActor < ABloqueMadera >(ABloqueMadera::StaticClass(), FVector(1000.0f, 500.0f, 5.0f), FRotator(0.0f, 0.0f, 0.0f));
    GetWorld()->SpawnActor < ABloqueConcreto >(ABloqueConcreto::StaticClass(), FVector(1000.0f, 500.0f, 5.0f), FRotator(0.0f, 0.0f, 0.0f));
    GetWorld()->SpawnActor < ABloqueAcero >(ABloqueAcero::StaticClass(), FVector(1000.0f, 500.0f, 5.0f), FRotator(0.0f, 0.0f, 0.0f));
    */



}


void ABomberMan_012025GameMode::GenerarLaberinto()
{
    // Define el espacio entre bloques del laberinto
    float Espaciado = 300.0f;

    // Recorre cada fila del mapa del laberinto (eje Y)
    for (int32 Y = 0; Y < MapaLaberinto.Num(); ++Y)
    {
        // Recorre cada columna dentro de la fila actual (eje X)
        for (int32 X = 0; X < MapaLaberinto[Y].Num(); ++X)
        {
            // Obtiene el tipo de bloque que hay en la posición (Y, X)
            int32 Tipo = MapaLaberinto[Y][X];

            // Si el tipo es 0, se considera espacio vacío y no se genera nada
            if (Tipo == 0) continue;

            //creacion directamente desde que se genera x y y,
            FVector Posicion = FVector(X * Espaciado, Y * Espaciado, 0.0f);
            FRotator Rotacion = FRotator::ZeroRotator;
            TSubclassOf<AActor> ClaseBloque = nullptr;

            switch (Tipo)
            {
            case 1: ClaseBloque = ABloqueMadera::StaticClass(); break;
            case 2: ClaseBloque = ABloqueLadrillo::StaticClass(); break;
            case 3: ClaseBloque = ABloqueConcreto::StaticClass(); break;
            case 4: ClaseBloque = ABloqueAcero::StaticClass(); break;
            default: break;
            }

            if (ClaseBloque)
            {
                AActor* BloqueSpawned = GetWorld()->SpawnActor<AActor>(ClaseBloque, Posicion, Rotacion);
                if (BloqueSpawned)
                {

                    BloquesA.Add(BloqueSpawned); // Guarda el bloque en un array para acceso futuro
                }
            }
        }
    }


}