// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpeechRecognitionSubsystem.h"
#include "SpeechRecognition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeSpeechRecognitionSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_SpeechRecognition(ETypeConstructPhase);
SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage(ETypeConstructPhase);
SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType(ETypeConstructPhase);
SPEECHRECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FRecognisedPhrases(ETypeConstructPhase);
SPEECHRECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FRecognitionPhrase(ETypeConstructPhase);
SPEECHRECOGNITION_API UClass* Z_Construct_UClass_USpeechRecognitionSubsystem(ETypeConstructPhase);
SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature(ETypeConstructPhase);
SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature(ETypeConstructPhase);
SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature(ETypeConstructPhase);
SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature(ETypeConstructPhase);
SPEECHRECOGNITION_API UClass* Z_Construct_UClass_USpeechRecognitionSubsystem(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FStartedSpeakingSignature *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FStartedSpeakingSignature constinit property declarations *************
// ********** End Delegate FStartedSpeakingSignature constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_SpeechRecognition, nullptr, "StartedSpeakingSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FStartedSpeakingSignature ***********************************************

// ********** Begin Delegate FStoppedSpeakingSignature *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FStoppedSpeakingSignature constinit property declarations *************
// ********** End Delegate FStoppedSpeakingSignature constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_SpeechRecognition, nullptr, "StoppedSpeakingSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FStoppedSpeakingSignature ***********************************************

// ********** Begin Delegate FWordsSpokenSignature *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_SpeechRecognition_eventWordsSpokenSignature_Parms
	{
		FRecognisedPhrases Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FWordsSpokenSignature constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FWordsSpokenSignature constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FWordsSpokenSignature Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SpeechRecognition_eventWordsSpokenSignature_Parms, Text), Z_Construct_UScriptStruct_FRecognisedPhrases, METADATA_PARAMS(0, nullptr) }; // c96b5dc27b544a618d4bec9ce97bb106eeb8c49a
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FWordsSpokenSignature Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_SpeechRecognition, nullptr, "WordsSpokenSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_SpeechRecognition_eventWordsSpokenSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_SpeechRecognition_eventWordsSpokenSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FWordsSpokenSignature ***************************************************

// ********** Begin Delegate FUnknownPhraseSignature ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FUnknownPhraseSignature constinit property declarations ***************
// ********** End Delegate FUnknownPhraseSignature constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_SpeechRecognition, nullptr, "UnknownPhraseSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FUnknownPhraseSignature *************************************************

