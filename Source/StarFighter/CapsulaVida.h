// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "CapsulaVida.generated.h"


UCLASS()
class STARFIGHTER_API ACapsulaVida : public ACapsula
{
	GENERATED_BODY()

public:
	ACapsulaVida();

protected:
	// Llamado cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;
};
