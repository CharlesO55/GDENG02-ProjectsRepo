// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerTest.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
APlayerTest::APlayerTest()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bCanEverTick = false;


	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");

	RootComponent = Mesh;

	SpringArm->SetupAttachment(Mesh);
	Camera->SetupAttachment(SpringArm);

	Mesh->SetSimulatePhysics(true);

	Mesh->OnComponentHit.AddDynamic(this, &APlayerTest::OnHit);
}

// Called when the game starts or when spawned
void APlayerTest::BeginPlay()
{
	Super::BeginPlay();
	
	MoveForce *= Mesh->GetMass();
	JumpImpulse *= Mesh->GetMass();
}

// Called every frame
//void APlayerTest::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

// Called to bind functionality to input
void APlayerTest::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	APawn::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("MoveForward", this, &APlayerTest::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &APlayerTest::MoveRight);

	InputComponent->BindAction("Jump", IE_Pressed, this, &APlayerTest::Jump);
}

void APlayerTest::MoveRight(float Value)
{
	const FVector Right = Camera->GetRightVector() * MoveForce * Value;
	Mesh->AddForce(Right);
}

void APlayerTest::MoveForward(float Value)
{
	const FVector Forward = Camera->GetForwardVector() * MoveForce * Value;
	Mesh->AddForce(Forward);
}

void APlayerTest::Jump()
{
	if (JumpCount >= MaxJumpCount) {
		return;
	}

	Mesh->AddImpulse(FVector(0, 0, JumpImpulse));
	JumpCount++;
}

void APlayerTest::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	const float FHitDirection = Hit.Normal.Z;
	
	//GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Orange, FString::Printf(TEXT("Z NORMAL: %f"), FHitDirection));

	if (FHitDirection > 0) {
		JumpCount = 0;
	}
}