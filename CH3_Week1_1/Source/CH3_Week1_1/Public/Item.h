// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"				// �⺻ �ھ� �������
#include "GameFramework/Actor.h"		// Actor�� ���� ������  �������ִ� �������
#include "Item.generated.h"				// �������Ʈ���� �� �� �ְԲ� ���ִ� �������

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
