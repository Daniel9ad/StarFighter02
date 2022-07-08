// Fill out your copyright notice in the Description page of Project Settings.


#include "AtaqueStrategy.h"
#include "NaveEnemiga.h"

// Sets default values
AAtaqueStrategy::AAtaqueStrategy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAtaqueStrategy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAtaqueStrategy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAtaqueStrategy::Maneuver(class ANaveEnemiga* nave)
{
	nave->setDisparo(true);
}

