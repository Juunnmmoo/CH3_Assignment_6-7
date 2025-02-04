

#include "MovingObstacle.h"

AMovingObstacle::AMovingObstacle()
	: _MoveSpeed(50.f)
	, _Scope(200.f)
	, _CurrentScope(0.f)
	, _eDirection(EDir::Y)
	, _PlusMinus(true)
{
	PrimaryActorTick.bCanEverTick = true;

	_SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("_SceneRoot"));
	SetRootComponent(_SceneRoot);

	_StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("_StaticMeshComp"));
	_StaticMeshComp->SetupAttachment(_SceneRoot);
}

void AMovingObstacle::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMovingObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (_CurrentScope <= 0.f)
	{
		_PlusMinus = true;
	}
	else if (_CurrentScope >= _Scope)
	{
		_PlusMinus = false;
	}


	if (_PlusMinus)
	{
		_CurrentScope += _MoveSpeed * DeltaTime;
	}
	else
	{
		_CurrentScope -= _MoveSpeed * DeltaTime;
	}

	FVector playerLocation = GetActorLocation();
	
	if (_eDirection == EDir::X)
	{
		if (_PlusMinus)
		{
			playerLocation.X += _MoveSpeed * DeltaTime;
		}
		else
		{
			playerLocation.X -= _MoveSpeed * DeltaTime;
		}
	}
	else if (_eDirection == EDir::Y)
	{
		if (_PlusMinus)
		{
			playerLocation.Y += _MoveSpeed * DeltaTime;
		}
		else
		{
			playerLocation.Y -= _MoveSpeed * DeltaTime;
		}
	}
	else if (_eDirection == EDir::Z)
	{
		if (_PlusMinus)
		{
			playerLocation.Z += _MoveSpeed * DeltaTime;
		}
		else
		{
			playerLocation.Z -= _MoveSpeed * DeltaTime;
		}
	}

	SetActorLocation(FVector(playerLocation.X, playerLocation.Y, playerLocation.Z));

}

