// Fill out your copyright notice in the Description page of Project Settings.


#include "moPlayerController.h"
#include "EnhancedInputSubsystems.h"

AmoPlayerController::AmoPlayerController()
	: _InputMappingContext(nullptr)
	, _MoveAction(nullptr)
	, _LookAction(nullptr)
{


}

void AmoPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (ULocalPlayer* localPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* subSystem = localPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (_InputMappingContext)
			{
				subSystem->AddMappingContext(_InputMappingContext, 0);
			}
		}
	}

}

