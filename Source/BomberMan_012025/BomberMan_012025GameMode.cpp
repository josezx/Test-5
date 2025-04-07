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
    //temporizador para eliminar bloque administrador de tiempo (el tiempo de espera para que se eliminen lso bloques)
    GetWorld()->GetTimerManager().SetTimer(TimerEliminarBloque, this, &ABomberMan_012025GameMode::EliminarBloque, 5.0f, true);

    //portal
    FTransform Transform1, Transform3;
    // Posiciones
    Transform1.SetLocation(FVector(310.f, 8070.f, 0.f));
    Transform3.SetLocation(FVector(6220.f, 350.f, 0.f));

    // Rotaciones
    Transform1.SetRotation(FQuat(FRotator(0.f, 90.f, 0.f))); // ← Rota Compuerta 1 hacia otro lado
    Transform3.SetRotation(FQuat(FRotator(0.f, 270.f, 0.f)));  // ← Rota Compuerta 3

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
{4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
{4,0,0,0,0,4,0,1,1,0,0,4,0,1,0,4,0,0,0,1,0,0,1,0,4,4,0,0,0,0,4,0,1,1,0,0,4,0,1,0,4,0,0,0,1,0,0,1,0,4},
{4,0,4,4,4,4,0,2,4,4,0,4,0,0,0,4,2,4,0,1,0,0,2,0,4,4,0,4,4,4,4,0,2,4,4,0,4,0,0,0,4,2,4,0,1,0,0,2,0,4},
{4,0,4,0,0,0,0,4,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,4,4,0,4,0,0,0,0,4,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,4},
{4,0,4,0,1,1,1,1,0,1,0,4,4,4,4,0,0,0,0,0,0,0,2,0,4,4,0,4,0,1,1,1,1,0,1,0,4,4,4,4,0,0,0,0,0,0,0,2,0,4},
{4,0,4,0,1,0,0,0,0,0,4,0,2,0,4,4,2,4,2,0,1,1,1,0,4,4,0,4,0,1,0,0,0,0,0,4,0,2,0,4,4,2,4,2,0,1,1,1,0,4},
{4,2,4,4,2,4,4,0,2,4,4,0,1,0,2,0,0,4,2,0,1,0,0,0,4,4,2,4,4,2,4,4,0,2,4,4,0,1,0,2,0,0,4,2,0,1,0,0,0,4},
{4,0,1,0,0,0,2,0,4,0,1,0,0,0,4,0,0,1,1,1,1,1,1,0,4,4,0,1,0,0,0,2,0,4,0,1,0,0,0,4,0,0,1,1,1,1,1,1,0,4},
{4,0,4,2,4,4,4,2,2,0,1,1,1,0,2,0,1,1,1,0,0,0,1,0,4,4,0,4,2,4,4,4,2,2,0,1,1,1,0,2,0,1,1,1,0,0,0,1,0,4},
{4,0,1,0,2,0,2,4,4,0,0,0,2,0,4,0,0,1,0,0,1,0,2,0,4,4,0,1,0,2,0,2,4,4,0,0,0,2,0,4,0,0,1,0,0,1,0,2,0,4},
{4,2,4,0,1,0,1,0,1,0,1,0,1,0,4,0,0,1,0,0,1,0,1,0,4,4,2,4,0,1,0,1,0,1,0,1,0,1,0,4,0,0,1,0,0,1,0,1,0,4},
{4,0,4,0,0,0,2,0,0,0,1,0,0,0,4,4,4,4,2,0,1,1,1,0,4,4,0,4,0,0,0,2,0,0,0,1,0,0,0,4,4,4,4,2,0,1,1,1,0,4},
{4,0,4,0,1,1,0,1,1,1,1,0,0,0,0,0,1,0,0,4,0,0,0,0,4,4,0,4,0,1,1,0,1,1,1,1,0,0,0,0,0,1,0,0,4,0,0,0,0,4},
{4,0,0,0,2,0,4,0,4,0,0,0,0,3,4,4,4,0,1,1,1,1,1,0,4,4,0,0,0,2,0,4,0,4,0,0,0,0,3,4,4,4,0,1,1,1,1,1,0,4},
{4,2,0,0,1,0,4,0,4,0,1,0,0,0,0,4,0,0,0,2,4,0,1,0,4,4,2,0,0,1,0,4,0,4,0,1,0,0,0,0,4,0,0,0,2,4,0,1,0,4},
{4,0,4,0,1,0,4,0,0,0,1,0,4,4,0,1,0,1,0,0,0,0,1,0,4,4,0,4,0,1,0,4,0,0,0,1,0,4,4,0,1,0,1,0,0,0,0,1,0,4},
{4,0,1,1,1,0,1,1,1,0,1,1,1,0,0,1,0,2,2,2,2,0,4,4,4,4,0,1,1,1,0,1,1,1,0,1,1,1,0,0,1,0,2,2,2,2,0,4,4,4},
{4,0,1,0,2,0,0,0,1,0,0,0,2,0,0,4,4,4,0,4,4,4,4,0,4,4,0,1,0,2,0,0,0,1,0,0,0,2,0,0,4,4,4,0,4,4,4,4,0,4},
{4,0,1,0,1,0,1,0,1,0,1,0,1,0,0,4,0,0,0,2,4,2,4,0,4,4,0,1,0,1,0,1,0,1,0,1,0,1,0,0,4,0,0,0,2,4,2,4,0,4},
{4,0,1,0,4,0,2,0,1,1,1,0,0,0,0,4,0,1,1,0,0,0,4,0,4,4,0,1,0,4,0,2,0,1,1,1,0,0,0,0,4,0,1,1,0,0,0,4,0,4},
{4,0,1,0,4,0,1,0,0,0,1,1,1,0,0,0,0,1,0,0,2,0,4,0,4,4,0,1,0,4,0,1,0,0,0,1,1,1,0,0,0,0,1,0,0,2,0,4,0,4},
{4,0,4,4,4,0,3,4,4,0,4,4,2,4,2,4,4,2,0,1,1,0,2,4,4,4,0,4,4,4,0,3,4,4,0,4,4,2,4,2,4,4,2,0,1,1,0,2,4,4},
{4,2,4,0,2,0,1,0,1,0,4,4,1,0,0,1,0,1,1,0,0,0,0,0,4,4,2,4,0,2,0,1,0,1,0,4,4,1,0,0,1,0,1,1,0,0,0,0,0,4},
{4,0,1,0,1,0,2,0,1,0,4,0,0,0,4,0,0,1,0,0,0,0,1,0,4,4,0,1,0,1,0,2,0,1,0,4,0,0,0,4,0,0,1,0,0,0,0,1,0,4},
{4,0,2,0,4,0,4,0,4,4,4,0,2,0,4,2,4,1,0,2,2,4,4,0,4,4,0,2,0,4,0,4,0,4,4,4,0,2,0,4,2,4,1,0,2,2,4,4,0,4},
{4,2,4,0,4,0,1,0,1,0,4,4,0,0,1,0,2,0,1,0,4,2,2,0,4,4,2,4,0,4,0,1,0,1,0,4,4,0,0,1,0,2,0,1,0,4,2,2,0,4},
{4,0,4,0,2,0,0,4,0,0,0,2,2,0,1,0,0,4,4,4,0,1,1,0,4,4,0,4,0,2,0,0,4,0,0,0,2,2,0,1,0,0,4,4,4,0,1,1,0,4},
{4,0,4,0,4,0,0,2,2,0,0,0,0,0,1,0,0,4,0,4,0,0,1,0,4,4,0,4,0,4,0,0,2,2,0,0,0,0,0,1,0,0,4,0,4,0,0,1,0,4},
{4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
{4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
{4,0,0,0,0,4,0,1,1,0,0,4,0,1,0,4,0,0,0,1,0,0,1,0,4,4,0,0,0,0,4,0,1,1,0,0,4,0,1,0,4,0,0,0,1,0,0,1,0,4},
{4,0,4,4,4,4,0,2,4,4,0,4,0,0,0,4,2,4,0,1,0,0,2,0,4,4,0,4,4,4,4,0,2,4,4,0,4,0,0,0,4,2,4,0,1,0,0,2,0,4},
{4,0,4,0,0,0,0,4,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,4,4,0,4,0,0,0,0,4,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,4},
{4,0,4,0,1,1,1,1,0,1,0,4,4,4,4,0,0,0,0,0,0,0,2,0,4,4,0,4,0,1,1,1,1,0,1,0,4,4,4,4,0,0,0,0,0,0,0,2,0,4},
{4,0,4,0,1,0,0,0,0,0,4,0,2,0,4,4,2,4,2,0,1,1,1,0,4,4,0,4,0,1,0,0,0,0,0,4,0,2,0,4,4,2,4,2,0,1,1,1,0,4},
{4,2,4,4,2,4,4,0,2,4,4,0,1,0,2,0,0,4,2,0,1,0,0,0,4,4,2,4,4,2,4,4,0,2,4,4,0,1,0,2,0,0,4,2,0,1,0,0,0,4},
{4,0,1,0,0,0,2,0,4,0,1,0,0,0,4,0,0,1,1,1,1,1,1,0,4,4,0,1,0,0,0,2,0,4,0,1,0,0,0,4,0,0,1,1,1,1,1,1,0,4},
{4,0,4,2,4,4,4,2,2,0,1,1,1,0,2,0,1,1,1,0,0,0,1,0,4,4,0,4,2,4,4,4,2,2,0,1,1,1,0,2,0,1,1,1,0,0,0,1,0,4},
{4,0,1,0,2,0,2,4,4,0,0,0,2,0,4,0,0,1,0,0,1,0,2,0,4,4,0,1,0,2,0,2,4,4,0,0,0,2,0,4,0,0,1,0,0,1,0,2,0,4},
{4,2,4,0,1,0,1,0,1,0,1,0,1,0,4,0,0,1,0,0,1,0,1,0,4,4,2,4,0,1,0,1,0,1,0,1,0,1,0,4,0,0,1,0,0,1,0,1,0,4},
{4,0,4,0,0,0,2,0,0,0,1,0,0,0,4,4,4,4,2,0,1,1,1,0,4,4,0,4,0,0,0,2,0,0,0,1,0,0,0,4,4,4,4,2,0,1,1,1,0,4},
{4,0,4,0,1,1,0,1,1,1,1,0,0,0,0,0,1,0,0,4,0,0,0,0,4,4,0,4,0,1,1,0,1,1,1,1,0,0,0,0,0,1,0,0,4,0,0,0,0,4},
{4,0,0,0,2,0,4,0,4,0,0,0,0,3,4,4,4,0,1,1,1,1,1,0,4,4,0,0,0,2,0,4,0,4,0,0,0,0,3,4,4,4,0,1,1,1,1,1,0,4},
{4,2,0,0,1,0,4,0,4,0,1,0,0,0,0,4,0,0,0,2,4,0,1,0,4,4,2,0,0,1,0,4,0,4,0,1,0,0,0,0,4,0,0,0,2,4,0,1,0,4},
{4,0,4,0,1,0,4,0,0,0,1,0,4,4,0,1,0,1,0,0,0,0,1,0,4,4,0,4,0,1,0,4,0,0,0,1,0,4,4,0,1,0,1,0,0,0,0,1,0,4},
{4,0,1,1,1,0,1,1,1,0,1,1,1,0,0,1,0,2,2,2,2,0,4,4,4,4,0,1,1,1,0,1,1,1,0,1,1,1,0,0,1,0,2,2,2,2,0,4,4,4},
{4,0,1,0,2,0,0,0,1,0,0,0,2,0,0,4,4,4,0,4,4,4,4,0,4,4,0,1,0,2,0,0,0,1,0,0,0,2,0,0,4,4,4,0,4,4,4,4,0,4},
{4,0,1,0,1,0,1,0,1,0,1,0,1,0,0,4,0,0,0,2,4,2,4,0,4,4,0,1,0,1,0,1,0,1,0,1,0,1,0,0,4,0,0,0,2,4,2,4,0,4},
{4,0,1,0,4,0,2,0,1,1,1,0,0,0,0,4,0,1,1,0,0,0,4,0,4,4,0,1,0,4,0,2,0,1,1,1,0,0,0,0,4,0,1,1,0,0,0,4,0,4},
{4,0,1,0,4,0,1,0,0,0,1,1,1,0,0,0,0,1,0,0,2,0,4,0,4,4,0,1,0,4,0,1,0,0,0,1,1,1,0,0,0,0,1,0,0,2,0,4,0,4}

    };

    GenerarLaberinto();
    // Spawnear un Ballom en una posición del laberinto
    FVector PosicionBallom(2470.f, 4500.0f, 0.f);
    FRotator RotacionBallom = FRotator::ZeroRotator;

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

    ABallom* EnemigoBallom = GetWorld()->SpawnActor<ABallom>(ABallom::StaticClass(), PosicionBallom, RotacionBallom, SpawnParams);

    if (EnemigoBallom)
    {
        UE_LOG(LogTemp, Warning, TEXT("¡Ballom ha sido invocado!"));
    }

}
void ABomberMan_012025GameMode::GenerarLaberinto()
{
    // Define el espacio entre bloques del laberinto
    float Espaciado = 1000.0f;

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
            case 4: ClaseBloque = ABloquexoxico::StaticClass(); break;
            case 5: ClaseBloque = ABloqueAcero::StaticClass(); break;
            case 6: ClaseBloque = ABloqueAcero::StaticClass(); break;
            case 7: ClaseBloque = ABloqueAcero::StaticClass(); break;
            case 8: ClaseBloque = ABloqueAcero::StaticClass(); break;
            case 9: ClaseBloque = ABloqueAcero::StaticClass(); break;
            case 10: ClaseBloque = ABloqueAcero::StaticClass(); break;

            default: break;
            }

            if (ClaseBloque)
            {
                ABloque* BloqueSpawned = GetWorld()->SpawnActor<ABloque>(ClaseBloque, Posicion, Rotacion);
                if (BloqueSpawned)
                {

                    BloquesA.Add(BloqueSpawned); // Guarda el bloque en un array para acceso futuro
                }
            }
        }
    }


}
void ABomberMan_012025GameMode::EliminarBloque()
{
    // Crear un array temporal con solo bloques que se pueden eliminar (NO de acero)
    TArray<ABloque*> BloquesEliminables;

    for (ABloque* Bloque : BloquesA)
    {
        if (!Bloque) continue;

        // Verificamos que no sea un bloque de acero
        //IsA se utiliza para verificar   que sea de la clase bloque
        if (!Bloque->IsA(ABloqueAcero::StaticClass()))
        {
            BloquesEliminables.Add(Bloque);
        }
    }

    // Si hay bloques eliminables disponibles
    if (BloquesEliminables.Num() > 0)
    {
        int32 IndexAleatorio = FMath::RandRange(0, BloquesEliminables.Num() - 1);
        BloqueActual = BloquesEliminables[IndexAleatorio];

        if (BloqueActual)
        {
            BloqueActual->Destroy();
            BloquesA.Remove(BloqueActual); // Opcional: para que no lo intentes eliminar otra vez
        }
    }
}