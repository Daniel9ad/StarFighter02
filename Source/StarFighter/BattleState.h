// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "State.h"
#include "BattleState.generated.h"

UCLASS()
class STARFIGHTER_API ABattleState : public AActor, public IState
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABattleState();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	class ANaveJugador* naveJugador;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void setNaveJugador(class ANaveJugador* nave) override;
	virtual void fireBala(int x, int y) override;
	virtual void fireBomba(int x, int y) override;
	virtual void fireMisil(int x, int y) override;
	virtual void activarCamuflaje() override;
};
