// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CRW_CommonLibrary.h"
#include "GameFramework/Actor.h"
#include "CRW_SpawnPoint.generated.h"

/*
 *this is a class for performing the functions of spawn
 *groups of bots with its own unique index which is taken
 *from the static variable of the main classes of bots
 */
UCLASS()
class CROWD_API ACRW_SpawnPoint : public AActor
{
	GENERATED_BODY()

public:
	ACRW_SpawnPoint();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
public:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Setting | Bots")
	FSpawnSetting SpawnSetting;
	UPROPERTY(BlueprintReadOnly, Category = "Setting | Bots")
	int32 CurrentHelperIndex = 0;
};
