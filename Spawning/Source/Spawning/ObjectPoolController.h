// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ObjectPooling.h"
#include "Components/ActorComponent.h"

#include "CoinWidget.h"

#include "ObjectPoolController.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SPAWNING_API UObjectPoolController : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UObjectPoolController();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	const FName SPAWN_KEY = FName("Spawn");
	const FName INCREMENT_SPAWN_AMOUNT = FName("Increment Spawn Amount");
	
	int spawnAmount = 1;

	int ticks = 0;

	UPROPERTY(EditAnywhere) AActor* objectPool = NULL;

	void DropCoin();
	void IncrementCoins(float axisValue);
};
