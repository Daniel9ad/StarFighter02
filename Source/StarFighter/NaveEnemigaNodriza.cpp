// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodriza.h"
#include "Kismet/GameplayStatics.h"
#include "Misil.h"


ANaveEnemigaNodriza::ANaveEnemigaNodriza()
{
	// Referencias a malla y material
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Mesh/TwinStick.TwinStickUFO'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("Material'/Game/Materials/M_Ball.M_Ball'"));
	
	GetMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	GetMeshComponent()->SetStaticMesh(MeshAsset.Object);
	GetMeshComponent()->SetMaterial(0, MaterialAsset.Object);
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

	// Tiempo de vida
	InitialLifeSpan = 10.0f;

	// Crea un array para alamacenar todos los elementos creados por esta clase
	TArray<AActor*> Instances;
	// Guarda todos los elementos en un array
	UGameplayStatics::GetAllActorsOfClass(GetWorld(),ANaveEnemigaNodriza::StaticClass(), Instances);

	// Si existen mas de un elemento de esta clase son destruidos
	if (Instances.Num() > 1)
	{
		NaveP = Cast<ANaveEnemigaNodriza>(Instances[0]);
		Destroy();
	}	
}

void ANaveEnemigaNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (a % 30 == 0)
		DisparoNave();

	a++;
}

void ANaveEnemigaNodriza::DisparoNave()
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

