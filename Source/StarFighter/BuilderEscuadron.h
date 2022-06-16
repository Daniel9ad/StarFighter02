// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BuilderEscuadron.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBuilderEscuadron : public UInterface
{
	GENERATED_BODY()
};


class STARFIGHTER_API IBuilderEscuadron
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void buildEscuadronNaves(float x, float y) = 0;
};
