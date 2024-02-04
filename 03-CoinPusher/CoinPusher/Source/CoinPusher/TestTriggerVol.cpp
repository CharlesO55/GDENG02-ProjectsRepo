// Fill out your copyright notice in the Description page of Project Settings.


#include "TestTriggerVol.h"

#define PRINT_STRING(_MESSAGE) GEngine->AddOnScreenDebugMessage(-1, 1, FColor::White, _MESSAGE)

ATestTriggerVol::ATestTriggerVol()
{
	OnActorBeginOverlap.AddDynamic(this, &ATestTriggerVol::BeginOverlap);
}

void ATestTriggerVol::BeginPlay()
{
	Super::BeginPlay();

	DrawDebugBox(GetWorld(), GetActorLocation(), Brush->Bounds.BoxExtent, FColor::Orange, true, -1, 0, 5);
}


void ATestTriggerVol::BeginOverlap(AActor* OverlapActor, AActor* OtherActor)
{
	PRINT_STRING("Overlap");
}