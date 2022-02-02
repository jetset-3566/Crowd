// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CRW_CommonLibrary.h"
#include "GameFramework/Actor.h"
#include "CRW_SpawnPoint.generated.h"

UCLASS()
class CROWD_API ACRW_SpawnPoint : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACRW_SpawnPoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Setting | Bots")
	FSpawnSetting SpawnSetting;
	UPROPERTY(BlueprintReadOnly, Category = "Setting | Bots")
	int32 CurrentHelperIndex = 0;
};
