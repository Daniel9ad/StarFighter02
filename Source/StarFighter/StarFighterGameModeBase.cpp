// Copyright Epic Games, Inc. All Rights Reserved.


#include "StarFighterGameModeBase.h"
#include "NaveEnemigaNodriza.h"
#include "GeneradorCapsulas.h"
#include "GeneradorCapsulasArma.h"
#include "GeneradorCapsulasVida.h"
#include "GeneradorCapsulasVelocidad.h"
#include "SLMB.h"
#include "SLMBAdapter.h"

AStarFighterGameModeBase::AStarFighterGameModeBase()
{
	//DefaultPawnClass = ANave::StaticClass();
	PrimaryActorTick.bCanEverTick = true;
}

void AStarFighterGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float a = FMath::RandRange(0, 1000);
	float x = FMath::RandRange(-1000, 1000);
	float y = FMath::RandRange(-1000, 1000);
	
	if (a > 90 && a < 100)
	{
		AGeneradorCapsulas* generadorArma = GetWorld()->SpawnActor<AGeneradorCapsulasArma>(AGeneradorCapsulasArma::StaticClass());

		if (a > 95)
			generadorArma->GetCapsula("Arma1", FVector(x, y, 100));
		else
			generadorArma->GetCapsula("Arma2", FVector(x, y, 100));
	}
	else if (a>80 && a<90)
	{
		AGeneradorCapsulas* generadorVida = GetWorld()->SpawnActor<AGeneradorCapsulasVida>(AGeneradorCapsulasVida::StaticClass());

		if (a > 85)
			generadorVida->GetCapsula("Vida1", FVector(x, y, 100));
		else
			generadorVida->GetCapsula("Vida2", FVector(x, y, 100));
	}
	else if (a > 70 && a < 80)
	{
		AGeneradorCapsulas* generadorVelocidad = GetWorld()->SpawnActor<AGeneradorCapsulasVelocidad>(AGeneradorCapsulasVelocidad::StaticClass());

		if (a > 75)
			generadorVelocidad->GetCapsula("Velocidad1", FVector(x, y, 100));
		else
			generadorVelocidad->GetCapsula("Velocidad2", FVector(x, y, 100));
	}
}

void AStarFighterGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	// Crea una nave nodriza
	//GetWorld()->SpawnActor<ANaveEnemigaNodriza>(FVector(500.0f, 0.0f, 200.0f), FRotator(0.f,0.f,0.f));
	
	ASLMB* slmb = GetWorld()->SpawnActor<ASLMB>(ASLMB::StaticClass());
	ASLMBAdapter* slmbAdapter = GetWorld()->SpawnActor<ASLMBAdapter>(ASLMBAdapter::StaticClass());

	slmb->SetInterfaceSLMB(slmbAdapter);
	slmb->Disparo();
}
	