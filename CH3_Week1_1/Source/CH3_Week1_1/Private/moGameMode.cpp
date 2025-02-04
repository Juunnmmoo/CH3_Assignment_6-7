// Fill out your copyright notice in the Description page of Project Settings.


#include "moGameMode.h"
#include "moCharactor.h"
#include "moPlayerController.h"

AmoGameMode::AmoGameMode()
{
	DefaultPawnClass = AmoCharactor::StaticClass();
	PlayerControllerClass = AmoPlayerController::StaticClass();
}
