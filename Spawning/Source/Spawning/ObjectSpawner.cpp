// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectSpawner.h"

// Sets default values for this component's properties
UObjectSpawner::UObjectSpawner()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UObjectSpawner::BeginPlay()
{
	Super::BeginPlay();
	this->actorCopy->SetActorHiddenInGame(true);

	// ...
	
}


// Called every frame
void UObjectSpawner::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	this->ticks += DeltaTime;
	this->destroyTicks += DeltaTime;

	if (this->ticks > this->INTERVAL)
	{
		this->ticks = 0.0f;

		if (this->actorCopy != NULL && this->spawnedObjects.Num() < this->spawnLimit) {
			FActorSpawnParameters spawnParams;
			spawnParams.Template = this->actorCopy;
			spawnParams.Owner = this->GetOwner();
			int xOffset = FMath::RandRange(0, 10);
			int yOffset = FMath::RandRange(0, 10);
			FVector spawnLocation = this->GetOwner()->GetActorLocation();
			//spawnLocation += FVector(xOffset, yOffset, 0);
			FRotator spawnRotation = this->GetOwner()->GetActorRotation();

			AActor* myActor = this->GetWorld()->SpawnActor<AActor>(this->actorCopy->GetClass(), spawnParams);
			myActor->AttachToActor(this->GetOwner(), FAttachmentTransformRules::KeepRelativeTransform);
			myActor->SetActorHiddenInGame(false);
			myActor->SetActorLocation(spawnLocation);
			myActor->SetActorRotation(spawnRotation);

			this->spawnedObjects.Add(myActor);
		}
	}

	//if (this->destroyTicks > this->DELETE_INTERVAL)
	//{
	//	this->destroyTicks = 0.0f;
	//	this->DeleteAll();
	//}

	// ...
}

void UObjectSpawner::DeleteAll()
{
	for (int i = 0; i < this->spawnedObjects.Num(); i++)
	{
		this->spawnedObjects[i]->Destroy();
	}

	this->spawnedObjects.Empty();
}

