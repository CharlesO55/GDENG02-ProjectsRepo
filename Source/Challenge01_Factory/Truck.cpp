// Fill out your copyright notice in the Description page of Project Settings.


#include "Truck.h"

// Sets default values
ATruck::ATruck()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	this->_truckMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Truck Mesh"));
	this->_truckMesh->SetupAttachment(RootComponent);

	this->_resModifier = CreateDefaultSubobject<UResourceModifier>(TEXT("Resource Holder"));
	//this->_resModifier->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ATruck::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < CARGO_SIZE; i++) {
		///this->_cargo.Add("NONE");
		this->_cargo.Add(EResource::NONE);
	}
	

	UCharacterMovementComponent* _moveComp = GetComponentByClass<UCharacterMovementComponent>();
	if (_moveComp) {
		float distance = 1000.f;
		float speed = (distance / MIN_TRUCK_MOVE_TIME) * .8f;

		_moveComp->MaxCustomMovementSpeed = speed;
		_moveComp->MaxWalkSpeed = speed;

		_moveComp->MaxAcceleration = 10000000000000;
	}


	_waypoints.Add(FVector(-500, 500, 0));
	_waypoints.Add(FVector(500, 500, 0));
	_waypoints.Add(FVector(0, 0, 0));
	_waypoints.Add(FVector(-500, -500, 0));
	_waypoints.Add(FVector(500, -500, 0));
	//this->MoveTo(FVector(0, 0, 0));
}

// Called every frame
void ATruck::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (this->isIdle) {
		this->MoveTo(_waypoints[curIndex]);

		curIndex++;
		if (curIndex >= _waypoints.Num()) {
			curIndex = 0;
		}
	}


	if (LoadingTime != 0 && LoadingProgress < LoadingTime) {
		LoadingProgress += DeltaTime;

		if (LoadingTime >= LoadingTime) {
			LoadingTime = 0;
			LoadingProgress = 0;
			this->UpdateResources();
		}
	}
}

// Called to bind functionality to input
void ATruck::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ATruck::UpdateResources()
{
	/*if (!IsValid(_targetFactory)) {
		return;
	}*/
	////UNLOAD
	//for (FResourceData inputResources : _targetFactory->_InputResources) {
	//	for (EResource myCargo : _cargo) {
	//		if (myCargo == inputResources.ResourceType && inputResources.CurCapacity < inputResources.MaxCapacity) {
	//			_cargo.Remove(myCargo);
	//			inputResources.CurCapacity += 1;
	//		}
	//	}
	//}


	//LOAD
}

//bool ATruck::CheckCargo(AFactoryBase* factory)
//{
//	if (!IsValid(_targetFactory)) {
//		return false;
//	}
//
//
//	if (factory->_FactoryName == this->_targetFactory->_FactoryName){
//		//START TRANSFERING
//		LoadingTime = FMath::RandRange(1, 3);
//
//		return true;
//	}
//
//	return false;
//}