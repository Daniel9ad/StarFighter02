// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderEscuadron.h"
#include "EscuadronNaveCaza.generated.h"

UCLASS()
class STARFIGHTER_API AEscuadronNaveCaza : public AActor, public IBuilderEscuadron
{
	GENERATED_BODY()

	class AEscuadronNave* escuadron;
	class AConstructorNaves* cnaves;

public:	
	// Sets default values for this actor's properties
	AEscuadronNaveCaza();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void buildEscuadronNaves(float x, float y) override;
};
