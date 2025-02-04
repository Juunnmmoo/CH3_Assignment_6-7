// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"				// 기본 코어 헤더파일
#include "GameFramework/Actor.h"		// Actor에 대한 정보를  가지고있는 헤더파일
#include "Item.generated.h"				// 블루프린트에서 볼 수 있게끔 해주는 헤더파일

UCLASS()
class CH3_WEEK1_1_API AItem : public AActor		
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

protected:
	USceneComponent*		SceneRoot;
	UStaticMeshComponent*	StaticMeshComp;
};
