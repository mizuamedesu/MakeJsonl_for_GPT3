// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonSerializer.h"
#include "JsonUtilities.h"
#include "MakeJsonl_for_GPT3BPLibrary.generated.h"

UCLASS()
class UMakeJsonl_for_GPT3BPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (DisplayName = "Write JSONL File"))
		static bool WriteJsonlFile(FString FilePath, FString FileName, TArray<FString> Prompts, TArray<FString> Completions);
};

