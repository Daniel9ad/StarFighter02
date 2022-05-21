// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Nave.generated.h"

UCLASS()
class STARFIGHTER_API ANave : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ANave();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Retorna malla
	FORCEINLINE class UStaticMeshComponent* GetMeshComponent() const { return NaveMeshComponent; }

private:
	// Declaro la malla
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* NaveMeshComponent;

protected:
	//Velocidad
	UPROPERTY()
		float Velocidad;
	// Energia de la nave
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		float Energia;
	// Numero de vidas
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		int NumVidas;
	// Resistencia de la estructura de la nave
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		float ResEstructura;
	// Determina si la nave dispara
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		bool Disparo;

	// Desplazamiento desde la ubicación de los naves para generar proyectiles
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		FVector GunOffset;

	// Qué tan rápido disparará el arma
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		float FireRate;

	// Mango para una gestión eficiente del temporizador ShotTimerExpired
	FTimerHandle TimerHandle_ShotTimerExpired;

	// Valores para la direccion del disparo
	float x;
	float y;

	// Informacion sobre el numero de proyectiles lanzados
	int NumProyectiles;
	void ProyectilesEn1();
};
