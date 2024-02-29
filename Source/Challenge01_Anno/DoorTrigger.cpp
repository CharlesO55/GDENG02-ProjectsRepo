// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorTrigger.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"


ADoorTrigger::ADoorTrigger() {
	this->_collisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	this->_collisionBox->SetupAttachment(RootComponent);

	/*OnActorBeginOverlap.AddDynamic(this, &ADoorTrigger::ActorOverlapStart);
	OnActorBeginOverlap.AddDynamic(this, &ADoorTrigger::ActorOverlapEnd);*/
}

void ADoorTrigger::BeginPlay()
{
	Super::BeginPlay();
	this->_collisionBox->OnComponentBeginOverlap.AddDynamic(this, &ADoorTrigger::ComponentOverlapStart);
	this->_collisionBox->OnComponentEndOverlap.AddDynamic(this, &ADoorTrigger::ComponentOverlapEnd);
	
	//OnActorBeginOverlap.AddDynamic(this, &ADoorTrigger::OverlapEntered);
	//OnActorEndOverlap.AddDynamic(this, &ADoorTrigger::OverlapExited);
}



//void ADoorTrigger::ActorOverlapStart(AActor* OverlappedActor, AActor* OtherActor)
//{
//	UE_LOG(LogTemp, Warning, TEXT("Entered object"));
//	this->_totalObjects++;
//
//	if (IsValid(_door) && !_door->IsOpen && _totalObjects >= _neededObjects) {
//		this->_door->Open();
//	}
//}
//
//void ADoorTrigger::ActorOverlapEnd(AActor* OverlappedActor, AActor* OtherActor)
//{
//	UE_LOG(LogTemp, Warning, TEXT("Exited object"));
//	this->_totalObjects--;
//
//	if (IsValid(_door) && _door->IsOpen && this->_totalObjects < this->_neededObjects) {
//		_door->Close();
//	}
//}

void ADoorTrigger::ComponentOverlapStart(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->GetComponentByClass<UPhysicsHandleComponent>() != nullptr) {
		this->_totalObjects++;
		UE_LOG(LogTemp, Warning, TEXT("Overlap object"));
	}

	
	if (IsValid(_door) && _totalObjects >= _neededObjects) {
		this->_door->Open();
	}
}

void ADoorTrigger::ComponentOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor->GetComponentByClass<UPhysicsHandleComponent>() != nullptr) {
		this->_totalObjects--;
		UE_LOG(LogTemp, Warning, TEXT("Exit object"));
	}

	if (IsValid(_door) && _totalObjects < _neededObjects) {
		this->_door->Close();
	}
}