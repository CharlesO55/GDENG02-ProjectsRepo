// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinManager.h"

// Sets default values
ACoinManager::ACoinManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACoinManager::BeginPlay()
{
	Super::BeginPlay();
	

	this->m_SpawnTemplate->SetActorHiddenInGame(true);
	this->SpawnItems();
}

// Called every frame
void ACoinManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACoinManager::SpawnItems()
{
	FActorSpawnParameters spawnParams;
	spawnParams.Template = this->m_SpawnTemplate;
	spawnParams.Owner = this;

	FVector spawnLoc = this->GetActorLocation();
	FRotator spawnRot = this->GetActorRotation();

	for (int i = 0; i < this->m_SpawnAmount; i++) {
		AActor* newSpawn = this->GetWorld()->SpawnActor<AActor>(this->m_SpawnTemplate->GetClass(), spawnParams);

		newSpawn->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
		newSpawn->SetActorHiddenInGame(false);
		newSpawn->SetActorLocation(spawnLoc);
		newSpawn->SetActorRotation(spawnRot);

		this->m_Pool.Add(newSpawn);
	}

	UE_LOG(LogTemp, Display, TEXT("SPAWNED %d %s"), m_Pool.Num(), *(this->m_SpawnTemplate->GetName()));
}

