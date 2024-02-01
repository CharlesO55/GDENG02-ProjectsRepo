// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBase.h"

#include "NewTest/Game/PlayerTest.h"
#include "NewTest/Game/BallGameModeBase.h"

// Sets default values
AItemBase::AItemBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	RootComponent = Mesh;

	Mesh->OnComponentBeginOverlap.AddDynamic(this, &AItemBase::OverlapBegin);
}

// Called when the game starts or when spawned
void AItemBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AItemBase::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<APlayerTest>(OtherActor) != nullptr) 
	{
		this->Collected();
	}

}

void AItemBase::Collected_Implementation()
{
	ABallGameModeBase* GameMode = Cast<ABallGameModeBase>(GetWorld()->GetAuthGameMode());

	if (GameMode) {
		GameMode->ItemCollected();
	}
}