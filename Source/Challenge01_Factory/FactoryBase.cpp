// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryBase.h"

// Sets default values
AFactoryBase::AFactoryBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	this->_mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Factory Mesh"));
	this->_emptyIndicator = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Empty Indicator"));
	this->_fullIndicator = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Full Indicator"));
	
	_mesh->SetMobility(EComponentMobility::Static);
	_emptyIndicator->SetMobility(EComponentMobility::Static);
	_fullIndicator->SetMobility(EComponentMobility::Static);

	RootComponent = this->_mesh;
	//this->_mesh->SetupAttachment(RootComponent);
	this->_emptyIndicator->SetupAttachment(RootComponent);
	this->_fullIndicator->SetupAttachment(RootComponent);


	this->_collisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Truck Detector"));
	this->_collisionBox->SetBoxExtent(FVector(75, 75, 75));
	this->_collisionBox->SetCollisionProfileName("Trigger");
	this->_collisionBox->SetMobility(EComponentMobility::Static);

	this->_collisionBox->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AFactoryBase::BeginPlay()
{
	Super::BeginPlay();
	
	this->_collisionBox->OnComponentBeginOverlap.AddDynamic(this, &AFactoryBase::OnOverlapBegin);


	_isMissingResources = false;


	switch (_InputResources.Num()) {
	case 1:
		input0 = 0;
		break;
	case 2:
		input0 = 0;
		input1 = 0;
		break;
	default:
		input0 = -1;
		input1 = -1;
	}
	CheckMissingResources();

	


	AActor* FoundActor = UGameplayStatics::GetActorOfClass(GetWorld(),
		AResourceManager::StaticClass());

	this->_resourceManager = Cast<AResourceManager>(FoundActor);
	if (_resourceManager == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("No resource manager found"));
	}
	else {
		_resourceManager->RegisterFactory(this);
	}

	this->SetProductionTime();
}

void AFactoryBase::SetProductionTime() {
	
}

void AFactoryBase::CheckMissingResources()
{
	/*for (FResourceData inputRes : _InputResources) {
		if (inputRes.CurCapacity <= 0)
			_isMissingResources = true;
	}*/
	if (input0 == 0 && input1 == 0) {
		_isMissingResources = true;
	}
	else {
		_isMissingResources = false;
	}
	


	ToggleIndicator(_emptyIndicator, _isMissingResources);
	ToggleIndicator(_fullIndicator, _isFull);
}


void AFactoryBase::NotifyActorOnClicked(FKey ButtonPressed)
{
	Super::NotifyActorOnClicked(ButtonPressed);

	_resourceManager->SelectFactory(this);

	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Blue, this->_FactoryName);
}


FResourceData AFactoryBase::GetProductionOuputResources()
{
	return _OuputResources;
}

void AFactoryBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (_isMissingResources || _isFull) {
		return;
	}

	ContinueProduction(DeltaTime);
}

float AFactoryBase::GetProgressPercentage()
{
	return this->_ProductionProgress / this->_ProductionTime;
}


void AFactoryBase::ContinueProduction(float DeltaTime)
{
	this->_ProductionProgress += DeltaTime;

	if (_ProductionProgress >= _ProductionTime) {
		this->_ProductionProgress = 0;


		//UPDATE OUTPUT RESOURCES
		this->_OuputResources.CurCapacity++;

		if (this->_OuputResources.CurCapacity >= this->_OuputResources.MaxCapacity)
		{
			_isFull = true;
			ToggleIndicator(_fullIndicator, _isFull);
		}


		//UPDATE INPUT RESOURCES
		if (input0 != -1) {
			input0 -= 1;
		}
		if (input1 != -1) {
			input1 -= 1;
		}
		CheckMissingResources();

		UE_LOG(LogTemp, Display, TEXT("Current production capacity: %d"), this->_OuputResources.CurCapacity);
	}
}

void AFactoryBase::ToggleIndicator(UStaticMeshComponent* indicator, bool bEnable)
{
	if (indicator) {
		indicator->SetVisibility(bEnable);
	}
}


void AFactoryBase::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UResourceModifier* resMod = OtherActor->GetComponentByClass<UResourceModifier>();

	UE_LOG(LogTemp, Error, TEXT("Collidde"));


	if (IsValid(resMod)) {
		UE_LOG(LogTemp, Error, TEXT("Refilled"));

		if (_OuputResources.ResourceType != EResource::SEWING_MACHINE) {
			_OuputResources.CurCapacity -= 1;
		}

		if (input0 != -1) {
			input0 += 1;
		}
		if (input1 != -1) {
			input1 += 1;
		}

		CheckMissingResources();
		//}
	}
}