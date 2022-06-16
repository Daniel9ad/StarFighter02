// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderMain.generated.h"

UCLASS()
class STARFIGHTER_API ABuilderMain : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "Main")
	class AConstructorNaves* cnaves;

	class ANaveEnemigoCaza* naveCaza;
	class ANaveEnemigoBombardero* naveBombardero;
	//class AEscuadronNaveCaza* escuadronCaza;

public:	
	// Sets default values for this actor's properties
	ABuilderMain();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
