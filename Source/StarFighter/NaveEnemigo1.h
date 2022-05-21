// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nave.h"
#include "NaveEnemigo1.generated.h"

UCLASS()
class STARFIGHTER_API ANaveEnemigo1 : public ANave
{
	GENERATED_BODY()

public:
	ANaveEnemigo1();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	void DisparoNave();

protected:
	// Llamado cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;

	// Ayuda en el disparo
	int a;
};
