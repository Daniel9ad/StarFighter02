// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"
#include "Misil.h"
#include "Bomba.h"
#include "ComandoAlertaEnemigo.h"
#include "BattleNaveStrategy.h"
#include "AtaqueStrategy.h"
#include "DesplazamientoStrategy.h"

ANaveEnemiga::ANaveEnemiga()
{
}

void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
	Disparo = false;
	Movimiento = false;
}

void ANaveEnemiga::Update(APublisher* publisher)
{
	Morph();
}

void ANaveEnemiga::Morph()
{
	if (comandoAlerta->Ataque)
	{
		AAtaqueStrategy* at = GetWorld()->SpawnActor<AAtaqueStrategy>(AAtaqueStrategy::StaticClass());
		AlterMeneuvers(at);
	}
	if (comandoAlerta->MovimientoN)
	{
		ADesplazamientoStrategy* ad = GetWorld()->SpawnActor<ADesplazamientoStrategy>(ADesplazamientoStrategy::StaticClass());
		AlterMeneuvers(ad);
	}
	else
	{
		Movimiento = comandoAlerta->MovimientoN;
	}

	amigo = comandoAlerta->Amigo;
}

void ANaveEnemiga::SetComandoAlerta(AComandoAlertaEnemigo* comando)
{
	if (!comando) {
		GEngine->AddOnScreenDebugMessage(-1, 6.f, FColor::Green, FString("SetClockTower(): myClockTower is NULL, make sure it'sinitialized."));
		return;
	}
	comandoAlerta = comando;
	comandoAlerta->Subscribe(this);
}

void ANaveEnemiga::AlterMeneuvers(AActor* myBattleStrategy)
{
	strategyNave = Cast<IBattleNaveStrategy>(myBattleStrategy);
	strategyNave->Maneuver(this);
}

void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveEnemiga::Destroyed()
{
	Super::Destroyed();
	//Log Error if its Clock Tower is NULL
	if (!comandoAlerta) {
		UE_LOG(LogTemp, Error, TEXT("Destroyed(): ClockTower is NULL, make sure it's initialized."));
		return;
	}
	//Unsubscribe from the Clock Tower if it's destroyed
	comandoAlerta->RemoveSubscribe(this);
}
