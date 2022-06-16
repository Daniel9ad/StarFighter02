// Copyright Epic Games, Inc. All Rights Reserved.


#include "StarFighterGameModeBase.h"
#include "Nave.h"
#include "Capsula.h"
#include "CapsulaVelocidad.h"
#include "CapsulaVida.h"
#include "CapsulaArma.h"
#include "NaveEnemigaNodriza.h"

AStarFighterGameModeBase::AStarFighterGameModeBase()
{
	//DefaultPawnClass = ANave::StaticClass();
}

void AStarFighterGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	//Retorna una capsula puesta en el mundo
	/*
	capsulaV1 = GetWorld()->SpawnActor<ACapsulaVelocidad>(FVector(1300.0f, -400.0f, 100.0f), FRotator::ZeroRotator);
	capsulaV1->Velocidad = 2.f;
	capsulaV1->Vidas = 0;
	capsulaV1->Armamento = 0;

	capsulaV2 = GetWorld()->SpawnActor<ACapsulaVelocidad>(FVector(1300.0f, -200.0f, 100.0f), FRotator::ZeroRotator);
	capsulaV2->Velocidad = 0.5f;
	capsulaV2->Vidas = 0;
	capsulaV2->Armamento = 0;

	capsulaV3 = GetWorld()->SpawnActor<ACapsulaVelocidad>(FVector(1400.0f, -300.0f, 100.0f), FRotator::ZeroRotator);
	capsulaV3->Velocidad = 3.f;
	capsulaV3->Vidas = 0;
	capsulaV3->Armamento = 0;

	capsulaVi1 = GetWorld()->SpawnActor<ACapsulaVida>(FVector(1300.0f, 0.0f, 100.0f), FRotator::ZeroRotator);
	capsulaVi1->Velocidad = 1.f;
	capsulaVi1->Vidas = 1;
	capsulaVi1->Armamento = 0;

	capsulaVi2 = GetWorld()->SpawnActor<ACapsulaVida>(FVector(1300.0f, 200.0f, 100.0f), FRotator::ZeroRotator);
	capsulaVi2->Velocidad = 1.f;
	capsulaVi2->Vidas = -1;
	capsulaVi2->Armamento = 0;

	capsulaVi3 = GetWorld()->SpawnActor<ACapsulaVida>(FVector(1400.0f, 100.0f, 100.0f), FRotator::ZeroRotator);
	capsulaVi3->Velocidad = 1.f;
	capsulaVi3->Vidas = 2;
	capsulaVi3->Armamento = 0;
	
	capsulaA1 = GetWorld()->SpawnActor<ACapsulaArma>(FVector(1300.0f, 400.0f, 100.0f), FRotator::ZeroRotator);
	capsulaA1->Velocidad = 1.0f;
	capsulaA1->Vidas = 0;
	capsulaA1->Armamento = 1;
	
	capsulaA2 = GetWorld()->SpawnActor<ACapsulaArma>(FVector(1300.0f, 600.0f, 100.0f), FRotator::ZeroRotator);
	capsulaA2->Velocidad = 1.f;
	capsulaA2->Vidas = 0;
	capsulaA2->Armamento = 2;

	capsulaA3 = GetWorld()->SpawnActor<ACapsulaArma>(FVector(1400.0f, 500.0f, 100.0f), FRotator::ZeroRotator);
	capsulaA3->Velocidad = 1.f;
	capsulaA3->Vidas = 0;
	capsulaA3->Armamento = 2;
	*/
	// Crea una nave nodriza
	GetWorld()->SpawnActor<ANaveEnemigaNodriza>(FVector(500.0f, 0.0f, 200.0f), FRotator(0.f,0.f,0.f));
}
	