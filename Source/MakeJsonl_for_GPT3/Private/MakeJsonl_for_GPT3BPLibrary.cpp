// Copyright Epic Games, Inc. All Rights Reserved.

#include "MakeJsonl_for_GPT3BPLibrary.h"
#include "Misc/FileHelper.h"

UMakeJsonl_for_GPT3BPLibrary::UMakeJsonl_for_GPT3BPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

bool UMakeJsonl_for_GPT3BPLibrary::WriteJsonlFile(FString FilePath, FString FileName, TArray<FString> Prompts, TArray<FString> Completions)
{
	if (Prompts.Num() != Completions.Num())
	{
		UE_LOG(LogTemp, Warning, TEXT("Prompts and Completions arrays do not have the same length."));
		return false;
	}

	FString ResultingText;

	for (int32 i = 0; i < Prompts.Num(); i++)
	{
		TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
		JsonObject->SetStringField(TEXT("prompt"), Prompts[i]);
		JsonObject->SetStringField(TEXT("completion"), Completions[i]);

		FString OutputString;
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
		if (FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer))
		{
			ResultingText += OutputString;
			ResultingText += TEXT("\n");
		}
	}

	return FFileHelper::SaveStringToFile(ResultingText, *(FilePath + "/" + FileName + ".jsonl"));
}
