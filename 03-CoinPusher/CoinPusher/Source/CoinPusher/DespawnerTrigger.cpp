// Fill out your copyright notice in the Description page of Project Settings.


#include "DespawnerTrigger.h"

void ADespawnerTrigger::BeginPlay() {
	Super::BeginPlay();


	OnActorBeginOverlap.AddDynamic(this, &ADespawnerTrigger::CheckEnteredObj);
}

void ADespawnerTrigger::CheckEnteredObj(AActor* OverlappingActor, AActor* Other)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("PICKED UP!")));
}
