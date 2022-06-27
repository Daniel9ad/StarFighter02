// Copyright Epic Games, Inc. All Rights Reserved.


#include "StarFighterGameModeBase.h"
#include "NaveEnemigaNodriza.h"
#include "GeneradorCapsulas.h"
#include "GeneradorCapsulasArma.h"
#include "GeneradorCapsulasVida.h"
#include "GeneradorCapsulasVelocidad.h"
#include "SLMB.h"
#include "SLMBAdapter.h"
#include "ConstructorNaves.h"
#include "NaveEnemiga.h"
#include "NaveEnemigoCaza.h"
#include "NaveEnemigoBombardero.h"
#include "ComandoAlertaEnemigo.h"

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

	ComandoAlerta1->UpdateEstadoNaveEnemigo();
}

void AStarFighterGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	// Crea una nave nodriza
	//GetWorld()->SpawnActor<ANaveEnemigaNodriza>(FVector(500.0f, 0.0f, 200.0f), FRotator(0.f,0.f,0.f));
	
	// Creacion de uns SLMB con adacter 
	//ASLMB* slmb = GetWorld()->SpawnActor<ASLMB>(ASLMB::StaticClass());
	//ASLMBAdapter* slmbAdapter = GetWorld()->SpawnActor<ASLMBAdapter>(ASLMBAdapter::StaticClass());

	//slmb->SetInterfaceSLMB(slmbAdapter);
	//slmb->Disparo();

	// Creacion de naves enemigas con builder
	cnaves = GetWorld()->SpawnActor<AConstructorNaves>(AConstructorNaves::StaticClass());
	ANaveEnemigoCaza* navecaza = GetWorld()->SpawnActor<ANaveEnemigoCaza>(ANaveEnemigoCaza::StaticClass());
	ANaveEnemigoBombardero* navebombardero = GetWorld()->SpawnActor<ANaveEnemigoBombardero>(ANaveEnemigoBombardero::StaticClass());

	cnaves->setBuilder(navecaza);
	cnaves->ConstruirNave(200.f, 400.f);
	naveCaza1 = Cast<ANaveEnemiga>(cnaves->getNave());

	cnaves->setBuilder(navebombardero);
	cnaves->ConstruirNave(200.f, 600.f);
	naveBombardero1 = Cast<ANaveEnemiga>(cnaves->getNave());

	// Obserber
	ComandoAlerta1 = GetWorld()->SpawnActor<AComandoAlertaEnemigo>(AComandoAlertaEnemigo::StaticClass());

	naveCaza1->SetComandoAlerta(ComandoAlerta1);
	naveBombardero1->SetComandoAlerta(ComandoAlerta1);

}
	