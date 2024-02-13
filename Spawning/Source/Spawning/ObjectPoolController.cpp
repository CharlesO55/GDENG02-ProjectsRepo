// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectPoolController.h"

// Sets default values for this component's properties
UObjectPoolController::UObjectPoolController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UObjectPoolController::BeginPlay()
{
	Super::BeginPlay();
	if (this->GetOwner()->InputComponent != NULL)
	{
		this->GetOwner()->InputComponent->BindAction(this->SPAWN_KEY, EInputEvent::IE_Pressed, this, &UObjectPoolController::DropCoin);
		this->GetOwner()->InputComponent->BindAxis(this->INCREMENT_SPAWN_AMOUNT, this, &UObjectPoolController::IncrementCoins);
	} else
	{
		UE_LOG(LogTemp, Display, TEXT("No Input Component"));
	}

	// ...
	
}


// Called every frame
void UObjectPoolController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	ticks++;
}

void UObjectPoolController::DropCoin()
{
	UObjectPooling* pool = this->objectPool->FindComponentByClass<UObjectPooling>();
	if (pool != NULL) 
	{
		pool->RequestPoolableBatch(this->spawnAmount);
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("Pool not Found"));
	}
}

void UObjectPoolController::IncrementCoins(float axisValue)
{
	if (axisValue == 0 || ticks < 10) {
		return;
	}

	ticks = 0;
	this->spawnAmount += axisValue;
	this->spawnAmount = FMath::Clamp(spawnAmount, 1, 20);

	ACoinPusherGame* gamemode = Cast<ACoinPusherGame>(GetWorld()->GetAuthGameMode());
	if (gamemode) {
		gamemode->ChangeSpawnText(spawnAmount);
	}
}
