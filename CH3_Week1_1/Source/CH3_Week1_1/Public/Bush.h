// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bush.generated.h"

UCLASS()
class CH3_WEEK1_1_API ABush : public AActor
{
	GENERATED_BODY()
	
public:	
	ABush();

protected:
	USceneComponent*		_SceneComp;
	UStaticMeshComponent*	_StaticMeshComp;
};





