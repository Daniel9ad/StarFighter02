// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BattleNaveStrategy.h"
#include "DesplazamientoStrategy.generated.h"

UCLASS()
class STARFIGHTER_API ADesplazamientoStrategy : public AActor, public IBattleNaveStrategy
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADesplazamientoStrategy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Maneuver(class ANaveEnemiga* nave) override;
};
