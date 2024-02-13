// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectPooling.h"

// Sets default values for this component's properties
UObjectPooling::UObjectPooling()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UObjectPooling::Initialize() {

	if (this->actorCopy == NULL)
	{
		UE_LOG(LogTemp, Display, TEXT("Actor is null. Pool will not be initialized"));
		return;
	}

	FActorSpawnParameters spawnParams;
	spawnParams.Template = this->actorCopy;
	spawnParams.Owner = this->GetOwner();

	const FTransform transform = this->actorCopy->GetActorTransform();
	for (int i = 0; i < this->maxPoolSize - 1; i++)
	{
		AAPoolable* poolableObject = this->GetWorld()->SpawnActor<AAPoolable>(this->actorCopy->GetClass(), spawnParams);
		poolableObject->SetIndex(i);
		poolableObject->OnInitialize();
		this->availableObjects.Push(poolableObject);
	}
}

void UObjectPooling::BeginDestroy()
{
	Super::BeginDestroy();
	for (int i = 0; i < this->availableObjects.Num(); i++)
	{
		this->availableObjects[i]->Destroy();
	}

	for (int i = 0; i < this->usedObjects.Num(); i++)
	{
		this->usedObjects[i]->Destroy();
	}

	this->availableObjects.Empty();
	this->usedObjects.Empty();
}

AAPoolable* UObjectPooling::RequestPoolable()
{
	if (this->HasObjectAvailable(1))
	{
		AAPoolable* object = this->availableObjects.Pop();
		object->SetIndex(this->usedObjects.Num());
		this->usedObjects.Push(object);
		object->SetActorTransform(this->GetOwner()->GetActorTransform());
		object->OnActivate();
		return object;
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("No more available objects"));
		return NULL;
	}
}

TArray<AAPoolable*> UObjectPooling::RequestPoolableBatch(int size)
{
	TArray<AAPoolable*> objects;
	for (int i = 0; i < size && this->availableObjects.Num() > 0; i++)
	{
		objects.Push(this->RequestPoolable());
	}

	return objects;
}

void UObjectPooling::ReleasePoolable(AAPoolable* poolableObject)
{
	poolableObject->OnRelease();
	this->usedObjects.Remove(poolableObject);
	this->availableObjects.Push(poolableObject);
}

void UObjectPooling::ReleasePoolableBatch(TArray<AAPoolable*> objectList)
{
	for (int i = 0; i < objectList.Num(); i++)
	{
		this->ReleasePoolable(objectList[i]);
	}
}

bool UObjectPooling::HasObjectAvailable(int requestSize)
{
	return this->availableObjects.Num() > requestSize;
}

int UObjectPooling::GetMaxPoolSize()
{
	return this->maxPoolSize;
}

// Called when the game starts
void UObjectPooling::BeginPlay()
{
	Super::BeginPlay();

	// ...
	this->Initialize();
	this->RequestPoolableBatch(this->initialBatch);
	
}


// Called every frame
void UObjectPooling::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

