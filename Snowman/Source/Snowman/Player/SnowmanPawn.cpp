// Fill out your copyright notice in the Description page of Project Settings.


#include "SnowmanPawn.h"

#include "PlayerSwitcher.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"

// Sets default values
ASnowmanPawn::ASnowmanPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->AutoPossessPlayer = EAutoReceiveInput::Player0;
	

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	//UCameraComponent* OurCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("OurCamera"));
	this->snowmanMeshComponent = (USceneComponent*)CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OurMeshComponent"));
	//this->snowmanMeshComponent->simultephysics = true;

	this->cameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("OurCamera"));
	cameraComponent->SetupAttachment(RootComponent);
	cameraComponent->SetRelativeLocation(FVector(-350.f, 0.f, 350.f));
	cameraComponent->SetRelativeRotation(FRotator(-45.f, 0.f, 0.f));

	this->snowmanMeshComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ASnowmanPawn::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ASnowmanPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!this->isKeyBound) {
		//this->BindKeys();
	}

	if (this->bMoveX || this->bMoveY) {
		UE_LOG(LogTemp, Display, TEXT("[PAWN C++] Moving... (%.2f, %.2f)"), fMoveX, fMoveY);

		FVector loc = this->GetTransform().GetLocation();
		

		loc += cameraComponent->GetForwardVector() * (fMoveY * DeltaTime * m_SPEED_MULTIPLIER) + cameraComponent->GetRightVector() * (fMoveX * DeltaTime * m_SPEED_MULTIPLIER);
		loc.Z = this->GetTransform().GetLocation().Z;
		//((UStaticMeshComponent*)this->snowmanMeshComponent)->AddForce(cameraComponent->GetForwardVector() * fMoveX * DeltaTime);
		//((UStaticMeshComponent*)this->snowmanMeshComponent)->AddForce(cameraComponent->GetForwardVector()* fMoveY* DeltaTime);
	
		
		//OurCamera->GetForward()->
		//loc.X += m_SPEED_MULTIPLIER * fMoveX * DeltaTime;
		//loc.Y += m_SPEED_MULTIPLIER * fMoveY * DeltaTime;

		this->SetActorLocation(loc);
	}
}

// Called to bind functionality to input
void ASnowmanPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	BindKeys();
}

void ASnowmanPawn::BindKeys()
{
	//PAWN INHERITANCE VER
	this->InputComponent->BindAxis(MOVE_X_KEY, this, &ASnowmanPawn::MoveX);
	this->InputComponent->BindAxis(MOVE_Y_KEY, this, &ASnowmanPawn::MoveY);

	this->InputComponent->BindAction(SPACE_KEY, IE_Pressed, this, &ASnowmanPawn::SpacePress);

	this->isKeyBound = true;
}

void ASnowmanPawn::SpacePress() {
	this->bMoveX = false;
	this->bMoveY = false;
	this->fMoveX = 0;
	this->fMoveY = 0;

	this->isKeyBound = false;


	APlayerSwitcher::INSTANCE->SwitchPawn(this);
	//m_PlayerSwticher->SwitchPawn(this);
}

void ASnowmanPawn::MoveX(float axisValue)
{
	this->fMoveX = axisValue;
	this->bMoveX = (fMoveX != 0.0f);
}

void ASnowmanPawn::MoveY(float axisValue)
{
	this->fMoveY = axisValue;
	this->bMoveY = (fMoveY != 0.0f);
}

