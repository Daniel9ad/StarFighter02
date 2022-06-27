// Fill out your copyright notice in the Description page of Project Settings.


#include "ComandoAlertaEnemigo.h"
#include "NaveJugador.h"
#include "Proyectil.h"
#include "Kismet/GameplayStatics.h"

AComandoAlertaEnemigo::AComandoAlertaEnemigo()
{
	PrimaryActorTick.bCanEverTick = true;
	Ataque = false;
	MovimientoN = false;
}

void AComandoAlertaEnemigo::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> Nave;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANaveJugador::StaticClass(), Nave);

	for (AActor* actor : Nave)
	{
		ANaveJugador* naveEnemiga = Cast<ANaveJugador>(actor);
		PosicionEnemigo = naveEnemiga->GetMeshComponent()->GetRelativeLocation();
	}
}

void AComandoAlertaEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AComandoAlertaEnemigo::UpdateEstadoNaveEnemigo()
{
	// Para determinar si la nave se esta moviendo
	TArray<AActor*> Nave;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANaveJugador::StaticClass(), Nave);
	FVector a;

	for (AActor* actor : Nave)
	{
		ANaveJugador* naveEnemiga = Cast<ANaveJugador>(actor);
		a = naveEnemiga->GetMeshComponent()->GetRelativeLocation();
	}

	if (PosicionEnemigo != a)
	{
		MovimientoN = true;
		PosicionEnemigo = a;
	}
	else
	{
		MovimientoN = false;
	}

	// Para determinar si la nave dispara
	TArray<AActor*> Proyectiles;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AProyectil::StaticClass(), Proyectiles);

	for (AActor* proyectil : Proyectiles)
	{
		Ataque = true;
	}

	NotifySubscribers();
}
