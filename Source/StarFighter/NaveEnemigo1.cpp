// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigo1.h"
#include "Bala.h"

#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Components/InputComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"


ANaveEnemigo1::ANaveEnemigo1()
{
	// Referencias a malla y material
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Mesh/TwinStick.TwinStickUFO'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("Material'/Game/Materials/M_Backdrop.M_Backdrop'"));

	GetMeshComponent()->SetStaticMesh(MeshAsset.Object);
	GetMeshComponent()->SetMaterial(0, MaterialAsset.Object);
	GetMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	GetMeshComponent()->SetMobility(EComponentMobility::Movable);
	SetActorEnableCollision(true);

	// Propiedades Nave
	Velocidad = 500.0f;
	Energia = 100.0f;
	NumVidas = 1;
	ResEstructura = 100.0f;
	Disparo = true;

	// Armamento
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	x = 1.0f;
	y = 0.0f;

	a = 0;
}

void ANaveEnemigo1::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigo1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (a%30 == 0)
		DisparoNave();
	
	a++;
}

void ANaveEnemigo1::DisparoNave()
{
	if (Disparo) 
	{
		// Create fire direction vector
		const FVector FireDirection = FVector(x, y, 0.f).GetClampedToMaxSize(1.0f);
		const FRotator FireRotation = FireDirection.Rotation();
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			World->SpawnActor<ABala>(SpawnLocation, FireRotation);
			NumProyectiles++;
		}

		World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, FireRate, true);
	}
}
