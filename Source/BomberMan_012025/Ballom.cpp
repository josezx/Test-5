// Fill out your copyright notice in the Description page of Project Settings.


#include "Ballom.h"
#include "Components/SkeletalMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Animation/AnimInstance.h"
#include "PhysicsEngine/PhysicsAsset.h"

ABallom::ABallom()
{
	// Crear el componente visual
	MeshEsqueletico = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshEsqueletico"));
	RootComponent = MeshEsqueletico;

	// 1. Cargar Skeletal Mesh
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SkeletalMeshAsset(TEXT("SkeletalMesh'/Game/Modelos3d/Enemys/Enemigo1/Executioner.Executioner'"));

	// 2. Cargar Skeleton (no siempre necesario explícitamente si el SkeletalMesh ya lo tiene)
	static ConstructorHelpers::FObjectFinder<USkeleton> SkeletonAsset(TEXT("Skeleton'/Game/Modelos3d/Enemys/Enemigo1/Executioner_Skeleton.Executioner_Skeleton'"));

	// 3. Cargar Physics Asset
	static ConstructorHelpers::FObjectFinder<UPhysicsAsset> PhysicsAsset(TEXT("PhysicsAsset'/Game/Modelos3d/Enemys/Enemigo1/Executioner_PhysicsAsset.Executioner_PhysicsAsset'"));

	if (SkeletalMeshAsset.Succeeded())
	{
		MeshEsqueletico->SetSkeletalMesh(SkeletalMeshAsset.Object);

		// Asignar el PhysicsAsset si se cargó
		if (PhysicsAsset.Succeeded())
		{
			MeshEsqueletico->SetPhysicsAsset(PhysicsAsset.Object);
		}

		// Normalmente no es necesario SetSkeleton porque ya está embebido en el SkeletalMesh
	}

	// Configuración adicional opcional
	MeshEsqueletico->SetAnimationMode(EAnimationMode::AnimationBlueprint); // o AnimationSingleNode si usarás animación simple
	MoveSpeed = 150.f;
}