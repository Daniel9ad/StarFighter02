// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodriza.h"
#include "Kismet/GameplayStatics.h"
#include "Misil.h"
#include "Bomba.h"
#include "Bala.h"

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 6.f, FColor::Green, text)

ANaveEnemigaNodriza::ANaveEnemigaNodriza()
{
	// Referencias a malla y material
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Mesh/TwinStick.TwinStickUFO'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("Material'/Game/Materials/M_Ball.M_Ball'"));
	
	GetMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	GetMeshComponent()->SetStaticMesh(MeshAsset.Object);
	GetMeshComponent()->SetMaterial(0, MaterialAsset.Object);
	GetMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetMeshComponent()->SetRelativeScale3D_Direct(FVector(3.f, 3.f, 3.f));
	SetActorEnableCollision(true);

	// Propiedades Nave
	Velocidad = 500.0f;
	Energia = 100.0f;
	NumVidas = 1;
	ResEstructura = 100.0f;
	Disparo = true;

	// Armamento
	GunOffset = FVector(90.f, 0.f, 0.f);
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
		const FVector FireDirection = FVector(0.f, 0.f, 0.f).GetClampedToMaxSize(1.0f);
		const FRotator FireRotation = FireDirection.Rotation();

		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			World->SpawnActor<AMisil>(GetActorLocation() + FireRotation.RotateVector(FVector(220.f, 0.f, 0.f)), FRotator(0.f, 0.f, 0.f));
			World->SpawnActor<AMisil>(GetActorLocation() + FireRotation.RotateVector(FVector(40.f, 220.f, 0.f)), FRotator(0.f, 45.f, 0.f));
			World->SpawnActor<AMisil>(GetActorLocation() + FireRotation.RotateVector(FVector(-40.f, 220.f, 0.f)), FRotator(0.f, 135.f, 0.f));
			World->SpawnActor<AMisil>(GetActorLocation() + FireRotation.RotateVector(FVector(-220.f, 0.f, 0.f)), FRotator(0.f, 180.f, 0.f));
			World->SpawnActor<AMisil>(GetActorLocation() + FireRotation.RotateVector(FVector(-40.f, -220.f, 0.f)), FRotator(0.f, 225.f, 0.f));
			World->SpawnActor<AMisil>(GetActorLocation() + FireRotation.RotateVector(FVector(40.f, -220.f, 0.f)), FRotator(0.f, 315.f, 0.f));
		}
	}
}

