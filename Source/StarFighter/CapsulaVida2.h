// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "CapsulaVida2.generated.h"

UCLASS()
class STARFIGHTER_API ACapsulaVida2 : public ACapsula
{
	GENERATED_BODY()
public:
	ACapsulaVida2();

protected:
	// Llamado cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;
};
