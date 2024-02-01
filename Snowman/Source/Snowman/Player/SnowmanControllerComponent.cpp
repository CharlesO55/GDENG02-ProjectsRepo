// Fill out your copyright notice in the Description page of Project Settings.


#include "SnowmanControllerComponent.h"

#include "PlayerSwitcher.h"

// Sets default values for this component's properties
USnowmanControllerComponent::USnowmanControllerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USnowmanControllerComponent::BeginPlay()
{
	Super::BeginPlay();

	//ECS VER
	BindKeys();
}

// Called every frame
void USnowmanControllerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!this->isKeyBound) {
		BindKeys();
	}


	if (this->bMoveX || this->bMoveY) {
		UE_LOG(LogTemp, Display, TEXT("[ACTOR COMPONENT] Moving... %.2f %.2f"), fMoveX, fMoveY);

		FVector loc = this->m_SnowmanPawn->GetActorLocation();
		loc.X += this->fMoveX * m_SPEED_MULTIPLIER * DeltaTime;
		loc.Y += this->fMoveY * m_SPEED_MULTIPLIER * DeltaTime;

		
		this->m_SnowmanPawn->SetActorLocation(loc);
	}
}

void USnowmanControllerComponent::BindKeys()
{
	if (this->m_SnowmanPawn->InputComponent != NULL) {
		this->m_SnowmanPawn->InputComponent->BindAxis(this->MOVE_X_KEY, this, &USnowmanControllerComponent::MoveX);
		this->m_SnowmanPawn->InputComponent->BindAxis(this->MOVE_Y_KEY, this, &USnowmanControllerComponent::MoveY);

		this->m_SnowmanPawn->InputComponent->BindAction(this->SPACE_KEY, IE_Pressed, this, &USnowmanControllerComponent::SpacePress);

		this->isKeyBound = true;
	}
}

void USnowmanControllerComponent::MoveX(float axisValue)
{
	this->fMoveX = FMath::Clamp(axisValue, -1.0f, 1.0f);
	this->bMoveX = fMoveX != 0.0f;
}

void USnowmanControllerComponent::MoveY(float axisValue)
{
	this->fMoveY = FMath::Clamp(axisValue, -1.0f, 1.0f);
	this->bMoveY = fMoveY != 0.0f;
}


void USnowmanControllerComponent::SpacePress()
{
	//APlayerSwitcher::INSTANCE->SwitchPawn(this->m_SnowmanPawn);


	this->bMoveX = false;
	this->bMoveY = false;
	this->fMoveX = 0;
	this->fMoveY = 0;
	this->isKeyBound = false;

	this->m_SnowmanPawn->InputComponent->RemoveAxisBinding(MOVE_X_KEY);
	this->m_SnowmanPawn->InputComponent->RemoveAxisBinding(MOVE_Y_KEY);
	//this->m_SnowmanPawn->InputComponent->RemoveActionBinding(SPACE_KEY);
	//m_PlayerSwticher->SwitchPawn(this->m_SnowmanPawn);


	APlayerSwitcher::INSTANCE->SwitchPawn(this->m_SnowmanPawn);
}