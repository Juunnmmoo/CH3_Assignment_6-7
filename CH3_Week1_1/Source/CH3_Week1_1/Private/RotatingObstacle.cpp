#include "RotatingObstacle.h"

ARotatingObstacle::ARotatingObstacle()
	:_RotateSpeed(90.f)
{
	PrimaryActorTick.bCanEverTick = true;

	_SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("_SceneRoot"));
	SetRootComponent(_SceneRoot);

	_StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("_StaticMeshComp"));
	_StaticMeshComp->SetupAttachment(_SceneRoot);


}

void ARotatingObstacle::BeginPlay()
{
	Super::BeginPlay();
	
}

void ARotatingObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!FMath::IsNearlyZero(_RotateSpeed))
	{
		AddActorLocalRotation(FRotator(_RotateSpeed * DeltaTime, 0.0f, 0.0f));
	}

}

