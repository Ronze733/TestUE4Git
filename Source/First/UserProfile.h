// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <list>
#include "UserProfile.generated.h"

/**
 * UCLASS ��ũ�� �ɼ��� �� C++ Ŭ������
 * UE4 ������ ������ Blueprintalbe�� �����
 */
UCLASS(Blueprintable, BlueprintType)
class FIRST_API UUserProfile : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
		float Armor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
		float HpMax;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
		FString Name;
};
