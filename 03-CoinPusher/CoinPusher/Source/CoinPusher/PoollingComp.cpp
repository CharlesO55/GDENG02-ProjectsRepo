// Fill out your copyright notice in the Description page of Project Settings.


#include "PoollingComp.h"

// Sets default values for this component's properties
UPoollingComp::UPoollingComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPoollingComp::BeginPlay()
{
	Super::BeginPlay();

	this->Initialize();
}

void UPoollingComp::BeginDestroy()
{
	Super::BeginDestroy();

	for (auto unused : m_AvailableObjects) {
		unused->Destroy();
	}
	for (auto used : m_UsedObjects) {
		used->Destroy();
	}

	this->m_AvailableObjects.Empty();
	this->m_UsedObjects.Empty();
}


// Called every frame
void UPoollingComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPoollingComp::Initialize()
{
	if (this->m_PoolableTemplate == NULL) {
		UE_LOG(LogTemp, Warning, TEXT("Pool has no template to copy"));
		return;
	}

	FActorSpawnParameters spawnParams;
	spawnParams.Template = this->m_PoolableTemplate;
	spawnParams.Owner = this->GetOwner();

	for (int i = 0; i < m_PoolSize; i++) {
		AActorPoolable* newSpawn = this->GetWorld()->SpawnActor<AActorPoolable>(this->m_PoolableTemplate->GetClass(), spawnParams);

		//newSpawn->OnInitialize();
		newSpawn->SetIndex(i);

		newSpawn->SetMobility(EComponentMobility::Movable);

		this->m_AvailableObjects.Push(newSpawn);
	}

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(
		TEXT("POOLING HAS SPAWNED %d %s"), 
		m_AvailableObjects.Num(), *(this->m_PoolableTemplate->GetName())
	));
}

AActorPoolable* UPoollingComp::RequestPoolable()
{
	if (this->HasObjectAvailable(1)) {
		AActorPoolable* foundObj = this->m_AvailableObjects.Pop();

		foundObj->SetIndex(this->m_UsedObjects.Num());
		this->m_UsedObjects.Add(foundObj);

		foundObj->OnActivate();
		foundObj->SetActorTransform(this->GetOwner()->GetActorTransform());

		this->CoinAmountUpdated.Broadcast(this->GetRemainingAvailableSize());

		return foundObj;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("AvailableObjects Pool is empty"));
		return NULL;
	}
}

TArray<AActorPoolable*> UPoollingComp::RequestPoolableBatch(int nRequestAmount)
{
	TArray<AActorPoolable*> foundObjects;

	for (int i = 0; i < nRequestAmount && this->m_AvailableObjects.Num() > 0; i++) {
		foundObjects.Push(this->RequestPoolable());
	}

	return foundObjects;
}

void UPoollingComp::ReleasePoolable(AActorPoolable* releaseActor)
{
	releaseActor->OnRelease();
	this->m_UsedObjects.Remove(releaseActor);
	this->m_AvailableObjects.Push(releaseActor);
}

void UPoollingComp::ReleasePoolableBatch(TArray<AActorPoolable*> releaseActors)
{
	for (auto iActor: releaseActors) {
		this->ReleasePoolable(iActor);
	}

}

void UPoollingComp::ReleasePoolableBatch(int nAmount)
{
	
}

int UPoollingComp::GetMaxPoolSize()
{
	return this->m_PoolSize;
}

bool UPoollingComp::HasObjectAvailable(int nRequestAmount)
{
	return this->m_AvailableObjects.Num() > 0;
}

int UPoollingComp::GetRemainingAvailableSize()
{
	return this->m_AvailableObjects.Num();
}

