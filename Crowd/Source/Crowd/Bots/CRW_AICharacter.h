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
	// Sets default values for this character's properties
	ACRW_AICharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Bots interface Start
	virtual AActor* GetOwnerForInterface() override;
	//Bots interface End
};
