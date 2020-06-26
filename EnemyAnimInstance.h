// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EnemyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class THEGAME_API UEnemyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
		virtual void NativeInitializeAnimation() override;

	UFUNCTION(BluePrintCallable, Category = AnimationProperties)
		void UpdateAnimationProperties();

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Movement)
		float MovementSpeed;

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Movement)
		class APawn* Pawn;

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Movement)
		class AEnemy* Enemy;
};
