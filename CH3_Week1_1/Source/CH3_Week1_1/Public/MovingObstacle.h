// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingObstacle.generated.h"

UENUM(BlueprintType)
enum class EDir : uint8
{
	X UMETA(DisplayName = "X"),
	Y UMETA(DisplayName = "Y"),
	Z UMETA(DisplayName = "Z"),
};


UCLASS()
class CH3_WEEK1_1_API AMovingObstacle : public AActor
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Obstacled|Properties")
	float _MoveSpeed;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Obstacled|Properties")
	float _Scope;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Obstacled|Properties")
	float _CurrentScope;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Obstacled|Properties")
	EDir _eDirection;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Obstacled|Properties")
	bool _PlusMinus;

public:	
	AMovingObstacle();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Obstacle|Components")
	USceneComponent* _SceneRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Obstacle|Components")
	UStaticMeshComponent* _StaticMeshComp;

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
