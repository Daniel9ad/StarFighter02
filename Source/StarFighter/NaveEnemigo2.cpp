// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigo2.h"
#include "Misil.h"

ANaveEnemigo2::ANaveEnemigo2()
{
	// Referencias a malla y material
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Mesh/TwinStick.TwinStickUFO'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("MaterialInstanceConstant'/Game/Materials/M_Powerup.M_Powerup'"));

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
	NumProyectiles = 0;
}


void ANaveEnemigo2::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigo2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (a % 20 == 0)
		DisparoNave();

	a++;
}

void ANaveEnemigo2::DisparoNave()
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
			World->SpawnActor<AMisil>(SpawnLocation, FireRotation);
			NumProyectiles++;
		}

		World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, FireRate, true);
	}
}

