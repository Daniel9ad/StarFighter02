// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "State.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UState : public UInterface
{
	GENERATED_BODY()
};

class STARFIGHTER_API IState
{
	GENERATED_BODY()

public:
	
	virtual void setNaveJugador(class ANaveJugador* nave) = 0;
	virtual void fireBala(int x, int y) = 0;
	virtual void fireBomba(int x, int y) = 0;
	virtual void fireMisil(int x, int y) = 0;
	virtual void activarCamuflaje() = 0;
};
