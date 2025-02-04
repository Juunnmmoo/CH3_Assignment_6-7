
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "moCharactor.generated.h"

class UCapsuleComponent;
class USpringArmComponent;
class UCameraComponent;

struct FInputActionValue;

UCLASS()
class CH3_WEEK1_1_API AmoCharactor : public APawn
{
	GENERATED_BODY()

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCapsuleComponent* _CapsuleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent*	_SpringArmComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCameraComponent*		_CameraComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	float _PlayerSpeed;

public:
	AmoCharactor();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void Move(const FInputActionValue& _value);
	UFUNCTION()

	void Look(const FInputActionValue& _value);

};
