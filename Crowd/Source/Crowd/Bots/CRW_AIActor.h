// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Crowd/Interface/CRW_IBot.h"
#include "GameFramework/Actor.h"
#include "CRW_AIActor.generated.h"

UCLASS()
class CROWD_API ACRW_AIActor : public AActor, public ICRW_IBot
{
	GENERATED_BODY()

public:
	ACRW_AIActor();

protected:
	virtual void BeginPlay() override;
	
public:
	virtual void Tick(float DeltaTime) override;
	
	//Bots interface Start
	AActor* GetOwnerForInterface() override;

	void IncrementHelperIndex() override;
	void ResetHelperIndex() override;
	int32 GetHelperIndex() override;
	//Bots interface End
private:
	static int32 s_HelperIndex_AIActor;
};

