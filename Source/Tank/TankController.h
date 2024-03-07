// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankController.generated.h"

/**
 * 
 */
UCLASS()
class TANK_API ATankController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float deltaTime) override;
	UPROPERTY(BlueprintReadWrite) FVector2D _crosshairScreenLoc; //2D PIXEL POS OF THE CROSSHAIR
	UPROPERTY(BlueprintReadWrite) AActor* _projectileCopy;

private:
	FVector _latestCameraLoc;		//CAM POS
	FVector _latestWorldDirection;	//CAM DIR
	FVector _latestWorldPoint;		//HIT LOCATION

	bool GetRayHitLocation();
	bool GetWorldPoint();
	void OnFire();
	void SpawnProjectile();
};
