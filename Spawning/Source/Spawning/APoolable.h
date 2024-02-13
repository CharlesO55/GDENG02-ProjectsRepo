// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/StaticMeshActor.h"
#include "CoinPusherGame.h"
#include "APoolable.generated.h"

UCLASS()
class SPAWNING_API AAPoolable : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAPoolable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void OnInitialize();
	virtual void OnRelease();
	virtual void OnActivate();

	UFUNCTION()
	void OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void SetIndex(int i);
	int GetIndex();

	void RandomizeColor();

private:

	UPROPERTY(EditAnywhere) AActor* objectPool = NULL;
	int index = -1;

	UMaterialInstanceDynamic* newMat;
	const FName COIN_COLOR = FName("m_CoinColor");

	UPROPERTY(EditAnywhere) UMaterial* m_Mat = NULL;
};
