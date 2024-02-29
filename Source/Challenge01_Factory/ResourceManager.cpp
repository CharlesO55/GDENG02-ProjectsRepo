// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceManager.h"

// Sets default values
AResourceManager::AResourceManager()
{
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AResourceManager::BeginPlay()
{
	Super::BeginPlay();

	this->_controller = GetWorld()->GetFirstPlayerController();
	if (_controller) {
		_controller->bEnableMouseOverEvents = true;
		_controller->bEnableClickEvents = true;
		_controller->bShowMouseCursor = true;
	}

	//UPDATE
	if (_controller) {
		double x;
		double y;

		_controller->GetMousePosition(x, y);
		//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, FString::Printf(TEXT("Rotation: %f - %f"), x, y));
	}
}

void AResourceManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	for (ATruck* truck : _trucks) {
		UE_LOG(LogTemp, Display, TEXT("Collidde"));


		if (truck->isIdle) {

			truck->MoveTo(_waypoints[currWaypointIndex]);
			currWaypointIndex++;

			if (currWaypointIndex >= _waypoints.Num())
				currWaypointIndex = 0;
		}
	}

}


void AResourceManager::RegisterFactory(AFactoryBase* factory)
{
	this->_factories.Add(factory);
	this->_selectedFactory = factory;
}

void AResourceManager::SelectFactory(AFactoryBase* factory)
{
	this->_selectedFactory = factory;
}