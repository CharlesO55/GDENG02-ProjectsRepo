// Fill out your copyright notice in the Description page of Project Settings.


#include "APoolable.h"
#include "ObjectPooling.h"
#include "CoinPusherGame.h"

// Sets default values
AAPoolable::AAPoolable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAPoolable::BeginPlay()
{
	Super::BeginPlay();

	this->SetActorHiddenInGame(true);
	this->SetActorTickEnabled(false);
	this->FindComponentByClass<UPrimitiveComponent>()->SetSimulatePhysics(false);
	
	//m_Mat = this->FindComponentByClass<UMaterial>();

	newMat = UMaterialInstanceDynamic::Create(m_Mat, this);
}

// Called every frame
void AAPoolable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (this->GetTransform().GetLocation().Z <= -100)
	{
		UObjectPooling* pool = this->objectPool->FindComponentByClass<UObjectPooling>();
		if (pool != NULL)
		{
			pool->ReleasePoolable(this);
		} else
		{
			UE_LOG(LogTemp, Display, TEXT("Can't find pool"));
		}
	}
}

void AAPoolable::OnInitialize()
{
	
}

void AAPoolable::OnRelease()
{
	this->SetActorHiddenInGame(true);
	this->SetActorTickEnabled(false);
	this->FindComponentByClass<UPrimitiveComponent>()->SetSimulatePhysics(false);

	ACoinPusherGame* GameMode = Cast<ACoinPusherGame>(GetWorld()->GetAuthGameMode());
	if (GameMode)
	{
		GameMode->AddCoin();
	}
}

void AAPoolable::OnActivate()
{
	this->SetActorHiddenInGame(false);
	this->SetActorTickEnabled(true);
	this->FindComponentByClass<UPrimitiveComponent>()->SetSimulatePhysics(true);

	float offset = FMath::RandRange(-200, 200);
	FVector location = this->GetTransform().GetLocation();
	location.Y += offset;
	this->SetActorLocation(location);

	this->RandomizeColor();
}

void AAPoolable::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (Cast<AActor>(OtherActor) != NULL)
	{
		UObjectPooling* pool = this->objectPool->FindComponentByClass<UObjectPooling>();
		if (pool != NULL)
		{
			pool->ReleasePoolable(this);
		}
	}
}



void AAPoolable::SetIndex(int i)
{
	this->index = i;
}

void AAPoolable::RandomizeColor()
{
	UStaticMeshComponent* mesh = this->FindComponentByClass<UStaticMeshComponent>();
	if (mesh && newMat) {

		FVector newColor = FVector(
			(std::rand() % 10) / 10.f,
			(std::rand() % 10) / 10.f,
			(std::rand() % 10) / 10.f
		);

		newMat->SetVectorParameterValue(COIN_COLOR, newColor);

		mesh->SetMaterial(0, newMat);
	}
}
