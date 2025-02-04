// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatingObstacle.generated.h"

UCLASS()
class CH3_WEEK1_1_API ARotatingObstacle : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Obstacled|Properties")
	float _RotateSpeed;

public:	
	ARotatingObstacle();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Obstacle|Components")
	USceneComponent* _SceneRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Obstacle|Components")
	UStaticMeshComponent* _StaticMeshComp;


protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
