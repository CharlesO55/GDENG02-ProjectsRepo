// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"

#include "Door.h"
#include "Components/BoxComponent.h"

#include "DoorTrigger.generated.h"

/**
 * 
 */
UCLASS()
class CHALLENGE01_ANNO_API ADoorTrigger : public AActor
{
	GENERATED_BODY()
	
	
private:
	ADoorTrigger();
	virtual void BeginPlay() override;

	
	UPROPERTY(VisibleAnywhere)
	int _totalObjects = 0;

	UPROPERTY(EditAnywhere)
	int _neededObjects = 3;


	UPROPERTY(EditAnywhere)
	ADoor* _door;

	/*UFUNCTION() void ActorOverlapStart(class AActor* OverlappedActor, class AActor* OtherActor);
	UFUNCTION() void ActorOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);*/
	

	UPROPERTY(EditAnywhere)
	UBoxComponent* _collisionBox;

	UFUNCTION() 
	void ComponentOverlapStart(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION() 
	void ComponentOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};