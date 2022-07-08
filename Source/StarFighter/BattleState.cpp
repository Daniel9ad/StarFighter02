// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleState.h"
#include "NaveJugador.h"
#include "Bala.h"
#include "Bomba.h"
#include "Misil.h"

// Sets default values
ABattleState::ABattleState()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABattleState::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABattleState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABattleState::setNaveJugador(ANaveJugador* nave)
{
	naveJugador = nave;
}

void ABattleState::fireBala(int x, int y)
{
	// Create fire direction vector
	const FVector FireDirection = FVector(x, y, 0.f).GetClampedToMaxSize(1.0f);
	const FRotator FireRotation = FireDirection.Rotation();
	const FVector SpawnLocation = naveJugador->GetActorLocation() + FireRotation.RotateVector(FVector(90.f, 0.f, 0.f));

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		World->SpawnActor<ABala>(SpawnLocation, FireRotation);
	}
}

void ABattleState::fireBomba(int x, int y)
{
	// Create fire direction vector
	const FVector FireDirection = FVector(x, y, 0.f).GetClampedToMaxSize(1.0f);
	const FRotator FireRotation = FireDirection.Rotation();
	const FVector SpawnLocation = naveJugador->GetActorLocation() + FireRotation.RotateVector(FVector(90.f, 0.f, 0.f));

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		World->SpawnActor<ABomba>(SpawnLocation, FireRotation);
	}
}

void ABattleState::fireMisil(int x, int y)
{
	// Create fire direction vector
	const FVector FireDirection = FVector(x, y, 0.f).GetClampedToMaxSize(1.0f);
	const FRotator FireRotation = FireDirection.Rotation();
	const FVector SpawnLocation = naveJugador->GetActorLocation() + FireRotation.RotateVector(FVector(90.f, 0.f, 0.f));

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		World->SpawnActor<AMisil>(SpawnLocation, FireRotation);
	}
}

void ABattleState::activarCamuflaje()
{
}

