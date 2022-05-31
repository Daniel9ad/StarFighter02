// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nave.h"
#include "NaveEnemigaNodriza.generated.h"

UCLASS()
class STARFIGHTER_API ANaveEnemigaNodriza : public ANave
{
	GENERATED_BODY()
		
private:
	ANaveEnemigaNodriza();

	ANaveEnemigaNodriza* NaveP;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Realiza el disparo de la nave
	void DisparoNave();

	// Ayuda en el disparo
	int a;
};
