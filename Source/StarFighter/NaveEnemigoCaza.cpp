

#include "NaveEnemigoCaza.h"
#include "NaveEnemiga.h"

// Sets default values
ANaveEnemigoCaza::ANaveEnemigoCaza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	auto mesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Mesh/TwinStick.TwinStickUFO'"));
	auto material = ConstructorHelpers::FObjectFinder<UMaterialInterface>(TEXT("MaterialInstanceConstant'/Game/Materials/M_BrickRed.M_BrickRed'"));

	MeshAsset = mesh.Object;
	MaterialAsset = material.Object;
}

// Called when the game starts or when spawned
void ANaveEnemigoCaza::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ANaveEnemigoCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANaveEnemigoCaza::buildNave(float x, float y)
{
	nave = GetWorld()->SpawnActor<ANaveEnemiga>(FVector(x, y, 100.0f), FRotator::ZeroRotator);

	nave->GetMeshComponent()->SetStaticMesh(MeshAsset);
	nave->GetMeshComponent()->SetMaterial(0, MaterialAsset);
	nave->GetMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	nave->GetMeshComponent()->SetMobility(EComponentMobility::Movable);
	nave->SetActorEnableCollision(true);
	
	nave->setVelocidad(500.0f);
	nave->setDisparo(true);

	nave->setMovimiento(0.f, 0.f, 0);

	nave->setPropiedades(100.f, 100.f, 1, 1);
	
}
/*
ANaveEnemiga* ANaveEnemigoCaza::getNaveG()
{
	return nave;
}
*/
