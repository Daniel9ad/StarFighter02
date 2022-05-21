// Fill out your copyright notice in the Description page of Project Settings.

#include "Capsula.h"
#include "Components/TextRenderComponent.h"

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 6.f, FColor::Green, text)

ACapsula::ACapsula()
{	
	PrimaryActorTick.bCanEverTick = true;
	// Referencia a malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	
	GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
	GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetRelativeScale3D_Direct(FVector(0.5f,1.25f,0.5f));
	SetActorEnableCollision(true);

	x = 0.0f;
	vc = 200;
	noContenido = true;
}

void ACapsula::BeginPlay()
{
	Super::BeginPlay();
	
	// Despues de cierto tiempo llama a una funcion que destruye las capsulas si no estan contenidas
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ACapsula::DestruyeCapsula, 15);
}

void ACapsula::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Creo la direccion y el vector movimiento
	const FVector MoveDirection = FVector(-x, 0.f, 0.f).GetClampedToMaxSize(1.0f);
	const FVector Movement = MoveDirection * vc * DeltaTime;
	const FRotator Rotation = Movement.Rotation();
	FHitResult Hit(1.f);
	x += 0.01;
	// Mueve la malla
	RootComponent->MoveComponent(Movement, Rotation, true, &Hit);
}

// Recoge la capsula
void ACapsula::PickUp()
{
	SetActorTickEnabled(false);
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	noContenido = false;
}

// Retorna la capsula
void ACapsula::PutDown(FTransform TargetLocation)
{
	SetActorTickEnabled(true);
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorLocation(TargetLocation.GetLocation());
	vc = 0.f;
}

void ACapsula::DestruyeCapsula()
{
	// Si la capsula no esta contenidda sera destruida despues de cierto tiempo
	if (noContenido) {
		Destroy();
	}
}