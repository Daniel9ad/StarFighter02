// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Publisher.generated.h"

UCLASS()
class STARFIGHTER_API APublisher : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APublisher();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// Lista de todos los subcriptores
	TArray<AActor*> ListSubscribers = TArray<AActor*>();

public:
	// Operaciones para agregar, remover y notificar a los subcriptores
	virtual void Subscribe(AActor* subscriber);
	virtual void RemoveSubscribe(AActor* subscriber);
	virtual void NotifySubscribers();
};
