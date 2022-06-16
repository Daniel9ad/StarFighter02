// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoBombardero.h"
#include "NaveEnemiga.h"

// Sets default values
ANaveEnemigoBombardero::ANaveEnemigoBombardero()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	auto mesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Mesh/TwinStick.TwinStickUFO'"));
	auto material = ConstructorHelpers::FObjectFinder<UMaterialInterface>(TEXT("MaterialInstanceConstant'/Game/Materials/M_BrickBlue.M_BrickBlue'"));

	MeshAsset = mesh.Object;
	MaterialAsset = material.Object;
}

// Called when the game starts or when spawned
void ANaveEnemigoBombardero::BeginPlay()
{
	Super::BeginPlay();

	//nave = GetWorld()->SpawnActor<ANaveEnemiga>(FVector(0.f, 100.f, 100.0f), FRotator::ZeroRotator);
}

// Called every frame
void ANaveEnemigoBombardero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANaveEnemigoBombardero::buildNave(float x, float y)
{
	nave = GetWorld()->SpawnActor<ANaveEnemiga>(FVector(x, y, 100.0f), FRotator::ZeroRotator);

	nave->GetMeshComponent()->SetStaticMesh(MeshAsset);
	nave->GetMeshComponent()->SetMaterial(0, MaterialAsset);
	nave->GetMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	nave->GetMeshComponent()->SetMobility(EComponentMobility::Movable);
	nave->SetActorEnableCollision(true);
	//nave->AutoPossessAI;

	nave->setVelocidad(500.0f);
	nave->setDisparo(true);

	nave->setMovimiento(0.f, 0.f, 0);

	nave->setPropiedades(100.f, 100.f, 1, 2);
	
}

