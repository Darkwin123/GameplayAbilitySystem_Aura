// Copyright (C) 2023 Generic Asian Name

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AuraPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

/**
 * 
 */
UCLASS()
class AURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AAuraPlayerController();

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

private:
	UPROPERTY(EditAnywhere, Category="input")
	TObjectPtr <UInputMappingContext> AuraContext;

	UPROPERTY(EditAnywhere, Category="input")
	TObjectPtr <UInputAction> MoveAction;

	// Create function to implement move logic
	void Move(const FInputActionValue& InputActionValue);
};
