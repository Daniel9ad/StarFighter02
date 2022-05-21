// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Capsula.h"

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STARFIGHTER_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY()
		TArray<ACapsula*> InventoryCapsulas;
	UFUNCTION()
		int32 AddToInventory(ACapsula* ActorToAdd);
	UFUNCTION()
		void RemoveFromInventory(ACapsula* ActorToRemove);
};
