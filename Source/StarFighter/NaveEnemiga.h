// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nave.h"
#include "Subscriber.h"
#include "Morph.h"
#include "ComandoAlertaEnemigo.h"
#include "NaveEnemiga.generated.h"


UCLASS()
class STARFIGHTER_API ANaveEnemiga : public ANave, public ISubscriber, public IMorph
{
	GENERATED_BODY()

public:
	ANaveEnemiga();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Destroyed() override;

public:

	FORCEINLINE void setVelocidad(float v) { Velocidad = v;  }
	FORCEINLINE void setDisparo(bool d) { Disparo = d; }
	FORCEINLINE void setMovimiento(bool d) { Movimiento = d; }
	FORCEINLINE void setPropiedades(float e, float r, int v) {
		Energia = e;
		ResEstructura = r;
		NumVidas = v;
	}

	FORCEINLINE float getVelocidad() { return Velocidad; }
	FORCEINLINE bool getDisparo() { return Disparo; }
	FORCEINLINE bool getMovimiento() { return Movimiento; }

protected:
	// Llamado cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;

private:
	class AComandoAlertaEnemigo* comandoAlerta;

public:
	virtual void Update(APublisher* publisher) override;
	virtual void Morph();
	void SetComandoAlerta(AComandoAlertaEnemigo* comando);
};
