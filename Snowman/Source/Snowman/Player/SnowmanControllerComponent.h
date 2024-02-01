// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Camera/CameraComponent.h"

#include "PlayerSwitcher.h"


#include "SnowmanControllerComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SNOWMAN_API USnowmanControllerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USnowmanControllerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
private:
	const FName MOVE_X_KEY = FName("MoveX");
	const FName MOVE_Y_KEY = FName("MoveY");
	const FName SPACE_KEY = FName("SpaceKey");


	UPROPERTY(EditAnywhere) APawn* m_SnowmanPawn;

	UPROPERTY(EditAnywhere) float m_SPEED_MULTIPLIER = 300.f;
	
	//UPROPERTY(EditAnywhere) APlayerSwitcher* m_PlayerSwticher;

	void BindKeys();
	void MoveX(float axisValue);
	void MoveY(float axisValue);
	void SpacePress();

	bool bMoveX;
	bool bMoveY;
	float fMoveX;
	float fMoveY;

	bool isKeyBound;
};
