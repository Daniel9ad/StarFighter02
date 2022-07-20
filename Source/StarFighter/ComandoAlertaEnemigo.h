// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Publisher.h"
#include "ComandoAlertaEnemigo.generated.h"

UCLASS()
class STARFIGHTER_API AComandoAlertaEnemigo : public APublisher
{
	GENERATED_BODY()
public:
	AComandoAlertaEnemigo();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void UpdateEstadoNaveEnemigo();

public:
	bool Ataque;
	bool MovimientoN;
	bool Amigo;
	FVector PosicionEnemigo;
};
