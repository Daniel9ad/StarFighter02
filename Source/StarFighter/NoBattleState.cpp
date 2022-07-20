// Fill out your copyright notice in the Description page of Project Settings.


#include "NoBattleState.h"
#include "NaveJugador.h"
#include "Bala.h"

// Sets default values
ANoBattleState::ANoBattleState()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANoBattleState::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANoBattleState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANoBattleState::setNaveJugador(ANaveJugador* nave)
{
	naveJugador = nave;
}

void ANoBattleState::fireBala(int x, int y)
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
	// Cambia el estado 
	naveJugador->setState(naveJugador->getBattleState());
}

void ANoBattleState::fireBomba(int x, int y)
{
}

void ANoBattleState::fireMisil(int x, int y)
{
}

void ANoBattleState::activarCamuflaje()
{
}

