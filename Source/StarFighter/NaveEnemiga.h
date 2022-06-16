// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nave.h"
#include "NaveEnemiga.generated.h"


UCLASS()
class STARFIGHTER_API ANaveEnemiga : public ANave
{
	GENERATED_BODY()

public:
	ANaveEnemiga();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void DisparoNave();

	FORCEINLINE void setVelocidad(float v) { Velocidad = v;  }
	FORCEINLINE void setDisparo(bool d) { Disparo = d; }
	FORCEINLINE void setMovimiento(float mx, float my, float ma) { x = mx; y = my; a = ma; }
	FORCEINLINE void setPropiedades(float e, float r, int v, int t) {
		Energia = e;
		ResEstructura = r;
		NumVidas = v;
		TipoDisparo = t;
	}

protected:
	// Llamado cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;
	
	int TipoDisparo;
	int a;
};
