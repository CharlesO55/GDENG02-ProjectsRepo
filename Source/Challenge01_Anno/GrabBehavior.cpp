// Fill out your copyright notice in the Description page of Project Settings.


#include "GrabBehavior.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

// Sets default values for this component's properties
#define out
UGrabBehavior::UGrabBehavior()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabBehavior::BeginPlay()
{
	Super::BeginPlay();
	
	UInputComponent* input = GetOwner()->FindComponentByClass<UInputComponent>();

	//INPUT BINDING
	if (input != nullptr) {
		input->BindAction("Grab", IE_Pressed, this, &UGrabBehavior::Grab);
		input->BindAction("Grab", IE_Released, this, &UGrabBehavior::Release);
		input->BindAction("Throw", IE_Pressed, this, &UGrabBehavior::Throw);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No input component"));
	}
}


// Called every frame
void UGrabBehavior::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (this->_hasGrabbed) {
		FVector lineTraceEnd = CalcLineTraceEnd();
		
		if (this->_grabbedActor != nullptr) {
			//USE PHYSICS HANDLE
			if (this->_physicsHandle != nullptr) {
				this->_physicsHandle->SetTargetLocation(lineTraceEnd);
			}
			//FORCE THE POSITION IF NONE
			else {
				FVector grabbedLoc = this->_grabbedActor->GetActorLocation();
				grabbedLoc = lineTraceEnd;
				this->_grabbedActor->SetActorLocation(grabbedLoc);
			}
		}
	}
}

void UGrabBehavior::Grab()
{
	FVector location;
	FRotator rotation;
	this->GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(out location, out rotation);

	//LINE TRACING
	FVector lineTraceEnd = location + rotation.Vector() * this->REACH;
	DrawDebugLine(this->GetWorld(), location, lineTraceEnd, FColor::Blue, false, 1.0, 0, 5.0f);

	//RAY TRACING
	FHitResult hitResult;
	FCollisionQueryParams traceParams(FName(TEXT("traceQuery")), false, this->GetOwner());
	FCollisionObjectQueryParams objectTypeParams(ECollisionChannel::ECC_PhysicsBody);

	//RESULTS CHECK
	this->GetWorld()->LineTraceSingleByObjectType(out hitResult, location, lineTraceEnd, objectTypeParams, traceParams);
	this->_grabbedActor = hitResult.GetActor();
	
	if (_grabbedActor != nullptr) {
		_hasGrabbed = true;
		_grabbedPrimitive = hitResult.GetComponent();

		UE_LOG(LogTemp, Warning, TEXT("Grabbed object: %s %s"), *this->_grabbedActor->GetName(), *this->_grabbedPrimitive->GetName());

		//PHYSICS HANDLE
		this->_physicsHandle = _grabbedActor->GetComponentByClass<UPhysicsHandleComponent>();
		if (_physicsHandle != nullptr) {
			this->_grabbedPrimitive->AddForceAtLocation(lineTraceEnd * 1000, lineTraceEnd, EName::None);
			_physicsHandle->GrabComponentAtLocation(this->_grabbedPrimitive, EName::None, lineTraceEnd);
		}
	}
}

void UGrabBehavior::Release()
{
	UE_LOG(LogTemp, Warning, TEXT("Released"));

	this->_hasGrabbed = false;
	this->_grabbedActor = nullptr;
	this->_grabbedPrimitive = nullptr;

	if (this->_physicsHandle != nullptr) {
		this->_physicsHandle->ReleaseComponent();
	}
}


void UGrabBehavior::Throw()
{
	UE_LOG(LogTemp, Warning, TEXT("Throw"));
}


FVector UGrabBehavior::CalcLineTraceEnd()
{
	FVector location;
	FRotator rotation;
	this->GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(out location, out rotation);

	//LINE TRACING
	FVector lineTraceEnd = location + rotation.Vector() * this->REACH;
	return lineTraceEnd;
}