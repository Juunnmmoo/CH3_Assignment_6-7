#include "moCharactor.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "moPlayerController.h"

AmoCharactor::AmoCharactor()
	: _PlayerSpeed(600.0f)
{
	PrimaryActorTick.bCanEverTick = false;


	_CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("_CapsuleComp"));
	SetRootComponent(_CapsuleComp);

	_SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("_SpringArm"));
	_SpringArmComp->SetupAttachment(RootComponent);
	_SpringArmComp->TargetArmLength = 300.0f;
	_SpringArmComp->bUsePawnControlRotation = false;

	_CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("_CameraComp"));
	_CameraComp->SetupAttachment(_SpringArmComp, USpringArmComponent::SocketName);
	_CameraComp->bUsePawnControlRotation = false;


}

void AmoCharactor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AmoCharactor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AmoCharactor::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* enhancedInputComp = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (AmoPlayerController* moPlayerController = Cast<AmoPlayerController>(GetController()))
		{
			if (moPlayerController->_MoveAction)
			{
				enhancedInputComp->BindAction(
					moPlayerController->_MoveAction,
					ETriggerEvent::Triggered,
					this,
					&AmoCharactor::Move
				);
			}

			if (moPlayerController->_LookAction)
			{
				enhancedInputComp->BindAction(
					moPlayerController->_LookAction,
					ETriggerEvent::Triggered,
					this,
					&AmoCharactor::Look
				);
			}
		}
	}

}

void AmoCharactor::Move(const FInputActionValue& _value)
{
	if (!Controller) return;

	FVector2D moveVector = _value.Get<FVector2D>();

	FVector moveDirection = (GetActorForwardVector() * moveVector.X + GetActorRightVector() * moveVector.Y).GetSafeNormal();

	FVector NewLocation = GetActorLocation() + (moveDirection * _PlayerSpeed * GetWorld()->GetDeltaSeconds());

	SetActorLocation(NewLocation, true);

}

void AmoCharactor::Look(const FInputActionValue& _value)
{
	FVector2D lookVector = _value.Get<FVector2D>();

	// 카메라 회전용 입력값 (Yaw: 좌우, Pitch: 상하)
	float DeltaYaw = lookVector.X ;
	float DeltaPitch = -lookVector.Y ;

	FRotator CurrentRotation = GetActorRotation();

	// 새로운 회전 값 계산
	FRotator NewRotation = FRotator(CurrentRotation.Pitch, CurrentRotation.Yaw + DeltaYaw, 0.0f);

	// 새로운 회전 값을 적용
	SetActorRotation(NewRotation);

	// SpringArm의 상하 회전 처리
	FRotator SpringArmRotation = _SpringArmComp->GetComponentRotation();
	SpringArmRotation.Pitch += DeltaPitch;
	_SpringArmComp->SetWorldRotation(SpringArmRotation);
}