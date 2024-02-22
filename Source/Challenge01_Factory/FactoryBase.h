// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"

#include "ResourceData.h"
#include "ResourceManager.h"

#include "FactoryBase.generated.h"

UCLASS()
class CHALLENGE01_FACTORY_API AFactoryBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFactoryBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyActorOnClicked(FKey ButtonPressed = EKeys::LeftMouseButton) override;


	void ContinueProduction(float DeltaTime);
	void ToggleIndicator(UStaticMeshComponent* indicator, bool bEnable);

	UFUNCTION(BlueprintCallable)
	FResourceData GetProductionOuputResources();

protected:
	bool _isFull = false;
	bool _isMissingResources;


public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString _FactoryName;

public:	
	
	UPROPERTY(EditAnywhere)
	float _ProductionTime = 5;

	UPROPERTY(EditAnywhere)
	float _ProductionProgress;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FResourceData _OuputResources;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FResourceData> _InputResources;

	UPROPERTY(EditAnywhere, Category="Factory Meshes")
	UStaticMeshComponent* _mesh;

	UPROPERTY(EditAnywhere, Category = "Factory Meshes")
	UStaticMeshComponent* _fullIndicator;

	UPROPERTY(EditAnywhere, Category = "Factory Meshes")
	UStaticMeshComponent* _emptyIndicator;

	UFUNCTION(BlueprintCallable)
	float GetProgressPercentage();


	AResourceManager* _resourceManager;


	UPROPERTY(EditAnywhere)
	UBoxComponent* _collisionBox;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};