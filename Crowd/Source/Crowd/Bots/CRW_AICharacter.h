// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Crowd/Interface/CRW_IBot.h"
#include "GameFramework/Character.h"
#include "CRW_AICharacter.generated.h"

UCLASS()
class CROWD_API ACRW_AICharacter : public ACharacter, public ICRW_IBot
{
	GENERATED_BODY()

public:
	// ObjectInitializer need for change class of skeletal mesh for budge allocator
	ACRW_AICharacter(const FObjectInitializer &ObjectInitializer);

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Bots interface Start
	AActor* GetOwnerForInterface() override;

	void IncrementHelperIndex() override;
	void ResetHelperIndex() override;
	int32 GetHelperIndex() override;
	//Bots interface End

private:
	static int32 s_HelperIndex_AICharacter;
};
