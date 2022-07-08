// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoBombardero.h"
#include "NaveEnemiga.h"
#include "Bomba.h"
#include <cmath>

using namespace std;

// Sets default values
ANaveEnemigoBombardero::ANaveEnemigoBombardero()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	auto mesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Mesh/TwinStick.TwinStickUFO'"));
	auto material = ConstructorHelpers::FObjectFinder<UMaterialInterface>(TEXT("MaterialInstanceConstant'/Game/Materials/M_BrickBlue.M_BrickBlue'"));

	MeshAsset = mesh.Object;
	MaterialAsset = material.Object;

	t = 0.f;
	x1 = cos(t);
	y1 = sin(t);
}

// Called when the game starts or when spawned
void ANaveEnemigoBombardero::BeginPlay()
{
	Super::BeginPlay();
	a = 30;
}

// Called every frame
void ANaveEnemigoBombardero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (nave->getDisparo())
	{
		if (a % 30 == 0)
		{
			// Create fire direction vector
			const FVector FireDirection = FVector(1.f, 0.f, 0.f).GetClampedToMaxSize(1.0f);
			const FRotator FireRotation = FireDirection.Rotation();
			GetWorld()->SpawnActor<ABomba>(nave->GetActorLocation() + FireRotation.RotateVector(FVector(90.f, 0.f, 0.f)), FRotator(0.f, 0.f, 0.f));
		}
		a++;
	}

	if (nave->getMovimiento())
	{
		// Creo la direccion y el vector movimiento
		const FVector MoveDirection = FVector(x1, y1, 0.f).GetClampedToMaxSize(1.0f);
		const FVector Movement = MoveDirection * nave->getVelocidad() * DeltaTime;
		const FRotator Rotation = Movement.Rotation();
		FHitResult Hit(1.f);
		// Mueve la malla
		nave->GetMeshComponent()->MoveComponent(Movement, Rotation, true, &Hit);
		t += 0.1f;
		x1 = cos(t);
		y1 = sin(t);
	}
}

void ANaveEnemigoBombardero::buildNave(float x, float y)
{
	nave = GetWorld()->SpawnActor<ANaveEnemiga>(FVector(x, y, 100.0f), FRotator::ZeroRotator);

	nave->GetMeshComponent()->SetStaticMesh(MeshAsset);
	nave->GetMeshComponent()->SetMaterial(0, MaterialAsset);
	nave->GetMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	nave->GetMeshComponent()->SetMobility(EComponentMobility::Movable);
	nave->SetActorEnableCollision(true);

	nave->setVelocidad(500.0f);
	nave->setDisparo(false);
	nave->setMovimiento(false);
	nave->setPropiedades(100.f, 100.f, 1);
}

ANaveEnemiga* ANaveEnemigoBombardero::getNaveG()
{
	return nave;
}

