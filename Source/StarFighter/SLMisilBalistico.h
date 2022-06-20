// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SLMisilBalistico.generated.h"

UCLASS()
class STARFIGHTER_API ASLMisilBalistico : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ASLMisilBalistico();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void DisparoMisilBalistico();

	void generarMisilBalistico();

private:
	// Declaro la malla
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* MeshSLMB;

	int a;
};
