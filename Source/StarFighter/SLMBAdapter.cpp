// Fill out your copyright notice in the Description page of Project Settings.


#include "SLMBAdapter.h"
#include "SLMisilBalistico.h"

// Sets default values
ASLMBAdapter::ASLMBAdapter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASLMBAdapter::BeginPlay()
{
	Super::BeginPlay();
	slmb = GetWorld()->SpawnActor<ASLMisilBalistico>(FVector(1000.0f, 0.0f, 50.0f), FRotator(0.f, 0.f, 0.f));
}

// Called every frame
void ASLMBAdapter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASLMBAdapter::Disparo()
{
	slmb->DisparoMisilBalistico();
}

