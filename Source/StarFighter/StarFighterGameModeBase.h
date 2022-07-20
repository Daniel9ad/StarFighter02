// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "StarFighterGameModeBase.generated.h"

UCLASS()
class STARFIGHTER_API AStarFighterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AStarFighterGameModeBase();

	// Llamado a cada cuadro
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

private:

	class AConstructorNaves* cnaves;

	//class ANaveEnemiga* naveCaza1;
	class ANaveEnemiga* naveBombardero1;
	class ANaveEnemiga* naveAmigo;

	class AComandoAlertaEnemigo* ComandoAlerta1;
};
