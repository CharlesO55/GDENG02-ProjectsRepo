// Fill out your copyright notice in the Description page of Project Settings.


#include "DespawnerTrigger.h"

ADespawnerTrigger::ADespawnerTrigger() {
	OnActorBeginOverlap.AddDynamic(this, &ADespawnerTrigger::CheckEnteredObj);
}

void ADespawnerTrigger::BeginPlay() {
	Super::BeginPlay();
}

void ADespawnerTrigger::CheckEnteredObj(AActor* OverlappingActor, AActor* Other)
{
	if (OverlappingActor && Other && OverlappingActor != Other) {
		UE_LOG(LogTemp, Display,  TEXT("TRIGGER %s - %s"), 
			*(OverlappingActor->GetName()), 
			*(Other->GetName()));
	}
	
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("PICKED UP!")));
}
