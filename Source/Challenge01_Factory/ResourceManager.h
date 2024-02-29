// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Truck.h"

#include "ResourceManager.generated.h"

class AFactoryBase;
UCLASS()
class CHALLENGE01_FACTORY_API AResourceManager : public AActor
{
	GENERATED_BODY()


public:	
	AResourceManager();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:	
	void RegisterFactory(AFactoryBase* factory);
	void SelectFactory(AFactoryBase* factory);

	//bool CanStartExchange(ATruck* truckEntered, AFactoryBase* factory);

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	AFactoryBase* _selectedFactory;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<AFactoryBase*> _factories;

	UPROPERTY(EditAnywhere)
	TArray<ATruck*> _trucks;

	UPROPERTY(EditAnywhere)
	TArray<FVector> _waypoints;

	int currWaypointIndex = 0;

private:
	APlayerController* _controller;
};