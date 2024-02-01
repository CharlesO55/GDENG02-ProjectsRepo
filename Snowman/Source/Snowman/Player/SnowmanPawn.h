// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "PlayerSwitcher.h"

#include "SnowmanPawn.generated.h"

class UCameraComponent;

UCLASS()
class SNOWMAN_API ASnowmanPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASnowmanPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


private:
	UPROPERTY(EditAnywhere) USceneComponent* snowmanMeshComponent;
	UPROPERTY(EditAnywhere) UCameraComponent* cameraComponent;
	UPROPERTY(EditAnywhere) float m_SPEED_MULTIPLIER = 300.f;
	UPROPERTY(EditAnywhere) APlayerSwitcher* m_PlayerSwticher;


	//UPROPERTY(EditAnywhere) APlayerController* m_PlayerController;

	const FName SPACE_KEY = FName("SpaceKey");
	const FName MOVE_X_KEY = FName("MoveX");
	const FName MOVE_Y_KEY = FName("MoveY");
	
	void BindKeys();
	void SpacePress();
	void MoveX(float axisValue);
	void MoveY(float axisValue);

	bool bMoveX;
	bool bMoveY;
	float fMoveX;
	float fMoveY;
	bool isKeyBound;
};
