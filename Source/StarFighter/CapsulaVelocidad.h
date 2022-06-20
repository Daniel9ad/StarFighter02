// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "CapsulaVelocidad.generated.h"


UCLASS()
class STARFIGHTER_API ACapsulaVelocidad : public ACapsula
{
	GENERATED_BODY()
	
public:
	ACapsulaVelocidad();

protected:
	// Llamado cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;
};
