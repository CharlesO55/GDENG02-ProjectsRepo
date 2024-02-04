// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "Engine/TriggerBox.h"
#include "PoollingComp.h"

#include "GameController.generated.h"

UCLASS()
class COINPUSHER_API AGameController : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGameController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


private:
	//INPUT
	const FName SPACE_KEY = FName("Space Key");
	const FName MOVE_X = FName("MoveX");
	const FName MOVE_Y = FName("MoveY");

	FVector m_InputVector;

	//POOLING
	UPROPERTY(VisibleAnywhere) UPoollingComp* m_CoinPool;

	UPROPERTY(EditAnywhere) ATriggerBox* m_SpawnBox;

	UPROPERTY(EditAnywhere) int m_StartingSpawnAmount = 10;

private:
	void SpawnCoin();
	void RandomizePostion(AActor* actor);


	void MoveX(float axisValue);
	void MoveY(float axisValue);
};