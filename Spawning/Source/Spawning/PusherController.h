// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "Components/InterpToMovementComponent.h"

#include "CoinPusherGame.h"

#include "PusherController.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SPAWNING_API UPusherController : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPusherController();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	//float ticks = 0.0f;
	//bool forwards = true;

	FVector vecStartPos;
	FVector vecCurrPos;
	FVector vecDir = FVector(1, 0, 0);
	float fInterpDistance = 250.f;


	UPROPERTY(EditAnywhere) float speed = 100.0f;
	UPROPERTY(EditAnywhere) AActor* pusher = NULL;
		
	const FName CHANGE_PUSHER_SPEED = FName("Change Pusher Speed");

	void ChangePusherSpeed(float axisValue);
};
