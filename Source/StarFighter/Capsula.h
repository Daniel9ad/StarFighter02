// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Capsula.generated.h"

UCLASS()
class STARFIGHTER_API ACapsula : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	ACapsula();

	// Llamado a cada cuadro
	virtual void Tick(float DeltaTime) override;

protected:
	// Llamado cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;

public:
	// Atributos
	float Velocidad;
	int Vidas;
	int Armamento;
	float x;
	float vc;
	bool noContenido;

	// Recoge las capsulas
	void PickUp();
	// Pone las capsulas
	void PutDown(FTransform TargetLocation);
	// Destruye las capsulas
	void DestruyeCapsula();
};
