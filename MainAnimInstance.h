// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MainAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class THEGAME_API UMainAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;

	UFUNCTION(BluePrintCallable, Category = AnimationProperties)
	void UpdateAnimationProperties();

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Movement)
	float MovementSpeed;
	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Movement)
	bool bIsInAir;

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Movement)
	class APawn* Pawn;

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Movement)
		class AMain* Main;



};