// ********** Begin Class USpeechRecognitionSubsystem Function EnableGrammarMode *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics
struct UHT_STATICS
{
	struct SpeechRecognitionSubsystem_eventEnableGrammarMode_Parms
	{
		FString grammarName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "DisplayName", "Enable Grammar Mode" },
		{ "Keywords", "Speech Recognition Mode" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableGrammarMode constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_grammarName;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpeechRecognitionSubsystem_eventEnableGrammarMode_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnableGrammarMode constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnableGrammarMode Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_grammarName = { "grammarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventEnableGrammarMode_Parms, grammarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognitionSubsystem_eventEnableGrammarMode_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_grammarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EnableGrammarMode Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "EnableGrammarMode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SpeechRecognitionSubsystem_eventEnableGrammarMode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SpeechRecognitionSubsystem_eventEnableGrammarMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USpeechRecognitionSubsystem::execEnableGrammarMode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_grammarName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EnableGrammarMode(Z_Param_grammarName);
	P_NATIVE_END;
}
// ********** End Class USpeechRecognitionSubsystem Function EnableGrammarMode *********************

// ********** Begin Class USpeechRecognitionSubsystem Function EnableKeywordMode *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics
struct UHT_STATICS
{
	struct SpeechRecognitionSubsystem_eventEnableKeywordMode_Parms
	{
		TArray<FRecognitionPhrase> wordList;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "Comment", "//Methods to switch recognition modes\n" },
		{ "DisplayName", "Enable Keyword Mode" },
		{ "Keywords", "Speech Recognition Mode" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
		{ "ToolTip", "Methods to switch recognition modes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_wordList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableKeywordMode constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_wordList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_wordList;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpeechRecognitionSubsystem_eventEnableKeywordMode_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnableKeywordMode constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnableKeywordMode Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_wordList_Inner = { "wordList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRecognitionPhrase, METADATA_PARAMS(0, nullptr) }; // ce86ec08e82d68c974f6c468f0bed806383bae35
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_wordList = { "wordList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventEnableKeywordMode_Parms, wordList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wordList_MetaData), NewProp_wordList_MetaData) }; // ce86ec08e82d68c974f6c468f0bed806383bae35
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognitionSubsystem_eventEnableKeywordMode_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_wordList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_wordList,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EnableKeywordMode Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "EnableKeywordMode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SpeechRecognitionSubsystem_eventEnableKeywordMode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SpeechRecognitionSubsystem_eventEnableKeywordMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USpeechRecognitionSubsystem::execEnableKeywordMode)
{
	P_GET_TARRAY_REF(FRecognitionPhrase,Z_Param_Out_wordList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EnableKeywordMode(Z_Param_Out_wordList);
	P_NATIVE_END;
}
// ********** End Class USpeechRecognitionSubsystem Function EnableKeywordMode *********************

// ********** Begin Class USpeechRecognitionSubsystem Function EnableLanguageModel *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics
struct UHT_STATICS
{
	struct SpeechRecognitionSubsystem_eventEnableLanguageModel_Parms
	{
		FString languageModel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "DisplayName", "Enable Language Model Mode" },
		{ "Keywords", "Speech Recognition Mode" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableLanguageModel constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_languageModel;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpeechRecognitionSubsystem_eventEnableLanguageModel_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnableLanguageModel constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnableLanguageModel Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_languageModel = { "languageModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventEnableLanguageModel_Parms, languageModel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognitionSubsystem_eventEnableLanguageModel_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_languageModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EnableLanguageModel Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "EnableLanguageModel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SpeechRecognitionSubsystem_eventEnableLanguageModel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SpeechRecognitionSubsystem_eventEnableLanguageModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USpeechRecognitionSubsystem::execEnableLanguageModel)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_languageModel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EnableLanguageModel(Z_Param_languageModel);
	P_NATIVE_END;
}
// ********** End Class USpeechRecognitionSubsystem Function EnableLanguageModel *******************

// ********** Begin Class USpeechRecognitionSubsystem Function GetCurrentVolume ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics
struct UHT_STATICS
{
	struct SpeechRecognitionSubsystem_eventGetCurrentVolume_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "Comment", "// Basic functions \n" },
		{ "DisplayName", "GetCurrentVolume" },
		{ "Keywords", "Speech Recognition Volume" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
		{ "ToolTip", "Basic functions" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentVolume constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentVolume constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentVolume Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventGetCurrentVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurrentVolume Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "GetCurrentVolume", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SpeechRecognitionSubsystem_eventGetCurrentVolume_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SpeechRecognitionSubsystem_eventGetCurrentVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USpeechRecognitionSubsystem::execGetCurrentVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentVolume();
	P_NATIVE_END;
}
// ********** End Class USpeechRecognitionSubsystem Function GetCurrentVolume **********************

// ********** Begin Class USpeechRecognitionSubsystem Function Init ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics
struct UHT_STATICS
{
	struct SpeechRecognitionSubsystem_eventInit_Parms
	{
		ESpeechRecognitionLanguage Language;
		bool bInitDefaultConfigParams;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "CPP_Default_bInitDefaultConfigParams", "true" },
		{ "DisplayName", "Init" },
		{ "Keywords", "Speech Recognition Init" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Init constinit property declarations **********************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Language_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Language;
	static void NewProp_bInitDefaultConfigParams_SetBit(void* Obj)
	{
		((SpeechRecognitionSubsystem_eventInit_Parms*)Obj)->bInitDefaultConfigParams = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitDefaultConfigParams;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpeechRecognitionSubsystem_eventInit_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Init constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Init Property Definitions *********************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Language_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventInit_Parms, Language), Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage, METADATA_PARAMS(0, nullptr) }; // d69090827cae42776776f8728ba4d737efe86ef8
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInitDefaultConfigParams = { "bInitDefaultConfigParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognitionSubsystem_eventInit_Parms), &UHT_STATICS::NewProp_bInitDefaultConfigParams_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognitionSubsystem_eventInit_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Language_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInitDefaultConfigParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function Init Property Definitions ***********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "Init", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SpeechRecognitionSubsystem_eventInit_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SpeechRecognitionSubsystem_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_Init(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USpeechRecognitionSubsystem::execInit)
{
	P_GET_ENUM(ESpeechRecognitionLanguage,Z_Param_Language);
	P_GET_UBOOL(Z_Param_bInitDefaultConfigParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Init(ESpeechRecognitionLanguage(Z_Param_Language),Z_Param_bInitDefaultConfigParams);
	P_NATIVE_END;
}
// ********** End Class USpeechRecognitionSubsystem Function Init **********************************

// ********** Begin Class USpeechRecognitionSubsystem Function SetConfigParam **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics
struct UHT_STATICS
{
	struct SpeechRecognitionSubsystem_eventSetConfigParam_Parms
	{
		FString param;
		ESpeechRecognitionParamType type;
		FString value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "DisplayName", "SetConfigParam" },
		{ "Keywords", "Speech Recognition Set Config Param" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetConfigParam constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_param;
	static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpeechRecognitionSubsystem_eventSetConfigParam_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetConfigParam constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetConfigParam Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_param = { "param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventSetConfigParam_Parms, param), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventSetConfigParam_Parms, type), Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType, METADATA_PARAMS(0, nullptr) }; // f5c47e8a045738e3516c76faa915e16eaa341a7d
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventSetConfigParam_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognitionSubsystem_eventSetConfigParam_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_param,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetConfigParam Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "SetConfigParam", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SpeechRecognitionSubsystem_eventSetConfigParam_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SpeechRecognitionSubsystem_eventSetConfigParam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USpeechRecognitionSubsystem::execSetConfigParam)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_param);
	P_GET_ENUM(ESpeechRecognitionParamType,Z_Param_type);
	P_GET_PROPERTY(FStrProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetConfigParam(Z_Param_param,ESpeechRecognitionParamType(Z_Param_type),Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class USpeechRecognitionSubsystem Function SetConfigParam ************************

// ********** Begin Class USpeechRecognitionSubsystem Function Shutdown ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics
struct UHT_STATICS
{
	struct SpeechRecognitionSubsystem_eventShutdown_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "DisplayName", "Shutdown" },
		{ "Keywords", "Speech Recognition Shutdown" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Shutdown constinit property declarations ******************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpeechRecognitionSubsystem_eventShutdown_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Shutdown constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Shutdown Property Definitions *****************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognitionSubsystem_eventShutdown_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function Shutdown Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "Shutdown", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SpeechRecognitionSubsystem_eventShutdown_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SpeechRecognitionSubsystem_eventShutdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USpeechRecognitionSubsystem::execShutdown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Shutdown();
	P_NATIVE_END;
}
// ********** End Class USpeechRecognitionSubsystem Function Shutdown ******************************

// ********** Begin Class USpeechRecognitionSubsystem Function StartedSpeaking_method **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USpeechRecognitionSubsystem_StartedSpeaking_method_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartedSpeaking_method constinit property declarations ****************
// ********** End Function StartedSpeaking_method constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "StartedSpeaking_method", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_StartedSpeaking_method(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USpeechRecognitionSubsystem::execStartedSpeaking_method)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartedSpeaking_method();
	P_NATIVE_END;
}
// ********** End Class USpeechRecognitionSubsystem Function StartedSpeaking_method ****************

// ********** Begin Class USpeechRecognitionSubsystem Function StoppedSpeaking_method **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USpeechRecognitionSubsystem_StoppedSpeaking_method_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StoppedSpeaking_method constinit property declarations ****************
// ********** End Function StoppedSpeaking_method constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "StoppedSpeaking_method", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_StoppedSpeaking_method(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USpeechRecognitionSubsystem::execStoppedSpeaking_method)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StoppedSpeaking_method();
	P_NATIVE_END;
}
// ********** End Class USpeechRecognitionSubsystem Function StoppedSpeaking_method ****************

// ********** Begin Class USpeechRecognitionSubsystem Function UnknownPhrase_method ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USpeechRecognitionSubsystem_UnknownPhrase_method_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UnknownPhrase_method constinit property declarations ******************
// ********** End Function UnknownPhrase_method constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "UnknownPhrase_method", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_UnknownPhrase_method(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USpeechRecognitionSubsystem::execUnknownPhrase_method)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnknownPhrase_method();
	P_NATIVE_END;
}
// ********** End Class USpeechRecognitionSubsystem Function UnknownPhrase_method ******************

// ********** Begin Class USpeechRecognitionSubsystem Function WordsSpoken_method ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics
struct UHT_STATICS
{
	struct SpeechRecognitionSubsystem_eventWordsSpoken_method_Parms
	{
		FRecognisedPhrases phrases;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Callback events\n" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
		{ "ToolTip", "Callback events" },
	};
#endif // WITH_METADATA

// ********** Begin Function WordsSpoken_method constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_phrases;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WordsSpoken_method constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WordsSpoken_method Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_phrases = { "phrases", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventWordsSpoken_method_Parms, phrases), Z_Construct_UScriptStruct_FRecognisedPhrases, METADATA_PARAMS(0, nullptr) }; // c96b5dc27b544a618d4bec9ce97bb106eeb8c49a
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_phrases,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function WordsSpoken_method Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "WordsSpoken_method", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SpeechRecognitionSubsystem_eventWordsSpoken_method_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SpeechRecognitionSubsystem_eventWordsSpoken_method_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USpeechRecognitionSubsystem::execWordsSpoken_method)
{
	P_GET_STRUCT(FRecognisedPhrases,Z_Param_phrases);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WordsSpoken_method(Z_Param_phrases);
	P_NATIVE_END;
}
// ********** End Class USpeechRecognitionSubsystem Function WordsSpoken_method ********************

// ********** Begin Class USpeechRecognitionSubsystem **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_USpeechRecognitionSubsystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SpeechRecognitionSubsystem.h" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWordsSpoken_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUnknownPhrase_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStartedSpeaking_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStoppedSpeaking_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USpeechRecognitionSubsystem constinit property declarations **************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWordsSpoken;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnknownPhrase;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartedSpeaking;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStoppedSpeaking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USpeechRecognitionSubsystem constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EnableGrammarMode"), .Pointer = &USpeechRecognitionSubsystem::execEnableGrammarMode },
		{ .NameUTF8 = UTF8TEXT("EnableKeywordMode"), .Pointer = &USpeechRecognitionSubsystem::execEnableKeywordMode },
		{ .NameUTF8 = UTF8TEXT("EnableLanguageModel"), .Pointer = &USpeechRecognitionSubsystem::execEnableLanguageModel },
		{ .NameUTF8 = UTF8TEXT("GetCurrentVolume"), .Pointer = &USpeechRecognitionSubsystem::execGetCurrentVolume },
		{ .NameUTF8 = UTF8TEXT("Init"), .Pointer = &USpeechRecognitionSubsystem::execInit },
		{ .NameUTF8 = UTF8TEXT("SetConfigParam"), .Pointer = &USpeechRecognitionSubsystem::execSetConfigParam },
		{ .NameUTF8 = UTF8TEXT("Shutdown"), .Pointer = &USpeechRecognitionSubsystem::execShutdown },
		{ .NameUTF8 = UTF8TEXT("StartedSpeaking_method"), .Pointer = &USpeechRecognitionSubsystem::execStartedSpeaking_method },
		{ .NameUTF8 = UTF8TEXT("StoppedSpeaking_method"), .Pointer = &USpeechRecognitionSubsystem::execStoppedSpeaking_method },
		{ .NameUTF8 = UTF8TEXT("UnknownPhrase_method"), .Pointer = &USpeechRecognitionSubsystem::execUnknownPhrase_method },
		{ .NameUTF8 = UTF8TEXT("WordsSpoken_method"), .Pointer = &USpeechRecognitionSubsystem::execWordsSpoken_method },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode, "EnableGrammarMode" }, // ed23fa41f117e07fe24ca3057db53c4e19caf28a
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode, "EnableKeywordMode" }, // f8e79234bd25be59c13d298a937a1027f7f282b4
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel, "EnableLanguageModel" }, // b502a22e600c74e0c985a1862a4f4bc361abb824
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume, "GetCurrentVolume" }, // 7e66438e48c645f047e7ca21233f59dc340b96bb
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_Init, "Init" }, // f187d8e65d3d2c81f4f225e7938fc1c2e0bb52f2
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam, "SetConfigParam" }, // 6e8d1b80ff64d85c3a3ce009c4f95f46d08c7924
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown, "Shutdown" }, // b7d9dadd04c76c5a4a254989adbac7e4ed4f2413
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_StartedSpeaking_method, "StartedSpeaking_method" }, // da4c749d65618ab2d726da16e79e0eb944680967
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_StoppedSpeaking_method, "StoppedSpeaking_method" }, // d5d07552c4eef5daa46f2747ad63907088286f09
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_UnknownPhrase_method, "UnknownPhrase_method" }, // 842099815b8f77825723017d5fa4641969904438
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method, "WordsSpoken_method" }, // 95533ef5d2d99504a9d8fd1b3851616138ee38d7
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpeechRecognitionSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class USpeechRecognitionSubsystem Property Definitions *************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnWordsSpoken = { "OnWordsSpoken", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(USpeechRecognitionSubsystem, OnWordsSpoken), Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWordsSpoken_MetaData), NewProp_OnWordsSpoken_MetaData) }; // 691372bcd39fc71d9b55e3a61d58b135ce4e94eb
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnUnknownPhrase = { "OnUnknownPhrase", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(USpeechRecognitionSubsystem, OnUnknownPhrase), Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUnknownPhrase_MetaData), NewProp_OnUnknownPhrase_MetaData) }; // d6dd1723bd4fcd057665a9ad218eeb7e1b36dfb3
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnStartedSpeaking = { "OnStartedSpeaking", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(USpeechRecognitionSubsystem, OnStartedSpeaking), Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartedSpeaking_MetaData), NewProp_OnStartedSpeaking_MetaData) }; // 3cdddbabea285352cda0f9b7861c4d8f7e3282d7
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnStoppedSpeaking = { "OnStoppedSpeaking", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(USpeechRecognitionSubsystem, OnStoppedSpeaking), Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStoppedSpeaking_MetaData), NewProp_OnStoppedSpeaking_MetaData) }; // 865318ce3b79f2b547c95c0e3f800e3ccf3782a7
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnWordsSpoken,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnUnknownPhrase,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnStartedSpeaking,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnStoppedSpeaking,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class USpeechRecognitionSubsystem Property Definitions ***************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_SpeechRecognition,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_USpeechRecognitionSubsystem,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void USpeechRecognitionSubsystem_StaticRegisterNativesUSpeechRecognitionSubsystem()
{
	UClass* Class = USpeechRecognitionSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USpeechRecognitionSubsystem;
UClass* Z_Construct_UClass_USpeechRecognitionSubsystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = USpeechRecognitionSubsystem;
		if (!Z_Registration_Info_UClass_USpeechRecognitionSubsystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("SpeechRecognitionSubsystem"),
				Z_Registration_Info_UClass_USpeechRecognitionSubsystem.InnerSingleton,
				USpeechRecognitionSubsystem_StaticRegisterNativesUSpeechRecognitionSubsystem,
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
		return Z_Registration_Info_UClass_USpeechRecognitionSubsystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_USpeechRecognitionSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpeechRecognitionSubsystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_USpeechRecognitionSubsystem.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USpeechRecognitionSubsystem);
USpeechRecognitionSubsystem::~USpeechRecognitionSubsystem() {}
// ********** End Class USpeechRecognitionSubsystem ************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h__Script_SpeechRecognition_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpeechRecognitionSubsystem, TEXT("USpeechRecognitionSubsystem"), &Z_Registration_Info_UClass_USpeechRecognitionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpeechRecognitionSubsystem), 2252920963U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h__Script_SpeechRecognition_e77eb3679b4fd3c7e5ccdc24d18642ee43bee6db{
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
