// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BattleNaveStrategy.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBattleNaveStrategy : public UInterface
{
	GENERATED_BODY()
};

class STARFIGHTER_API IBattleNaveStrategy
{
	GENERATED_BODY()

public:

	virtual void Maneuver(class ANaveEnemiga* nave) = 0;
};
