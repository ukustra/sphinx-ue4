// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpeechRecognitionGameStateBase.h"
#include "SpeechRecognition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeSpeechRecognitionGameStateBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_SpeechRecognition(ETypeConstructPhase);
SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage(ETypeConstructPhase);
SPEECHRECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FRecognitionPhrase(ETypeConstructPhase);
SPEECHRECOGNITION_API UClass* Z_Construct_UClass_ASpeechRecognitionGameStateBase(ETypeConstructPhase);
SPEECHRECOGNITION_API UClass* Z_Construct_UClass_ASpeechRecognitionGameStateBase(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class ASpeechRecognitionGameStateBase Function K2_OnSpeechRecognitionSubsystemInitialized 
static FName NAME_ASpeechRecognitionGameStateBase_K2_OnSpeechRecognitionSubsystemInitialized = FName(TEXT("K2_OnSpeechRecognitionSubsystemInitialized"));
void ASpeechRecognitionGameStateBase::K2_OnSpeechRecognitionSubsystemInitialized()
{
	UFunction* Func = FindFunctionChecked(NAME_ASpeechRecognitionGameStateBase_K2_OnSpeechRecognitionSubsystemInitialized);
	ProcessEvent(Func,NULL);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ASpeechRecognitionGameStateBase_K2_OnSpeechRecognitionSubsystemInitialized_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "DisplayName", "On Speech Recognition Subsystem Initialized" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionGameStateBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function K2_OnSpeechRecognitionSubsystemInitialized constinit property declarations 
// ********** End Function K2_OnSpeechRecognitionSubsystemInitialized constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ASpeechRecognitionGameStateBase, nullptr, "K2_OnSpeechRecognitionSubsystemInitialized", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ASpeechRecognitionGameStateBase_K2_OnSpeechRecognitionSubsystemInitialized(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class ASpeechRecognitionGameStateBase Function K2_OnSpeechRecognitionSubsystemInitialized 

// ********** Begin Class ASpeechRecognitionGameStateBase ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ASpeechRecognitionGameStateBase_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SpeechRecognitionGameStateBase.h" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalWorldList_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "Comment", "/** Optional phrases to recognize */" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionGameStateBase.h" },
		{ "ToolTip", "Optional phrases to recognize" },
	};
#endif // WITH_METADATA

// ********** Begin Class ASpeechRecognitionGameStateBase constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Language_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Language;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalWorldList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OptionalWorldList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ASpeechRecognitionGameStateBase constinit property declarations ************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpeechRecognitionGameStateBase_K2_OnSpeechRecognitionSubsystemInitialized, "K2_OnSpeechRecognitionSubsystemInitialized" }, // 3f4ae27bd0812f5946c19b16162d6f956ccbb34b
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpeechRecognitionGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ASpeechRecognitionGameStateBase Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Language_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(ASpeechRecognitionGameStateBase, Language), Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) }; // d69090827cae42776776f8728ba4d737efe86ef8
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OptionalWorldList_Inner = { "OptionalWorldList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRecognitionPhrase, METADATA_PARAMS(0, nullptr) }; // ce86ec08e82d68c974f6c468f0bed806383bae35
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OptionalWorldList = { "OptionalWorldList", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ASpeechRecognitionGameStateBase, OptionalWorldList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalWorldList_MetaData), NewProp_OptionalWorldList_MetaData) }; // ce86ec08e82d68c974f6c468f0bed806383bae35
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Language_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OptionalWorldList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OptionalWorldList,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ASpeechRecognitionGameStateBase Property Definitions ***********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AGameStateBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_SpeechRecognition,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ASpeechRecognitionGameStateBase,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_ASpeechRecognitionGameStateBase;
UClass* Z_Construct_UClass_ASpeechRecognitionGameStateBase(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ASpeechRecognitionGameStateBase;
		if (!Z_Registration_Info_UClass_ASpeechRecognitionGameStateBase.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("SpeechRecognitionGameStateBase"),
				Z_Registration_Info_UClass_ASpeechRecognitionGameStateBase.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_ASpeechRecognitionGameStateBase.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ASpeechRecognitionGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpeechRecognitionGameStateBase.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpeechRecognitionGameStateBase.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASpeechRecognitionGameStateBase);
ASpeechRecognitionGameStateBase::~ASpeechRecognitionGameStateBase() {}
// ********** End Class ASpeechRecognitionGameStateBase ********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionGameStateBase_h__Script_SpeechRecognition_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpeechRecognitionGameStateBase, TEXT("ASpeechRecognitionGameStateBase"), &Z_Registration_Info_UClass_ASpeechRecognitionGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpeechRecognitionGameStateBase), 3339113023U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionGameStateBase_h__Script_SpeechRecognition_1054827423a2ab4dc8ea9de1784c79161894793c{
	TEXT("/Script/SpeechRecognition"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
