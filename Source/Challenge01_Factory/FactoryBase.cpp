// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryBase.h"

// Sets default values
AFactoryBase::AFactoryBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	this->_mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Factory Mesh"));
	this->_emptyIndicator = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Empty Indicator"));
	this->_fullIndicator = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Full Indicator"));
	
	this->_mesh->SetupAttachment(RootComponent);
	this->_emptyIndicator->SetupAttachment(RootComponent);
	this->_fullIndicator->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AFactoryBase::BeginPlay()
{
	Super::BeginPlay();
	
	_isMissingResources = false;


	for (FResourceData inputRes : _InputResources) {
		if (inputRes.CurCapacity <= 0)
			_isMissingResources = true;
	}


	ToggleIndicator(_emptyIndicator, _isMissingResources);
	ToggleIndicator(_fullIndicator, _isFull);
}


void AFactoryBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (_isMissingResources || _isFull) {
		return;
	}

	ContinueProduction(DeltaTime);
}


void AFactoryBase::ContinueProduction(float DeltaTime)
{
	this->_ProductionProgress += DeltaTime;

	if (_ProductionProgress >= _ProductionTime) {
		this->_ProductionProgress = 0;


		//UPDATE OUTPUT RESOURCES
		this->_OuputResources.CurCapacity++;

		if (this->_OuputResources.CurCapacity >= this->_OuputResources.MaxCapacity)
		{
			_isFull = true;
			ToggleIndicator(_fullIndicator, _isFull);
		}


		//UPDATE INPUT RESOURCES
		for (FResourceData resUsed : _InputResources) {
			resUsed.CurCapacity--;

			if (resUsed.CurCapacity <= 0)
			{
				_isMissingResources = true;
				ToggleIndicator(_emptyIndicator, _isMissingResources);
			}
		}

		UE_LOG(LogTemp, Display, TEXT("Current capacity: %d"), this->_OuputResources.CurCapacity);
	}
}

void AFactoryBase::ToggleIndicator(UStaticMeshComponent* indicator, bool bEnable)
{
	if (indicator) {
		indicator->SetVisibility(bEnable);
	}
}
