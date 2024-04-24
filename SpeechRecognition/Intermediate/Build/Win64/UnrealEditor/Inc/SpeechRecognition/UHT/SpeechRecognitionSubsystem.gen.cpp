// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpeechRecognition/Public/SpeechRecognitionSubsystem.h"
#include "SpeechRecognition/Public/SpeechRecognition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechRecognitionSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
SPEECHRECOGNITION_API UClass* Z_Construct_UClass_USpeechRecognitionSubsystem();
SPEECHRECOGNITION_API UClass* Z_Construct_UClass_USpeechRecognitionSubsystem_NoRegister();
SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage();
SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType();
SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature();
SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature();
SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature();
SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature();
SPEECHRECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FRecognisedPhrases();
SPEECHRECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FRecognitionPhrase();
UPackage* Z_Construct_UPackage__Script_SpeechRecognition();
// End Cross Module References

// Begin Delegate FStartedSpeakingSignature
struct Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition, nullptr, "StartedSpeakingSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FStartedSpeakingSignature_DelegateWrapper(const FMulticastScriptDelegate& StartedSpeakingSignature)
{
	StartedSpeakingSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FStartedSpeakingSignature

// Begin Delegate FStoppedSpeakingSignature
struct Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition, nullptr, "StoppedSpeakingSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FStoppedSpeakingSignature_DelegateWrapper(const FMulticastScriptDelegate& StoppedSpeakingSignature)
{
	StoppedSpeakingSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FStoppedSpeakingSignature

// Begin Delegate FWordsSpokenSignature
struct Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics
{
	struct _Script_SpeechRecognition_eventWordsSpokenSignature_Parms
	{
		FRecognisedPhrases Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SpeechRecognition_eventWordsSpokenSignature_Parms, Text), Z_Construct_UScriptStruct_FRecognisedPhrases, METADATA_PARAMS(0, nullptr) }; // 3752346138
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition, nullptr, "WordsSpokenSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::_Script_SpeechRecognition_eventWordsSpokenSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::_Script_SpeechRecognition_eventWordsSpokenSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWordsSpokenSignature_DelegateWrapper(const FMulticastScriptDelegate& WordsSpokenSignature, FRecognisedPhrases Text)
{
	struct _Script_SpeechRecognition_eventWordsSpokenSignature_Parms
	{
		FRecognisedPhrases Text;
	};
	_Script_SpeechRecognition_eventWordsSpokenSignature_Parms Parms;
	Parms.Text=Text;
	WordsSpokenSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWordsSpokenSignature

// Begin Delegate FUnknownPhraseSignature
struct Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition, nullptr, "UnknownPhraseSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FUnknownPhraseSignature_DelegateWrapper(const FMulticastScriptDelegate& UnknownPhraseSignature)
{
	UnknownPhraseSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FUnknownPhraseSignature

// Begin Class USpeechRecognitionSubsystem Function EnableGrammarMode
struct Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics
{
	struct SpeechRecognitionSubsystem_eventEnableGrammarMode_Parms
	{
		FString grammarName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "DisplayName", "Enable Grammar Mode" },
		{ "Keywords", "Speech Recognition Mode" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_grammarName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::NewProp_grammarName = { "grammarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventEnableGrammarMode_Parms, grammarName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognitionSubsystem_eventEnableGrammarMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognitionSubsystem_eventEnableGrammarMode_Parms), &Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::NewProp_grammarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "EnableGrammarMode", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::SpeechRecognitionSubsystem_eventEnableGrammarMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::SpeechRecognitionSubsystem_eventEnableGrammarMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognitionSubsystem::execEnableGrammarMode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_grammarName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EnableGrammarMode(Z_Param_grammarName);
	P_NATIVE_END;
}
// End Class USpeechRecognitionSubsystem Function EnableGrammarMode

// Begin Class USpeechRecognitionSubsystem Function EnableKeywordMode
struct Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics
{
	struct SpeechRecognitionSubsystem_eventEnableKeywordMode_Parms
	{
		TArray<FRecognitionPhrase> wordList;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_wordList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_wordList;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::NewProp_wordList_Inner = { "wordList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRecognitionPhrase, METADATA_PARAMS(0, nullptr) }; // 2584790491
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::NewProp_wordList = { "wordList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventEnableKeywordMode_Parms, wordList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wordList_MetaData), NewProp_wordList_MetaData) }; // 2584790491
void Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognitionSubsystem_eventEnableKeywordMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognitionSubsystem_eventEnableKeywordMode_Parms), &Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::NewProp_wordList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::NewProp_wordList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "EnableKeywordMode", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::SpeechRecognitionSubsystem_eventEnableKeywordMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::SpeechRecognitionSubsystem_eventEnableKeywordMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognitionSubsystem::execEnableKeywordMode)
{
	P_GET_TARRAY_REF(FRecognitionPhrase,Z_Param_Out_wordList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EnableKeywordMode(Z_Param_Out_wordList);
	P_NATIVE_END;
}
// End Class USpeechRecognitionSubsystem Function EnableKeywordMode

// Begin Class USpeechRecognitionSubsystem Function EnableLanguageModel
struct Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics
{
	struct SpeechRecognitionSubsystem_eventEnableLanguageModel_Parms
	{
		FString languageModel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "DisplayName", "Enable Language Model Mode" },
		{ "Keywords", "Speech Recognition Mode" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_languageModel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::NewProp_languageModel = { "languageModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventEnableLanguageModel_Parms, languageModel), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognitionSubsystem_eventEnableLanguageModel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognitionSubsystem_eventEnableLanguageModel_Parms), &Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::NewProp_languageModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "EnableLanguageModel", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::SpeechRecognitionSubsystem_eventEnableLanguageModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::SpeechRecognitionSubsystem_eventEnableLanguageModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognitionSubsystem::execEnableLanguageModel)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_languageModel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EnableLanguageModel(Z_Param_languageModel);
	P_NATIVE_END;
}
// End Class USpeechRecognitionSubsystem Function EnableLanguageModel

// Begin Class USpeechRecognitionSubsystem Function GetCurrentVolume
struct Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics
{
	struct SpeechRecognitionSubsystem_eventGetCurrentVolume_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "Comment", "// Basic functions \n" },
		{ "DisplayName", "GetCurrentVolume" },
		{ "Keywords", "Speech Recognition Volume" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
		{ "ToolTip", "Basic functions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventGetCurrentVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "GetCurrentVolume", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::SpeechRecognitionSubsystem_eventGetCurrentVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::SpeechRecognitionSubsystem_eventGetCurrentVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognitionSubsystem::execGetCurrentVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentVolume();
	P_NATIVE_END;
}
// End Class USpeechRecognitionSubsystem Function GetCurrentVolume

// Begin Class USpeechRecognitionSubsystem Function Init
struct Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics
{
	struct SpeechRecognitionSubsystem_eventInit_Parms
	{
		ESpeechRecognitionLanguage Language;
		bool bInitDefaultConfigParams;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "CPP_Default_bInitDefaultConfigParams", "true" },
		{ "DisplayName", "Init" },
		{ "Keywords", "Speech Recognition Init" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Language_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Language;
	static void NewProp_bInitDefaultConfigParams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitDefaultConfigParams;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::NewProp_Language_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventInit_Parms, Language), Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage, METADATA_PARAMS(0, nullptr) }; // 1599921248
void Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::NewProp_bInitDefaultConfigParams_SetBit(void* Obj)
{
	((SpeechRecognitionSubsystem_eventInit_Parms*)Obj)->bInitDefaultConfigParams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::NewProp_bInitDefaultConfigParams = { "bInitDefaultConfigParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognitionSubsystem_eventInit_Parms), &Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::NewProp_bInitDefaultConfigParams_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognitionSubsystem_eventInit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognitionSubsystem_eventInit_Parms), &Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::NewProp_Language_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::NewProp_bInitDefaultConfigParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::SpeechRecognitionSubsystem_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::SpeechRecognitionSubsystem_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognitionSubsystem::execInit)
{
	P_GET_ENUM(ESpeechRecognitionLanguage,Z_Param_Language);
	P_GET_UBOOL(Z_Param_bInitDefaultConfigParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Init(ESpeechRecognitionLanguage(Z_Param_Language),Z_Param_bInitDefaultConfigParams);
	P_NATIVE_END;
}
// End Class USpeechRecognitionSubsystem Function Init

// Begin Class USpeechRecognitionSubsystem Function SetConfigParam
struct Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics
{
	struct SpeechRecognitionSubsystem_eventSetConfigParam_Parms
	{
		FString param;
		ESpeechRecognitionParamType type;
		FString value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "DisplayName", "SetConfigParam" },
		{ "Keywords", "Speech Recognition Set Config Param" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_param;
	static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::NewProp_param = { "param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventSetConfigParam_Parms, param), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventSetConfigParam_Parms, type), Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType, METADATA_PARAMS(0, nullptr) }; // 3686854189
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventSetConfigParam_Parms, value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognitionSubsystem_eventSetConfigParam_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognitionSubsystem_eventSetConfigParam_Parms), &Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::NewProp_param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::NewProp_type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::NewProp_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "SetConfigParam", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::SpeechRecognitionSubsystem_eventSetConfigParam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::SpeechRecognitionSubsystem_eventSetConfigParam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// End Class USpeechRecognitionSubsystem Function SetConfigParam

// Begin Class USpeechRecognitionSubsystem Function Shutdown
struct Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics
{
	struct SpeechRecognitionSubsystem_eventShutdown_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "DisplayName", "Shutdown" },
		{ "Keywords", "Speech Recognition Shutdown" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognitionSubsystem_eventShutdown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognitionSubsystem_eventShutdown_Parms), &Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "Shutdown", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::SpeechRecognitionSubsystem_eventShutdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::SpeechRecognitionSubsystem_eventShutdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognitionSubsystem::execShutdown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Shutdown();
	P_NATIVE_END;
}
// End Class USpeechRecognitionSubsystem Function Shutdown

// Begin Class USpeechRecognitionSubsystem Function StartedSpeaking_method
struct Z_Construct_UFunction_USpeechRecognitionSubsystem_StartedSpeaking_method_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionSubsystem_StartedSpeaking_method_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "StartedSpeaking_method", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_StartedSpeaking_method_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognitionSubsystem_StartedSpeaking_method_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_StartedSpeaking_method()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognitionSubsystem_StartedSpeaking_method_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognitionSubsystem::execStartedSpeaking_method)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartedSpeaking_method();
	P_NATIVE_END;
}
// End Class USpeechRecognitionSubsystem Function StartedSpeaking_method

// Begin Class USpeechRecognitionSubsystem Function StoppedSpeaking_method
struct Z_Construct_UFunction_USpeechRecognitionSubsystem_StoppedSpeaking_method_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionSubsystem_StoppedSpeaking_method_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "StoppedSpeaking_method", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_StoppedSpeaking_method_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognitionSubsystem_StoppedSpeaking_method_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_StoppedSpeaking_method()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognitionSubsystem_StoppedSpeaking_method_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognitionSubsystem::execStoppedSpeaking_method)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StoppedSpeaking_method();
	P_NATIVE_END;
}
// End Class USpeechRecognitionSubsystem Function StoppedSpeaking_method

// Begin Class USpeechRecognitionSubsystem Function UnknownPhrase_method
struct Z_Construct_UFunction_USpeechRecognitionSubsystem_UnknownPhrase_method_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionSubsystem_UnknownPhrase_method_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "UnknownPhrase_method", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_UnknownPhrase_method_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognitionSubsystem_UnknownPhrase_method_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_UnknownPhrase_method()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognitionSubsystem_UnknownPhrase_method_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognitionSubsystem::execUnknownPhrase_method)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnknownPhrase_method();
	P_NATIVE_END;
}
// End Class USpeechRecognitionSubsystem Function UnknownPhrase_method

// Begin Class USpeechRecognitionSubsystem Function WordsSpoken_method
struct Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics
{
	struct SpeechRecognitionSubsystem_eventWordsSpoken_method_Parms
	{
		FRecognisedPhrases phrases;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Callback events\n" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
		{ "ToolTip", "Callback events" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_phrases;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::NewProp_phrases = { "phrases", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventWordsSpoken_method_Parms, phrases), Z_Construct_UScriptStruct_FRecognisedPhrases, METADATA_PARAMS(0, nullptr) }; // 3752346138
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::NewProp_phrases,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "WordsSpoken_method", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::SpeechRecognitionSubsystem_eventWordsSpoken_method_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::SpeechRecognitionSubsystem_eventWordsSpoken_method_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognitionSubsystem::execWordsSpoken_method)
{
	P_GET_STRUCT(FRecognisedPhrases,Z_Param_phrases);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WordsSpoken_method(Z_Param_phrases);
	P_NATIVE_END;
}
// End Class USpeechRecognitionSubsystem Function WordsSpoken_method

// Begin Class USpeechRecognitionSubsystem
void USpeechRecognitionSubsystem::StaticRegisterNativesUSpeechRecognitionSubsystem()
{
	UClass* Class = USpeechRecognitionSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnableGrammarMode", &USpeechRecognitionSubsystem::execEnableGrammarMode },
		{ "EnableKeywordMode", &USpeechRecognitionSubsystem::execEnableKeywordMode },
		{ "EnableLanguageModel", &USpeechRecognitionSubsystem::execEnableLanguageModel },
		{ "GetCurrentVolume", &USpeechRecognitionSubsystem::execGetCurrentVolume },
		{ "Init", &USpeechRecognitionSubsystem::execInit },
		{ "SetConfigParam", &USpeechRecognitionSubsystem::execSetConfigParam },
		{ "Shutdown", &USpeechRecognitionSubsystem::execShutdown },
		{ "StartedSpeaking_method", &USpeechRecognitionSubsystem::execStartedSpeaking_method },
		{ "StoppedSpeaking_method", &USpeechRecognitionSubsystem::execStoppedSpeaking_method },
		{ "UnknownPhrase_method", &USpeechRecognitionSubsystem::execUnknownPhrase_method },
		{ "WordsSpoken_method", &USpeechRecognitionSubsystem::execWordsSpoken_method },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpeechRecognitionSubsystem);
UClass* Z_Construct_UClass_USpeechRecognitionSubsystem_NoRegister()
{
	return USpeechRecognitionSubsystem::StaticClass();
}
struct Z_Construct_UClass_USpeechRecognitionSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
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
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWordsSpoken;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnknownPhrase;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartedSpeaking;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStoppedSpeaking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode, "EnableGrammarMode" }, // 2547358300
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode, "EnableKeywordMode" }, // 1125334730
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel, "EnableLanguageModel" }, // 699508587
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume, "GetCurrentVolume" }, // 3137867292
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_Init, "Init" }, // 39901620
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam, "SetConfigParam" }, // 1255430175
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown, "Shutdown" }, // 177418561
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_StartedSpeaking_method, "StartedSpeaking_method" }, // 3706853265
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_StoppedSpeaking_method, "StoppedSpeaking_method" }, // 538917194
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_UnknownPhrase_method, "UnknownPhrase_method" }, // 1504436575
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method, "WordsSpoken_method" }, // 2995273770
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpeechRecognitionSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnWordsSpoken = { "OnWordsSpoken", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpeechRecognitionSubsystem, OnWordsSpoken), Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWordsSpoken_MetaData), NewProp_OnWordsSpoken_MetaData) }; // 2063304777
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnUnknownPhrase = { "OnUnknownPhrase", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpeechRecognitionSubsystem, OnUnknownPhrase), Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUnknownPhrase_MetaData), NewProp_OnUnknownPhrase_MetaData) }; // 3863231347
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnStartedSpeaking = { "OnStartedSpeaking", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpeechRecognitionSubsystem, OnStartedSpeaking), Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartedSpeaking_MetaData), NewProp_OnStartedSpeaking_MetaData) }; // 3259436362
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnStoppedSpeaking = { "OnStoppedSpeaking", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpeechRecognitionSubsystem, OnStoppedSpeaking), Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStoppedSpeaking_MetaData), NewProp_OnStoppedSpeaking_MetaData) }; // 3604679963
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnWordsSpoken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnUnknownPhrase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnStartedSpeaking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnStoppedSpeaking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SpeechRecognition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::ClassParams = {
	&USpeechRecognitionSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpeechRecognitionSubsystem()
{
	if (!Z_Registration_Info_UClass_USpeechRecognitionSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpeechRecognitionSubsystem.OuterSingleton, Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpeechRecognitionSubsystem.OuterSingleton;
}
template<> SPEECHRECOGNITION_API UClass* StaticClass<USpeechRecognitionSubsystem>()
{
	return USpeechRecognitionSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpeechRecognitionSubsystem);
USpeechRecognitionSubsystem::~USpeechRecognitionSubsystem() {}
// End Class USpeechRecognitionSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpeechRecognitionSubsystem, USpeechRecognitionSubsystem::StaticClass, TEXT("USpeechRecognitionSubsystem"), &Z_Registration_Info_UClass_USpeechRecognitionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpeechRecognitionSubsystem), 4216477329U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h_1369943497(TEXT("/Script/SpeechRecognition"),
	Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
