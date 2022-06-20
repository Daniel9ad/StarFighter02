// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "GeneradorCapsulas.h"
#include "GeneradorCapsulasVida.generated.h"


UCLASS()
class STARFIGHTER_API AGeneradorCapsulasVida : public AGeneradorCapsulas
{
	GENERATED_BODY()

public:
	virtual ACapsula* FabricarCapsula(FString tipoCapsula, FVector u) override;
};
