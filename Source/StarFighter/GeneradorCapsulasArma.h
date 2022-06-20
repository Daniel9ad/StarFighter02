// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "GeneradorCapsulas.h"
#include "GeneradorCapsulasArma.generated.h"

UCLASS()
class STARFIGHTER_API AGeneradorCapsulasArma : public AGeneradorCapsulas
{
	GENERATED_BODY()
public:
	virtual ACapsula* FabricarCapsula(FString TipoCapsula, FVector u) override;
};
