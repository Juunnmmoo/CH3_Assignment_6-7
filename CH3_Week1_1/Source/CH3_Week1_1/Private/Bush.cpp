// Fill out your copyright notice in the Description page of Project Settings.


#include "Bush.h"

// Sets default values
ABush::ABush()
{
	_SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("_SceneComp"));
	SetRootComponent(_SceneComp);

	_StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("_StaticMeshComp"));
	_StaticMeshComp->SetupAttachment(_SceneComp);

	// ���ϴ� Mesh�� �ּҷ� MeshAsset���� �� �ʱ�ȭ
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/Resources/Props/SM_Bush.SM_Bush"));
	
	// ���ϴ� Material�� �ּҷ� MaterialAsset���� �� �ʱ�ȭ
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Game/Resources/Materials/M_Ground_Grass.M_Ground_Grass"));

	// Mesh�� Material����Material�� �������� �� �� �����Ƿ� Index�� �����������.
	if (MeshAsset.Succeeded())
	{
		_StaticMeshComp->SetStaticMesh(MeshAsset.Object);
	}
	if (MaterialAsset.Succeeded())
	{
		_StaticMeshComp->SetMaterial(0, MaterialAsset.Object);
	}
	
}



