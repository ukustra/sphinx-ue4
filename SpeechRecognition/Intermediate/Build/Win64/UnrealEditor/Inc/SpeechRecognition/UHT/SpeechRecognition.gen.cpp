// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpeechRecognition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeSpeechRecognition() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_SpeechRecognition(ETypeConstructPhase);
SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance(ETypeConstructPhase);
SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage(ETypeConstructPhase);
SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode(ETypeConstructPhase);
SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType(ETypeConstructPhase);
SPEECHRECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FRecognisedPhrases(ETypeConstructPhase);
SPEECHRECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FRecognitionPhrase(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FRecognisedPhrases ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRecognisedPhrases_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRecognisedPhrases>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRecognisedPhrases); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Common structures and enumerations\n" },
		{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
		{ "ToolTip", "Common structures and enumerations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_phrases_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRecognisedPhrases constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_phrases_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_phrases;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRecognisedPhrases constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecognisedPhrases>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRecognisedPhrases Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_phrases_Inner = { "phrases", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_phrases = { "phrases", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FRecognisedPhrases, phrases), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_phrases_MetaData), NewProp_phrases_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_phrases_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_phrases,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRecognisedPhrases Property Definitions *****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_SpeechRecognition,
	nullptr,
	&NewStructOps,
	"RecognisedPhrases",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRecognisedPhrases>(),
	alignof(FRecognisedPhrases),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRecognisedPhrases;
UScriptStruct* Z_Construct_UScriptStruct_FRecognisedPhrases(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRecognisedPhrases.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRecognisedPhrases.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecognisedPhrases, (UObject*)Z_Construct_UPackage__Script_SpeechRecognition(ETypeConstructPhase::Outer), TEXT("RecognisedPhrases"));
		}
		return Z_Registration_Info_UScriptStruct_FRecognisedPhrases.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRecognisedPhrases.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRecognisedPhrases.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRecognisedPhrases.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRecognisedPhrases **************************************************

// ********** Begin Enum ESpeechRecognitionMode ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode_Statics
template<> SPEECHRECOGNITION_NON_ATTRIBUTED_API UEnum* StaticEnum<ESpeechRecognitionMode>()
{
	return Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
		{ "VE_GRAMMAR.DisplayName", "Grammar" },
		{ "VE_GRAMMAR.Name", "ESpeechRecognitionMode::VE_GRAMMAR" },
		{ "VE_KEYWORD.DisplayName", "Keyword Spotting" },
		{ "VE_KEYWORD.Name", "ESpeechRecognitionMode::VE_KEYWORD" },
		{ "VE_LANGUAGE_MODEL.DisplayName", "Language Model" },
		{ "VE_LANGUAGE_MODEL.Name", "ESpeechRecognitionMode::VE_LANGUAGE_MODEL" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpeechRecognitionMode::VE_KEYWORD", (int64)ESpeechRecognitionMode::VE_KEYWORD },
		{ "ESpeechRecognitionMode::VE_GRAMMAR", (int64)ESpeechRecognitionMode::VE_GRAMMAR },
		{ "ESpeechRecognitionMode::VE_LANGUAGE_MODEL", (int64)ESpeechRecognitionMode::VE_LANGUAGE_MODEL },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_SpeechRecognition,
	nullptr,
	"ESpeechRecognitionMode",
	"ESpeechRecognitionMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ESpeechRecognitionMode;
UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ESpeechRecognitionMode.OuterSingleton)
		{
			ZRIE_ESpeechRecognitionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode, (UObject*)Z_Construct_UPackage__Script_SpeechRecognition(ETypeConstructPhase::Outer), TEXT("ESpeechRecognitionMode"));
		}
		return ZRIE_ESpeechRecognitionMode.OuterSingleton;
	}
	if (!ZRIE_ESpeechRecognitionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ESpeechRecognitionMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ESpeechRecognitionMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ESpeechRecognitionMode ******************************************************

// ********** Begin Enum ESpeechRecognitionParamType ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType_Statics
template<> SPEECHRECOGNITION_NON_ATTRIBUTED_API UEnum* StaticEnum<ESpeechRecognitionParamType>()
{
	return Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
		{ "VE_BOOLEAN.DisplayName", "Boolean" },
		{ "VE_BOOLEAN.Name", "ESpeechRecognitionParamType::VE_BOOLEAN" },
		{ "VE_FLOAT.DisplayName", "Float" },
		{ "VE_FLOAT.Name", "ESpeechRecognitionParamType::VE_FLOAT" },
		{ "VE_INTEGER.DisplayName", "Integer" },
		{ "VE_INTEGER.Name", "ESpeechRecognitionParamType::VE_INTEGER" },
		{ "VE_STRING.DisplayName", "String" },
		{ "VE_STRING.Name", "ESpeechRecognitionParamType::VE_STRING" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpeechRecognitionParamType::VE_FLOAT", (int64)ESpeechRecognitionParamType::VE_FLOAT },
		{ "ESpeechRecognitionParamType::VE_BOOLEAN", (int64)ESpeechRecognitionParamType::VE_BOOLEAN },
		{ "ESpeechRecognitionParamType::VE_STRING", (int64)ESpeechRecognitionParamType::VE_STRING },
		{ "ESpeechRecognitionParamType::VE_INTEGER", (int64)ESpeechRecognitionParamType::VE_INTEGER },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_SpeechRecognition,
	nullptr,
	"ESpeechRecognitionParamType",
	"ESpeechRecognitionParamType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ESpeechRecognitionParamType;
UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ESpeechRecognitionParamType.OuterSingleton)
		{
			ZRIE_ESpeechRecognitionParamType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType, (UObject*)Z_Construct_UPackage__Script_SpeechRecognition(ETypeConstructPhase::Outer), TEXT("ESpeechRecognitionParamType"));
		}
		return ZRIE_ESpeechRecognitionParamType.OuterSingleton;
	}
	if (!ZRIE_ESpeechRecognitionParamType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ESpeechRecognitionParamType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ESpeechRecognitionParamType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ESpeechRecognitionParamType *************************************************

// ********** Begin Enum ESpeechRecognitionLanguage ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage_Statics
template<> SPEECHRECOGNITION_NON_ATTRIBUTED_API UEnum* StaticEnum<ESpeechRecognitionLanguage>()
{
	return Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
		{ "VE_Chinese.DisplayName", "Chinese" },
		{ "VE_Chinese.Name", "ESpeechRecognitionLanguage::VE_Chinese" },
		{ "VE_English.DisplayName", "English" },
		{ "VE_English.Name", "ESpeechRecognitionLanguage::VE_English" },
		{ "VE_French.DisplayName", "French" },
		{ "VE_French.Name", "ESpeechRecognitionLanguage::VE_French" },
		{ "VE_Russian.DisplayName", "Russian" },
		{ "VE_Russian.Name", "ESpeechRecognitionLanguage::VE_Russian" },
		{ "VE_Spanish.DisplayName", "Spanish" },
		{ "VE_Spanish.Name", "ESpeechRecognitionLanguage::VE_Spanish" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpeechRecognitionLanguage::VE_English", (int64)ESpeechRecognitionLanguage::VE_English },
		{ "ESpeechRecognitionLanguage::VE_Chinese", (int64)ESpeechRecognitionLanguage::VE_Chinese },
		{ "ESpeechRecognitionLanguage::VE_French", (int64)ESpeechRecognitionLanguage::VE_French },
		{ "ESpeechRecognitionLanguage::VE_Spanish", (int64)ESpeechRecognitionLanguage::VE_Spanish },
		{ "ESpeechRecognitionLanguage::VE_Russian", (int64)ESpeechRecognitionLanguage::VE_Russian },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_SpeechRecognition,
	nullptr,
	"ESpeechRecognitionLanguage",
	"ESpeechRecognitionLanguage",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ESpeechRecognitionLanguage;
UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ESpeechRecognitionLanguage.OuterSingleton)
		{
			ZRIE_ESpeechRecognitionLanguage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage, (UObject*)Z_Construct_UPackage__Script_SpeechRecognition(ETypeConstructPhase::Outer), TEXT("ESpeechRecognitionLanguage"));
		}
		return ZRIE_ESpeechRecognitionLanguage.OuterSingleton;
	}
	if (!ZRIE_ESpeechRecognitionLanguage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ESpeechRecognitionLanguage.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ESpeechRecognitionLanguage.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ESpeechRecognitionLanguage **************************************************

// ********** Begin Enum EPhraseRecognitionTolerance ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance_Statics
template<> SPEECHRECOGNITION_NON_ATTRIBUTED_API UEnum* StaticEnum<EPhraseRecognitionTolerance>()
{
	return Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
		{ "VE_1.DisplayName", "V1" },
		{ "VE_1.Name", "EPhraseRecognitionTolerance::VE_1" },
		{ "VE_10.DisplayName", "V10" },
		{ "VE_10.Name", "EPhraseRecognitionTolerance::VE_10" },
		{ "VE_2.DisplayName", "V2" },
		{ "VE_2.Name", "EPhraseRecognitionTolerance::VE_2" },
		{ "VE_3.DisplayName", "V3" },
		{ "VE_3.Name", "EPhraseRecognitionTolerance::VE_3" },
		{ "VE_4.DisplayName", "V4" },
		{ "VE_4.Name", "EPhraseRecognitionTolerance::VE_4" },
		{ "VE_5.DisplayName", "V5" },
		{ "VE_5.Name", "EPhraseRecognitionTolerance::VE_5" },
		{ "VE_6.DisplayName", "V6" },
		{ "VE_6.Name", "EPhraseRecognitionTolerance::VE_6" },
		{ "VE_7.DisplayName", "V7" },
		{ "VE_7.Name", "EPhraseRecognitionTolerance::VE_7" },
		{ "VE_8.DisplayName", "V8" },
		{ "VE_8.Name", "EPhraseRecognitionTolerance::VE_8" },
		{ "VE_9.DisplayName", "V9" },
		{ "VE_9.Name", "EPhraseRecognitionTolerance::VE_9" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPhraseRecognitionTolerance::VE_1", (int64)EPhraseRecognitionTolerance::VE_1 },
		{ "EPhraseRecognitionTolerance::VE_2", (int64)EPhraseRecognitionTolerance::VE_2 },
		{ "EPhraseRecognitionTolerance::VE_3", (int64)EPhraseRecognitionTolerance::VE_3 },
		{ "EPhraseRecognitionTolerance::VE_4", (int64)EPhraseRecognitionTolerance::VE_4 },
		{ "EPhraseRecognitionTolerance::VE_5", (int64)EPhraseRecognitionTolerance::VE_5 },
		{ "EPhraseRecognitionTolerance::VE_6", (int64)EPhraseRecognitionTolerance::VE_6 },
		{ "EPhraseRecognitionTolerance::VE_7", (int64)EPhraseRecognitionTolerance::VE_7 },
		{ "EPhraseRecognitionTolerance::VE_8", (int64)EPhraseRecognitionTolerance::VE_8 },
		{ "EPhraseRecognitionTolerance::VE_9", (int64)EPhraseRecognitionTolerance::VE_9 },
		{ "EPhraseRecognitionTolerance::VE_10", (int64)EPhraseRecognitionTolerance::VE_10 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_SpeechRecognition,
	nullptr,
	"EPhraseRecognitionTolerance",
	"EPhraseRecognitionTolerance",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EPhraseRecognitionTolerance;
UEnum* Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EPhraseRecognitionTolerance.OuterSingleton)
		{
			ZRIE_EPhraseRecognitionTolerance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance, (UObject*)Z_Construct_UPackage__Script_SpeechRecognition(ETypeConstructPhase::Outer), TEXT("EPhraseRecognitionTolerance"));
		}
		return ZRIE_EPhraseRecognitionTolerance.OuterSingleton;
	}
	if (!ZRIE_EPhraseRecognitionTolerance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EPhraseRecognitionTolerance.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EPhraseRecognitionTolerance.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EPhraseRecognitionTolerance *************************************************

// ********** Begin ScriptStruct FRecognitionPhrase ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRecognitionPhrase_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRecognitionPhrase>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRecognitionPhrase); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_phrase_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tolerance_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRecognitionPhrase constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_phrase;
	static const UECodeGen_Private::FBytePropertyParams NewProp_tolerance_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_tolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRecognitionPhrase constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecognitionPhrase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRecognitionPhrase Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_phrase = { "phrase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FRecognitionPhrase, phrase), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_phrase_MetaData), NewProp_phrase_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_tolerance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_tolerance = { "tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FRecognitionPhrase, tolerance), Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tolerance_MetaData), NewProp_tolerance_MetaData) }; // d01eb6fc3e6b9668f6119b0bf4ec8c3e370fa7bc
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_phrase,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_tolerance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_tolerance,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRecognitionPhrase Property Definitions *****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_SpeechRecognition,
	nullptr,
	&NewStructOps,
	"RecognitionPhrase",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRecognitionPhrase>(),
	alignof(FRecognitionPhrase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRecognitionPhrase;
UScriptStruct* Z_Construct_UScriptStruct_FRecognitionPhrase(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRecognitionPhrase.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRecognitionPhrase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecognitionPhrase, (UObject*)Z_Construct_UPackage__Script_SpeechRecognition(ETypeConstructPhase::Outer), TEXT("RecognitionPhrase"));
		}
		return Z_Registration_Info_UScriptStruct_FRecognitionPhrase.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRecognitionPhrase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRecognitionPhrase.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRecognitionPhrase.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRecognitionPhrase **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognition_h__Script_SpeechRecognition_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode, TEXT("ESpeechRecognitionMode"), &ZRIE_ESpeechRecognitionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4053705737U) },
		{ Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType, TEXT("ESpeechRecognitionParamType"), &ZRIE_ESpeechRecognitionParamType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4123295370U) },
		{ Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage, TEXT("ESpeechRecognitionLanguage"), &ZRIE_ESpeechRecognitionLanguage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3599798402U) },
		{ Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance, TEXT("EPhraseRecognitionTolerance"), &ZRIE_EPhraseRecognitionTolerance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3491673852U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FRecognisedPhrases, Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::NewStructOps, TEXT("RecognisedPhrases"),&Z_Registration_Info_UScriptStruct_FRecognisedPhrases, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecognisedPhrases), 3379256770U) },
		{ Z_Construct_UScriptStruct_FRecognitionPhrase, Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::NewStructOps, TEXT("RecognitionPhrase"),&Z_Registration_Info_UScriptStruct_FRecognitionPhrase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecognitionPhrase), 3464948744U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognition_h__Script_SpeechRecognition_c8c4e1e4f1e3bc3e4268b2c104e9edc546dadf73{
	TEXT("/Script/SpeechRecognition"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
