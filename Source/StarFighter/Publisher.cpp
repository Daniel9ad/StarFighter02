// Fill out your copyright notice in the Description page of Project Settings.


#include "Publisher.h"
#include "Subscriber.h"
#include "NaveEnemiga.h"

// Sets default values
APublisher::APublisher()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APublisher::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APublisher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APublisher::Subscribe(AActor* subscriber)
{
	ListSubscribers.Add(subscriber);
}

void APublisher::RemoveSubscribe(AActor* subscriber)
{
	ListSubscribers.Remove(subscriber);
}

void APublisher::NotifySubscribers()
{
	for (AActor* actor : ListSubscribers)
	{
		ISubscriber* sub = Cast<ISubscriber>(actor);
		sub->Update(this);
	}
}

