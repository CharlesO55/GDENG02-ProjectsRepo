// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*this->_anchor = (USceneComponent*)CreateDefaultSubobject<USceneComponent>(TEXT("Anchor"));
	
	RootComponent = _anchor;

	this->_mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door Mesh"));
	this->_mesh->SetupAttachment(RootComponent);*/
}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

