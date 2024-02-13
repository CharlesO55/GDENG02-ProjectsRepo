// Fill out your copyright notice in the Description page of Project Settings.


#include "PusherController.h"

// Sets default values for this component's properties
UPusherController::UPusherController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPusherController::BeginPlay()
{
	Super::BeginPlay();

	//mover = GetOwner()->GetComponentByClass<UInterpToMovementComponent>();
	vecStartPos = GetOwner()->GetActorLocation();
	
	// ...
	// BIND
	UInputComponent* input = GetWorld()->GetFirstPlayerController()->GetPawn()->InputComponent;


	if (input) {
		input->BindAxis(CHANGE_PUSHER_SPEED, this, &UPusherController::ChangePusherSpeed);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No input component found for pusher controller"));
	}
}


// Called every frame
void UPusherController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	vecCurrPos = GetOwner()->GetActorLocation();

	if (vecCurrPos.X - vecStartPos.X > fInterpDistance) {
		vecDir.X = -1;
	}
	else if (vecCurrPos.X - vecStartPos.X < 0) {
		vecDir.X = 1;
	}

	GetOwner()->SetActorLocation(vecCurrPos + (vecDir * DeltaTime * speed));

	//FVector loc = GetOwner()->GetActorLocation();
	//UE_LOG(LogTemp, Warning, TEXT("LOC:  %f"), );
	//this->ticks += DeltaTime;
	/*
	if (this->ticks < 3)
	{
		if (this->pusher != NULL) 
		{
			if (this->forwards)
			{
				FVector location = this->pusher->GetTransform().GetLocation();
				float movement = -this->speed * DeltaTime;
				location.X += movement;
				this->pusher->SetActorLocation(location);
			}
			else
			{
				FVector location = this->pusher->GetTransform().GetLocation();
				float movement = this->speed * DeltaTime;
				location.X += movement;
				this->pusher->SetActorLocation(location);
			}
		}
	}
	else
	{
		this->forwards = !this->forwards;
		this->ticks = 0.0f;
	}*/
	// ...
}

void UPusherController::ChangePusherSpeed(float axisValue)
{
	if (axisValue == 0) {
		return;
	}

	this->speed += axisValue;
	speed = FMath::Clamp(speed, 0.f, 1000.f);


	ACoinPusherGame* GameMode = Cast<ACoinPusherGame>(GetWorld()->GetAuthGameMode());
	if (GameMode) {
		GameMode->ChangeSpeedText(speed);
	}
}