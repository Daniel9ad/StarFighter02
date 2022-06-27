// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructorNaves.generated.h"


UCLASS()
class STARFIGHTER_API AConstructorNaves : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AConstructorNaves();

	class IBuilder* builder;
	class IBuilderEscuadron* builderEscuadron;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ConstruirNave(float x, float y);
	void setBuilder(AActor* newbuilder);
	class ANaveEnemiga* getNave();
	void ConstruirEscuadron(float x, float y);
	void setBuilderEscuadron(AActor* newbuilder);
};
