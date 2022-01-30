// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Crowd/Interface/CRW_IBot.h"
#include "GameFramework/Actor.h"
//#include "Crowd/Interface/CRW_IBot.h"
#include "CRW_AIActor.generated.h"

UCLASS()
class CROWD_API ACRW_AIActor : public AActor, public ICRW_IBot
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACRW_AIActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	//Bots interface Start
	virtual AActor* GetOwnerForInterface() override;
	//Bots interface End
};

