// Fill out your copyright notice in the Description page of Project Settings.

#include "FirstGameModeBase.h"


void AFirstGameModeBase::BeginPlay() {
	Super::BeginPlay();

	// 기본적인 UE_LOG 메시지
	UE_LOG(LogTemp, Warning, TEXT("Some Warning message"));

	// 인자를 포함하는 UE_LOG 메시지
	int intVar = 5;
	float floatVar = 3.7f;
	FString fstringVar = "an fstring variable";
	UE_LOG(LogTemp, Warning, TEXT("Text, %d %f %s"), intVar, floatVar, *fstringVar);

	// EX
	FString name = "Tim";
	int32 mana = 450;
	
	FString string = FString::Printf(TEXT("Name = %s Mana = %d"), *name, mana);

	TArray<FStringFormatArg> args;
	args.Add(FStringFormatArg(name));
	args.Add(FStringFormatArg(mana));
	FString string2 = FString::Format(TEXT("Name = {0} Mana = {1}"), args);

	UE_LOG(LogTemp, Warning, TEXT("Your string: %s"), *string);
	UE_LOG(LogTemp, Warning, TEXT("Your string: %s"), *string2);
}
