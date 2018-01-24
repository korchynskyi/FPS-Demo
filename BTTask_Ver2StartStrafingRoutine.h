// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_Ver2StartStrafingRoutine.generated.h"

/**
 * 
 */
UCLASS()
class FPS_PROJECT_API UBTTask_Ver2StartStrafingRoutine : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
		virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
	
};