// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Crowd/Interface/CRW_IBot.h"
#include "GameFramework/Pawn.h"
#include "CRW_AIPawn.generated.h"

UCLASS()
class CROWD_API ACRW_AIPawn : public APawn, public ICRW_IBot
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACRW_AIPawn();

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
