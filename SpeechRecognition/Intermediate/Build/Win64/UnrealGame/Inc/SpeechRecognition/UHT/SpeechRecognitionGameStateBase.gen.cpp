// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Source/SpeechRecognition/Public/SpeechRecognitionGameStateBase.h"
#include "../../../Source/SpeechRecognition/Public/SpeechRecognition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechRecognitionGameStateBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	SPEECHRECOGNITION_API UClass* Z_Construct_UClass_ASpeechRecognitionGameStateBase();
	SPEECHRECOGNITION_API UClass* Z_Construct_UClass_ASpeechRecognitionGameStateBase_NoRegister();
	SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage();
	SPEECHRECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FRecognitionPhrase();
	UPackage* Z_Construct_UPackage__Script_SpeechRecognition();
// End Cross Module References
	static FName NAME_ASpeechRecognitionGameStateBase_K2_OnSpeechRecognitionSubsystemInitialized = FName(TEXT("K2_OnSpeechRecognitionSubsystemInitialized"));
	void ASpeechRecognitionGameStateBase::K2_OnSpeechRecognitionSubsystemInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASpeechRecognitionGameStateBase_K2_OnSpeechRecognitionSubsystemInitialized),NULL);
	}
	void ASpeechRecognitionGameStateBase::StaticRegisterNativesASpeechRecognitionGameStateBase()
	{
	}
	struct Z_Construct_UFunction_ASpeechRecognitionGameStateBase_K2_OnSpeechRecognitionSubsystemInitialized_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpeechRecognitionGameStateBase_K2_OnSpeechRecognitionSubsystemInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "DisplayName", "On Speech Recognition Subsystem Initialized" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionGameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpeechRecognitionGameStateBase_K2_OnSpeechRecognitionSubsystemInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpeechRecognitionGameStateBase, nullptr, "K2_OnSpeechRecognitionSubsystemInitialized", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpeechRecognitionGameStateBase_K2_OnSpeechRecognitionSubsystemInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpeechRecognitionGameStateBase_K2_OnSpeechRecognitionSubsystemInitialized_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASpeechRecognitionGameStateBase_K2_OnSpeechRecognitionSubsystemInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpeechRecognitionGameStateBase_K2_OnSpeechRecognitionSubsystemInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpeechRecognitionGameStateBase);
	UClass* Z_Construct_UClass_ASpeechRecognitionGameStateBase_NoRegister()
	{
		return ASpeechRecognitionGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Language_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Language;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalWorldList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalWorldList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OptionalWorldList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpeechRecognition,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpeechRecognitionGameStateBase_K2_OnSpeechRecognitionSubsystemInitialized, "K2_OnSpeechRecognitionSubsystemInitialized" }, // 212434059
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SpeechRecognitionGameStateBase.h" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::NewProp_Language_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::NewProp_Language_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionGameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpeechRecognitionGameStateBase, Language), Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::NewProp_Language_MetaData), Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::NewProp_Language_MetaData) }; // 3061105099
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::NewProp_OptionalWorldList_Inner = { "OptionalWorldList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRecognitionPhrase, METADATA_PARAMS(0, nullptr) }; // 3609057916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::NewProp_OptionalWorldList_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "Comment", "/** Optional phrases to recognize */" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionGameStateBase.h" },
		{ "ToolTip", "Optional phrases to recognize" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::NewProp_OptionalWorldList = { "OptionalWorldList", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpeechRecognitionGameStateBase, OptionalWorldList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::NewProp_OptionalWorldList_MetaData), Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::NewProp_OptionalWorldList_MetaData) }; // 3609057916
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::NewProp_Language_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::NewProp_Language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::NewProp_OptionalWorldList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::NewProp_OptionalWorldList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpeechRecognitionGameStateBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::ClassParams = {
		&ASpeechRecognitionGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASpeechRecognitionGameStateBase()
	{
		if (!Z_Registration_Info_UClass_ASpeechRecognitionGameStateBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpeechRecognitionGameStateBase.OuterSingleton, Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpeechRecognitionGameStateBase.OuterSingleton;
	}
	template<> SPEECHRECOGNITION_API UClass* StaticClass<ASpeechRecognitionGameStateBase>()
	{
		return ASpeechRecognitionGameStateBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpeechRecognitionGameStateBase);
	ASpeechRecognitionGameStateBase::~ASpeechRecognitionGameStateBase() {}
	struct Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionGameStateBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionGameStateBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpeechRecognitionGameStateBase, ASpeechRecognitionGameStateBase::StaticClass, TEXT("ASpeechRecognitionGameStateBase"), &Z_Registration_Info_UClass_ASpeechRecognitionGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpeechRecognitionGameStateBase), 1775480798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionGameStateBase_h_1255086511(TEXT("/Script/SpeechRecognition"),
		Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionGameStateBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
