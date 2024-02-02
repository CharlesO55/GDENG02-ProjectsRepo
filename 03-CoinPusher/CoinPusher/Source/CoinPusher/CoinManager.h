// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoinManager.generated.h"

UCLASS()
class COINPUSHER_API ACoinManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoinManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void SpawnItems();


private:
	UPROPERTY(EditAnywhere) AActor* m_SpawnTemplate;
	UPROPERTY(EditAnywhere) int m_SpawnAmount;
	
	
	UPROPERTY(EditAnywhere) float m_DespawnRate;
	UPROPERTY(EditAnywhere) float m_SpawnRate;
	
	TArray<AActor*> m_Pool;
};