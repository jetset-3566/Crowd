// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CRW_AICharacter.h"
#include "GameFramework/Character.h"
#include "CRW_AICharacter_BA.generated.h"

UCLASS()
class CROWD_API ACRW_AICharacter_BA : public ACRW_AICharacter
{
	GENERATED_BODY()

public:
	ACRW_AICharacter_BA(const FObjectInitializer& ObjectInitializer);

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
