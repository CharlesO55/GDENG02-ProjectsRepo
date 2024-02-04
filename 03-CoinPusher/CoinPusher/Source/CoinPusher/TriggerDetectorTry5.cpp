// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerDetectorTry5.h"

// Sets default values
ATriggerDetectorTry5::ATriggerDetectorTry5()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATriggerDetectorTry5::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATriggerDetectorTry5::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	GetOverlappingActors(this->m_OverlappingObjs, AActorPoolable::StaticClass());

	if (this->m_OverlappingObjs.Num() > 0) {
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::White, "Overlap");
	}
}

