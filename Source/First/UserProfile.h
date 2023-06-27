// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <list>
#include "UserProfile.generated.h"

/**
 * UCLASS 매크로 옵션은 이 C++ 클래스를
 * UE4 편집기 내에서 Blueprintalbe로 만든다
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
