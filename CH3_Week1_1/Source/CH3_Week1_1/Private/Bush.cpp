// Fill out your copyright notice in the Description page of Project Settings.


#include "Bush.h"

// Sets default values
ABush::ABush()
{
	_SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("_SceneComp"));
	SetRootComponent(_SceneComp);

	_StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("_StaticMeshComp"));
	_StaticMeshComp->SetupAttachment(_SceneComp);

	// 원하는 Mesh의 주소로 MeshAsset생성 및 초기화
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/Resources/Props/SM_Bush.SM_Bush"));
	
	// 원하는 Material의 주소로 MaterialAsset생성 및 초기화
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Game/Resources/Materials/M_Ground_Grass.M_Ground_Grass"));

	// Mesh와 Material설정Material은 여러개가 들어갈 수 있으므로 Index값 설정해줘야함.
	if (MeshAsset.Succeeded())
	{
		_StaticMeshComp->SetStaticMesh(MeshAsset.Object);
	}
	if (MaterialAsset.Succeeded())
	{
		_StaticMeshComp->SetMaterial(0, MaterialAsset.Object);
	}
	
}



