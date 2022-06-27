// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Builder.h"
#include "NaveEnemigoCaza.generated.h"

UCLASS()
class STARFIGHTER_API ANaveEnemigoCaza : public AActor, public IBuilder
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "Nave")
		class ANaveEnemiga* nave;

public:
	// Sets default values for this actor's properties
	ANaveEnemigoCaza();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// Sobrescritura de metedos
	virtual void buildNave(float x,float y) override;
	virtual class ANaveEnemiga* getNaveG() override;
	
	UStaticMesh* MeshAsset;
	UMaterialInterface* MaterialAsset;

private:
	int a;

};
