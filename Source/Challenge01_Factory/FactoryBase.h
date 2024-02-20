// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "ResourceData.h"

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

	void ContinueProduction(float DeltaTime);
	void ToggleIndicator(UStaticMeshComponent* indicator, bool bEnable);

protected:
	bool _isFull = false;
	bool _isMissingResources;


protected:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	float _ProductionTime = 5;

	UPROPERTY(EditAnywhere)
	float _ProductionProgress;


	UPROPERTY(EditAnywhere) 
	FResourceData _OuputResources;

	UPROPERTY(EditAnywhere)
	TArray<FResourceData> _InputResources;

	UPROPERTY(EditAnywhere, Category="Factory Meshes")
	UStaticMeshComponent* _mesh;

	UPROPERTY(EditAnywhere, Category = "Factory Meshes")
	UStaticMeshComponent* _fullIndicator;

	UPROPERTY(EditAnywhere, Category = "Factory Meshes")
	UStaticMeshComponent* _emptyIndicator;
};