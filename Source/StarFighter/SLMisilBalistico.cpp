// Fill out your copyright notice in the Description page of Project Settings.


#include "SLMisilBalistico.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
#include "MisilBalistico.h"
#include "TimerManager.h"

// Sets default values
ASLMisilBalistico::ASLMisilBalistico()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("Material'/Game/Materials/M_Backdrop.M_Backdrop'"));
	
	MeshSLMB = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SLMB"));
	RootComponent = MeshSLMB;
	
	MeshSLMB->SetStaticMesh(MeshAsset.Object);
	MeshSLMB->SetRelativeScale3D_Direct(FVector(2.f, 2.f, 0.5f));
	MeshSLMB->SetMaterial(0, MaterialAsset.Object);
	MeshSLMB->SetMobility(EComponentMobility::Movable);
	SetActorEnableCollision(true);

	a = 20;
}

// Called when the game starts or when spawned
void ASLMisilBalistico::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASLMisilBalistico::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASLMisilBalistico::DisparoMisilBalistico()
{
	FTimerHandle InOutHandle;
	GetWorld()->GetTimerManager().SetTimer(InOutHandle, this, &ASLMisilBalistico::generarMisilBalistico, 5.f, true, 0);
}

void ASLMisilBalistico::generarMisilBalistico()
{
	const FVector FireDirection = FVector(0.f, 0.f, 0.f).GetClampedToMaxSize(1.0f);
	const FRotator FireRotation = FireDirection.Rotation();
	GEngine->AddOnScreenDebugMessage(-1, 6.f, FColor::Green, FString("Funciona"));
	GetWorld()->SpawnActor<AMisilBalistico>(GetActorLocation() + FireRotation.RotateVector(FVector(0.f, 0.f, 100.f)), FRotator(0.f, 0.f, 90.f));
}

