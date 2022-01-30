// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CRW_HelperBot.generated.h"


UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class CROWD_API UCRW_HelperBot : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCRW_HelperBot();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
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
	void StartChaseCurrentTarget();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BitMask, BitMaskEnum = "EBotState"))
	int32 BotState;
	
private:	
	UPROPERTY()
	AActor* AICurrentTarget = nullptr;
};
