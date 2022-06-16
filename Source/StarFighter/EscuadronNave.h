// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemigoCaza.h"
#include "EscuadronNave.generated.h"

UCLASS()
class STARFIGHTER_API AEscuadronNave : public AActor
{
	GENERATED_BODY()
	
	//TArray<ANaveEnemigoCaza*> listNaves;
public:
	//class ANaveEnemiga* nave1;
	//class ANaveEnemiga* nave2;
	//class ANaveEnemigo* naveCaza3;
	//class ANaveEnemigo* naveCaza4;

public:	
	// Sets default values for this actor's properties
	AEscuadronNave();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
