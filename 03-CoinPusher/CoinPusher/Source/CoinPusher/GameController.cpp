// Fill out your copyright notice in the Description page of Project Settings.


#include "GameController.h"

// Sets default values
AGameController::AGameController()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AGameController::BeginPlay()
{
	Super::BeginPlay();
	

	this->m_CoinPool = this->GetComponentByClass<UPoollingComp>();

	TArray<AActorPoolable*> spawnedCoins = this->m_CoinPool->RequestPoolableBatch(m_StartingSpawnAmount);

	for (AActorPoolable* coin : spawnedCoins) {
		this->RandomizePostion(coin);
	}
	UE_LOG(LogTemp, Display, TEXT("Started with %d coins"), spawnedCoins.Num());
}

// Called every frame
void AGameController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*FVector currLoc = this->GetActorLocation() + m_InputVector * 500 * DeltaTime;
	this->SetActorLocation(currLoc);*/

}

// Called to bind functionality to input
void AGameController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(MOVE_X, this, &AGameController::MoveX);
	PlayerInputComponent->BindAxis(MOVE_Y, this, &AGameController::MoveY);
	PlayerInputComponent->BindAction(SPACE_KEY, IE_Pressed, this, &AGameController::SpawnCoin);
}

//int AGameController::GetCoins()
//{
//	return this->m_CoinPool->GetRemainingAvailableSize();
//}

void AGameController::SpawnCoin() {
	UE_LOG(LogTemp, Display, TEXT("Space Confirmed"));

	if (this->m_CoinPool) {
		AActorPoolable* newCoin = this->m_CoinPool->RequestPoolable();

		if (newCoin) {
			RandomizePostion(newCoin);
		}
	}
}

void AGameController::RandomizePostion(AActor* actor)
{
	FVector pos = actor->GetActorLocation();

	FBox box = m_SpawnBox->GetComponentsBoundingBox();
	 
	pos.X = rand() % ((int)box.Max.X - (int)box.Min.X + 1) + box.Min.X;
	pos.Y = rand() % ((int)box.Max.Y - (int)box.Min.Y + 1) + box.Min.Y;
	pos.Z = rand() % ((int)box.Max.Z - (int)box.Min.Z + 1) + box.Min.Z;

	actor->SetActorLocation(pos);
}



void AGameController::MoveX(float axisValue)
{
	this->m_InputVector.X = axisValue;
}
void AGameController::MoveY(float axisValue)
{
	this->m_InputVector.Y = axisValue;
}