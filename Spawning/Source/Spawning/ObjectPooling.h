// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "APoolable.h"
#include "ObjectPooling.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SPAWNING_API UObjectPooling : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UObjectPooling();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void BeginDestroy() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void Initialize();
	bool HasObjectAvailable(int requestSize);
	int GetMaxPoolSize();
	AAPoolable* RequestPoolable();
	TArray<AAPoolable*> RequestPoolableBatch(int size);

	void ReleasePoolable(AAPoolable* poolableObject);
	void ReleasePoolableBatch(TArray<AAPoolable*> objectList);
	void ReleasePoolableBatch(int count);

private:
	UPROPERTY(EditAnywhere) int maxPoolSize = 500;
	UPROPERTY(EditAnywhere) int initialBatch = 100;
	UPROPERTY(EditAnywhere)	AAPoolable* actorCopy = NULL;
	UPROPERTY(EditAnywhere) AActor* parent = NULL;

	TArray<AAPoolable*> availableObjects;
	TArray<AAPoolable*> usedObjects;
};
