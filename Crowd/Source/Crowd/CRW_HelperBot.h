// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CRW_HelperBot.generated.h"

/*
 * this is a helper class for general command and debugging information, implemented in bots
 */
UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class CROWD_API UCRW_HelperBot : public UActorComponent
{
	GENERATED_BODY()

public:
	UCRW_HelperBot();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintImplementableEvent)
	void ShowDebugInfo(bool bIsShow);
	UFUNCTION(BlueprintImplementableEvent)
	void ShowTargetPoint(bool bIsShow);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	AActor* GetCurrentTarget() const;
	UFUNCTION(BlueprintCallable)
	void SetCurrentTarget(AActor* newTarget);

	UFUNCTION(BlueprintImplementableEvent)
	void ChangeChaseStateCurrentTarget();

	void SetCommonInfo(const FText& Text, int32 INT32);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BitMask, BitMaskEnum = "EBotState"))
	int32 BotState;
	UPROPERTY(BlueprintReadOnly, Category = "Setting")
	FText Info;
	UPROPERTY(BlueprintReadOnly, Category = "Setting")
	int32 CurrentHelperIndex = -1;

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateCommonInfo();
	
private:	
	UPROPERTY()
	AActor* AICurrentTarget = nullptr;
};
