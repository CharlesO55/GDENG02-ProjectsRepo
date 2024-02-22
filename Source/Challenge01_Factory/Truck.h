// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "ResourceData.h"
#include "FactoryBase.h"

#include "Truck.generated.h"


UCLASS(Config=Game)
class CHALLENGE01_FACTORY_API ATruck : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATruck();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


protected:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* _truckMesh;

public:
	UPROPERTY(Config, VisibleAnywhere)
	float MIN_TRUCK_MOVE_TIME;

	//CARGO
	UPROPERTY(Config, VisibleAnywhere)
	int CARGO_SIZE;
	UPROPERTY(EditAnywhere)
	TArray<EResource> _cargo;

	UPROPERTY(EditAnywhere)
	float LoadingProgress = 0;
	UPROPERTY(EditAnywhere)
	float LoadingTime = 0;
	
private:
	UPROPERTY(VisibleAnywhere)
	AFactoryBase* _targetFactory;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void MoveTo(FVector targetLocation);

public:
	void UpdateResources();

	bool CheckCargo(AFactoryBase* factory);
};