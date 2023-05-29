// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MakeJsonl_for_GPT3/Public/MakeJsonl_for_GPT3BPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMakeJsonl_for_GPT3BPLibrary() {}
// Cross Module References
	MAKEJSONL_FOR_GPT3_API UClass* Z_Construct_UClass_UMakeJsonl_for_GPT3BPLibrary_NoRegister();
	MAKEJSONL_FOR_GPT3_API UClass* Z_Construct_UClass_UMakeJsonl_for_GPT3BPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MakeJsonl_for_GPT3();
// End Cross Module References
	DEFINE_FUNCTION(UMakeJsonl_for_GPT3BPLibrary::execWriteJsonlFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_TARRAY(FString,Z_Param_Prompts);
		P_GET_TARRAY(FString,Z_Param_Completions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMakeJsonl_for_GPT3BPLibrary::WriteJsonlFile(Z_Param_FilePath,Z_Param_FileName,Z_Param_Prompts,Z_Param_Completions);
		P_NATIVE_END;
	}
	void UMakeJsonl_for_GPT3BPLibrary::StaticRegisterNativesUMakeJsonl_for_GPT3BPLibrary()
	{
		UClass* Class = UMakeJsonl_for_GPT3BPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WriteJsonlFile", &UMakeJsonl_for_GPT3BPLibrary::execWriteJsonlFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics
	{
		struct MakeJsonl_for_GPT3BPLibrary_eventWriteJsonlFile_Parms
		{
			FString FilePath;
			FString FileName;
			TArray<FString> Prompts;
			TArray<FString> Completions;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prompts_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Prompts;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Completions_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Completions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MakeJsonl_for_GPT3BPLibrary_eventWriteJsonlFile_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MakeJsonl_for_GPT3BPLibrary_eventWriteJsonlFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::NewProp_Prompts_Inner = { "Prompts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::NewProp_Prompts = { "Prompts", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MakeJsonl_for_GPT3BPLibrary_eventWriteJsonlFile_Parms, Prompts), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::NewProp_Completions_Inner = { "Completions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::NewProp_Completions = { "Completions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MakeJsonl_for_GPT3BPLibrary_eventWriteJsonlFile_Parms, Completions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MakeJsonl_for_GPT3BPLibrary_eventWriteJsonlFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MakeJsonl_for_GPT3BPLibrary_eventWriteJsonlFile_Parms), &Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::NewProp_Prompts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::NewProp_Prompts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::NewProp_Completions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::NewProp_Completions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "DisplayName", "Write JSONL File" },
		{ "ModuleRelativePath", "Public/MakeJsonl_for_GPT3BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMakeJsonl_for_GPT3BPLibrary, nullptr, "WriteJsonlFile", nullptr, nullptr, sizeof(MakeJsonl_for_GPT3BPLibrary_eventWriteJsonlFile_Parms), Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMakeJsonl_for_GPT3BPLibrary_NoRegister()
	{
		return UMakeJsonl_for_GPT3BPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMakeJsonl_for_GPT3BPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMakeJsonl_for_GPT3BPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MakeJsonl_for_GPT3,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMakeJsonl_for_GPT3BPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMakeJsonl_for_GPT3BPLibrary_WriteJsonlFile, "WriteJsonlFile" }, // 383368619
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMakeJsonl_for_GPT3BPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MakeJsonl_for_GPT3BPLibrary.h" },
		{ "ModuleRelativePath", "Public/MakeJsonl_for_GPT3BPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMakeJsonl_for_GPT3BPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMakeJsonl_for_GPT3BPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMakeJsonl_for_GPT3BPLibrary_Statics::ClassParams = {
		&UMakeJsonl_for_GPT3BPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMakeJsonl_for_GPT3BPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMakeJsonl_for_GPT3BPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMakeJsonl_for_GPT3BPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMakeJsonl_for_GPT3BPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMakeJsonl_for_GPT3BPLibrary, 2029204324);
	template<> MAKEJSONL_FOR_GPT3_API UClass* StaticClass<UMakeJsonl_for_GPT3BPLibrary>()
	{
		return UMakeJsonl_for_GPT3BPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMakeJsonl_for_GPT3BPLibrary(Z_Construct_UClass_UMakeJsonl_for_GPT3BPLibrary, &UMakeJsonl_for_GPT3BPLibrary::StaticClass, TEXT("/Script/MakeJsonl_for_GPT3"), TEXT("UMakeJsonl_for_GPT3BPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMakeJsonl_for_GPT3BPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
