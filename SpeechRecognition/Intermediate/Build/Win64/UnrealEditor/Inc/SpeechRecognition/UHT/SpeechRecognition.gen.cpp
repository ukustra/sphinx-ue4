// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpeechRecognition/Public/SpeechRecognition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechRecognition() {}

// Begin Cross Module References
SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance();
SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage();
SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode();
SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType();
SPEECHRECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FRecognisedPhrases();
SPEECHRECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FRecognitionPhrase();
UPackage* Z_Construct_UPackage__Script_SpeechRecognition();
// End Cross Module References

// Begin ScriptStruct FRecognisedPhrases
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RecognisedPhrases;
class UScriptStruct* FRecognisedPhrases::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RecognisedPhrases.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RecognisedPhrases.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecognisedPhrases, (UObject*)Z_Construct_UPackage__Script_SpeechRecognition(), TEXT("RecognisedPhrases"));
	}
	return Z_Registration_Info_UScriptStruct_RecognisedPhrases.OuterSingleton;
}
template<> SPEECHRECOGNITION_API UScriptStruct* StaticStruct<FRecognisedPhrases>()
{
	return FRecognisedPhrases::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRecognisedPhrases_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_phrases_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_phrases;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecognisedPhrases>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::NewProp_phrases_Inner = { "phrases", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::NewProp_phrases = { "phrases", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecognisedPhrases, phrases), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_phrases_MetaData), NewProp_phrases_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::NewProp_phrases_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::NewProp_phrases,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SpeechRecognition,
	nullptr,
	&NewStructOps,
	"RecognisedPhrases",
	Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::PropPointers),
	sizeof(FRecognisedPhrases),
	alignof(FRecognisedPhrases),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecognisedPhrases()
{
	if (!Z_Registration_Info_UScriptStruct_RecognisedPhrases.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RecognisedPhrases.InnerSingleton, Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RecognisedPhrases.InnerSingleton;
}
// End ScriptStruct FRecognisedPhrases

// Begin Enum ESpeechRecognitionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpeechRecognitionMode;
static UEnum* ESpeechRecognitionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpeechRecognitionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpeechRecognitionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode, (UObject*)Z_Construct_UPackage__Script_SpeechRecognition(), TEXT("ESpeechRecognitionMode"));
	}
	return Z_Registration_Info_UEnum_ESpeechRecognitionMode.OuterSingleton;
}
template<> SPEECHRECOGNITION_API UEnum* StaticEnum<ESpeechRecognitionMode>()
{
	return ESpeechRecognitionMode_StaticEnum();
}
struct Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition,
	nullptr,
	"ESpeechRecognitionMode",
	"ESpeechRecognitionMode",
	Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode()
{
	if (!Z_Registration_Info_UEnum_ESpeechRecognitionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpeechRecognitionMode.InnerSingleton, Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpeechRecognitionMode.InnerSingleton;
}
// End Enum ESpeechRecognitionMode

// Begin Enum ESpeechRecognitionParamType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpeechRecognitionParamType;
static UEnum* ESpeechRecognitionParamType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpeechRecognitionParamType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpeechRecognitionParamType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType, (UObject*)Z_Construct_UPackage__Script_SpeechRecognition(), TEXT("ESpeechRecognitionParamType"));
	}
	return Z_Registration_Info_UEnum_ESpeechRecognitionParamType.OuterSingleton;
}
template<> SPEECHRECOGNITION_API UEnum* StaticEnum<ESpeechRecognitionParamType>()
{
	return ESpeechRecognitionParamType_StaticEnum();
}
struct Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition,
	nullptr,
	"ESpeechRecognitionParamType",
	"ESpeechRecognitionParamType",
	Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType()
{
	if (!Z_Registration_Info_UEnum_ESpeechRecognitionParamType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpeechRecognitionParamType.InnerSingleton, Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpeechRecognitionParamType.InnerSingleton;
}
// End Enum ESpeechRecognitionParamType

// Begin Enum ESpeechRecognitionLanguage
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpeechRecognitionLanguage;
static UEnum* ESpeechRecognitionLanguage_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpeechRecognitionLanguage.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpeechRecognitionLanguage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage, (UObject*)Z_Construct_UPackage__Script_SpeechRecognition(), TEXT("ESpeechRecognitionLanguage"));
	}
	return Z_Registration_Info_UEnum_ESpeechRecognitionLanguage.OuterSingleton;
}
template<> SPEECHRECOGNITION_API UEnum* StaticEnum<ESpeechRecognitionLanguage>()
{
	return ESpeechRecognitionLanguage_StaticEnum();
}
struct Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition,
	nullptr,
	"ESpeechRecognitionLanguage",
	"ESpeechRecognitionLanguage",
	Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage()
{
	if (!Z_Registration_Info_UEnum_ESpeechRecognitionLanguage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpeechRecognitionLanguage.InnerSingleton, Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpeechRecognitionLanguage.InnerSingleton;
}
// End Enum ESpeechRecognitionLanguage

// Begin Enum EPhraseRecognitionTolerance
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhraseRecognitionTolerance;
static UEnum* EPhraseRecognitionTolerance_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPhraseRecognitionTolerance.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPhraseRecognitionTolerance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance, (UObject*)Z_Construct_UPackage__Script_SpeechRecognition(), TEXT("EPhraseRecognitionTolerance"));
	}
	return Z_Registration_Info_UEnum_EPhraseRecognitionTolerance.OuterSingleton;
}
template<> SPEECHRECOGNITION_API UEnum* StaticEnum<EPhraseRecognitionTolerance>()
{
	return EPhraseRecognitionTolerance_StaticEnum();
}
struct Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition,
	nullptr,
	"EPhraseRecognitionTolerance",
	"EPhraseRecognitionTolerance",
	Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance()
{
	if (!Z_Registration_Info_UEnum_EPhraseRecognitionTolerance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhraseRecognitionTolerance.InnerSingleton, Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPhraseRecognitionTolerance.InnerSingleton;
}
// End Enum EPhraseRecognitionTolerance

// Begin ScriptStruct FRecognitionPhrase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RecognitionPhrase;
class UScriptStruct* FRecognitionPhrase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RecognitionPhrase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RecognitionPhrase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecognitionPhrase, (UObject*)Z_Construct_UPackage__Script_SpeechRecognition(), TEXT("RecognitionPhrase"));
	}
	return Z_Registration_Info_UScriptStruct_RecognitionPhrase.OuterSingleton;
}
template<> SPEECHRECOGNITION_API UScriptStruct* StaticStruct<FRecognitionPhrase>()
{
	return FRecognitionPhrase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRecognitionPhrase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_phrase;
	static const UECodeGen_Private::FBytePropertyParams NewProp_tolerance_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_tolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecognitionPhrase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::NewProp_phrase = { "phrase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecognitionPhrase, phrase), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_phrase_MetaData), NewProp_phrase_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::NewProp_tolerance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::NewProp_tolerance = { "tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecognitionPhrase, tolerance), Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tolerance_MetaData), NewProp_tolerance_MetaData) }; // 3521483791
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::NewProp_phrase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::NewProp_tolerance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::NewProp_tolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SpeechRecognition,
	nullptr,
	&NewStructOps,
	"RecognitionPhrase",
	Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::PropPointers),
	sizeof(FRecognitionPhrase),
	alignof(FRecognitionPhrase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecognitionPhrase()
{
	if (!Z_Registration_Info_UScriptStruct_RecognitionPhrase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RecognitionPhrase.InnerSingleton, Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RecognitionPhrase.InnerSingleton;
}
// End ScriptStruct FRecognitionPhrase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognition_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESpeechRecognitionMode_StaticEnum, TEXT("ESpeechRecognitionMode"), &Z_Registration_Info_UEnum_ESpeechRecognitionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1113661939U) },
		{ ESpeechRecognitionParamType_StaticEnum, TEXT("ESpeechRecognitionParamType"), &Z_Registration_Info_UEnum_ESpeechRecognitionParamType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3686854189U) },
		{ ESpeechRecognitionLanguage_StaticEnum, TEXT("ESpeechRecognitionLanguage"), &Z_Registration_Info_UEnum_ESpeechRecognitionLanguage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1599921248U) },
		{ EPhraseRecognitionTolerance_StaticEnum, TEXT("EPhraseRecognitionTolerance"), &Z_Registration_Info_UEnum_EPhraseRecognitionTolerance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3521483791U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRecognisedPhrases::StaticStruct, Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::NewStructOps, TEXT("RecognisedPhrases"), &Z_Registration_Info_UScriptStruct_RecognisedPhrases, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecognisedPhrases), 3752346138U) },
		{ FRecognitionPhrase::StaticStruct, Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::NewStructOps, TEXT("RecognitionPhrase"), &Z_Registration_Info_UScriptStruct_RecognitionPhrase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecognitionPhrase), 2584790491U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognition_h_1992705920(TEXT("/Script/SpeechRecognition"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognition_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognition_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
