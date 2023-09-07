// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Source/SpeechRecognition/Public/SpeechRecognitionSubsystem.h"
#include "../../../Source/SpeechRecognition/Public/SpeechRecognition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechRecognitionSubsystem() {}
// Cross Module References
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
	struct Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif
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
	struct Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif
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
	struct Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics
	{
		struct _Script_SpeechRecognition_eventWordsSpokenSignature_Parms
		{
			FRecognisedPhrases Text;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SpeechRecognition_eventWordsSpokenSignature_Parms, Text), Z_Construct_UScriptStruct_FRecognisedPhrases, METADATA_PARAMS(0, nullptr) }; // 160928621
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition, nullptr, "WordsSpokenSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::_Script_SpeechRecognition_eventWordsSpokenSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif
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
	DEFINE_FUNCTION(USpeechRecognitionSubsystem::execStoppedSpeaking_method)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StoppedSpeaking_method();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechRecognitionSubsystem::execStartedSpeaking_method)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartedSpeaking_method();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechRecognitionSubsystem::execUnknownPhrase_method)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnknownPhrase_method();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechRecognitionSubsystem::execWordsSpoken_method)
	{
		P_GET_STRUCT(FRecognisedPhrases,Z_Param_phrases);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WordsSpoken_method(Z_Param_phrases);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechRecognitionSubsystem::execShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Shutdown();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USpeechRecognitionSubsystem::execInit)
	{
		P_GET_ENUM(ESpeechRecognitionLanguage,Z_Param_Language);
		P_GET_UBOOL(Z_Param_bInitDefaultConfigParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Init(ESpeechRecognitionLanguage(Z_Param_Language),Z_Param_bInitDefaultConfigParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechRecognitionSubsystem::execGetCurrentVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechRecognitionSubsystem::execEnableLanguageModel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_languageModel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EnableLanguageModel(Z_Param_languageModel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechRecognitionSubsystem::execEnableGrammarMode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_grammarName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EnableGrammarMode(Z_Param_grammarName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechRecognitionSubsystem::execEnableKeywordMode)
	{
		P_GET_TARRAY_REF(FRecognitionPhrase,Z_Param_Out_wordList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EnableKeywordMode(Z_Param_Out_wordList);
		P_NATIVE_END;
	}
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
	struct Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics
	{
		struct SpeechRecognitionSubsystem_eventEnableGrammarMode_Parms
		{
			FString grammarName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_grammarName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "DisplayName", "Enable Grammar Mode" },
		{ "Keywords", "Speech Recognition Mode" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "EnableGrammarMode", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::SpeechRecognitionSubsystem_eventEnableGrammarMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics
	{
		struct SpeechRecognitionSubsystem_eventEnableKeywordMode_Parms
		{
			TArray<FRecognitionPhrase> wordList;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_wordList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wordList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_wordList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::NewProp_wordList_Inner = { "wordList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRecognitionPhrase, METADATA_PARAMS(0, nullptr) }; // 3609057916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::NewProp_wordList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::NewProp_wordList = { "wordList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventEnableKeywordMode_Parms, wordList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::NewProp_wordList_MetaData), Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::NewProp_wordList_MetaData) }; // 3609057916
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "Comment", "//Methods to switch recognition modes\n" },
		{ "DisplayName", "Enable Keyword Mode" },
		{ "Keywords", "Speech Recognition Mode" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
		{ "ToolTip", "Methods to switch recognition modes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "EnableKeywordMode", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::SpeechRecognitionSubsystem_eventEnableKeywordMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics
	{
		struct SpeechRecognitionSubsystem_eventEnableLanguageModel_Parms
		{
			FString languageModel;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_languageModel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "DisplayName", "Enable Language Model Mode" },
		{ "Keywords", "Speech Recognition Mode" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "EnableLanguageModel", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::SpeechRecognitionSubsystem_eventEnableLanguageModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics
	{
		struct SpeechRecognitionSubsystem_eventGetCurrentVolume_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventGetCurrentVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "Comment", "// Basic functions \n" },
		{ "DisplayName", "GetCurrentVolume" },
		{ "Keywords", "Speech Recognition Volume" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
		{ "ToolTip", "Basic functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "GetCurrentVolume", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::SpeechRecognitionSubsystem_eventGetCurrentVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics
	{
		struct SpeechRecognitionSubsystem_eventInit_Parms
		{
			ESpeechRecognitionLanguage Language;
			bool bInitDefaultConfigParams;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Language_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Language;
		static void NewProp_bInitDefaultConfigParams_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitDefaultConfigParams;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::NewProp_Language_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventInit_Parms, Language), Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage, METADATA_PARAMS(0, nullptr) }; // 3061105099
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "CPP_Default_bInitDefaultConfigParams", "true" },
		{ "DisplayName", "Init" },
		{ "Keywords", "Speech Recognition Init" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::SpeechRecognitionSubsystem_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_Init_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics
	{
		struct SpeechRecognitionSubsystem_eventSetConfigParam_Parms
		{
			FString param;
			ESpeechRecognitionParamType type;
			FString value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_param;
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UECodeGen_Private::FStrPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::NewProp_param = { "param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventSetConfigParam_Parms, param), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventSetConfigParam_Parms, type), Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType, METADATA_PARAMS(0, nullptr) }; // 2730658182
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "DisplayName", "SetConfigParam" },
		{ "Keywords", "Speech Recognition Set Config Param" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "SetConfigParam", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::SpeechRecognitionSubsystem_eventSetConfigParam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics
	{
		struct SpeechRecognitionSubsystem_eventShutdown_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "DisplayName", "Shutdown" },
		{ "Keywords", "Speech Recognition Shutdown" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "Shutdown", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::SpeechRecognitionSubsystem_eventShutdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_USpeechRecognitionSubsystem_StartedSpeaking_method_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionSubsystem_StartedSpeaking_method_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif
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
	struct Z_Construct_UFunction_USpeechRecognitionSubsystem_StoppedSpeaking_method_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionSubsystem_StoppedSpeaking_method_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif
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
	struct Z_Construct_UFunction_USpeechRecognitionSubsystem_UnknownPhrase_method_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionSubsystem_UnknownPhrase_method_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif
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
	struct Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics
	{
		struct SpeechRecognitionSubsystem_eventWordsSpoken_method_Parms
		{
			FRecognisedPhrases phrases;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_phrases;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::NewProp_phrases = { "phrases", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognitionSubsystem_eventWordsSpoken_method_Parms, phrases), Z_Construct_UScriptStruct_FRecognisedPhrases, METADATA_PARAMS(0, nullptr) }; // 160928621
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::NewProp_phrases,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Callback events\n" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
		{ "ToolTip", "Callback events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionSubsystem, nullptr, "WordsSpoken_method", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::SpeechRecognitionSubsystem_eventWordsSpoken_method_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method_Statics::PropPointers) < 2048);
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpeechRecognitionSubsystem);
	UClass* Z_Construct_UClass_USpeechRecognitionSubsystem_NoRegister()
	{
		return USpeechRecognitionSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USpeechRecognitionSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWordsSpoken_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWordsSpoken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUnknownPhrase_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnknownPhrase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStartedSpeaking_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartedSpeaking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStoppedSpeaking_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStoppedSpeaking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SpeechRecognition,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableGrammarMode, "EnableGrammarMode" }, // 3772886343
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableKeywordMode, "EnableKeywordMode" }, // 2593488340
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_EnableLanguageModel, "EnableLanguageModel" }, // 1788036464
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_GetCurrentVolume, "GetCurrentVolume" }, // 3092061996
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_Init, "Init" }, // 246032606
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_SetConfigParam, "SetConfigParam" }, // 4077018590
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_Shutdown, "Shutdown" }, // 4095959799
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_StartedSpeaking_method, "StartedSpeaking_method" }, // 81949676
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_StoppedSpeaking_method, "StoppedSpeaking_method" }, // 414156586
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_UnknownPhrase_method, "UnknownPhrase_method" }, // 2926547988
		{ &Z_Construct_UFunction_USpeechRecognitionSubsystem_WordsSpoken_method, "WordsSpoken_method" }, // 1793303177
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SpeechRecognitionSubsystem.h" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnWordsSpoken_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnWordsSpoken = { "OnWordsSpoken", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpeechRecognitionSubsystem, OnWordsSpoken), Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnWordsSpoken_MetaData), Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnWordsSpoken_MetaData) }; // 2013275251
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnUnknownPhrase_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnUnknownPhrase = { "OnUnknownPhrase", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpeechRecognitionSubsystem, OnUnknownPhrase), Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnUnknownPhrase_MetaData), Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnUnknownPhrase_MetaData) }; // 3862692542
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnStartedSpeaking_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnStartedSpeaking = { "OnStartedSpeaking", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpeechRecognitionSubsystem, OnStartedSpeaking), Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnStartedSpeaking_MetaData), Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnStartedSpeaking_MetaData) }; // 415868839
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnStoppedSpeaking_MetaData[] = {
		{ "Category", "Audio|SpeechRecognition" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnStoppedSpeaking = { "OnStoppedSpeaking", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpeechRecognitionSubsystem, OnStoppedSpeaking), Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnStoppedSpeaking_MetaData), Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnStoppedSpeaking_MetaData) }; // 2140160341
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnWordsSpoken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnUnknownPhrase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnStartedSpeaking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::NewProp_OnStoppedSpeaking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpeechRecognitionSubsystem>::IsAbstract,
	};
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognitionSubsystem_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpeechRecognitionSubsystem, USpeechRecognitionSubsystem::StaticClass, TEXT("USpeechRecognitionSubsystem"), &Z_Registration_Info_UClass_USpeechRecognitionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpeechRecognitionSubsystem), 3947200420U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h_2885681812(TEXT("/Script/SpeechRecognition"),
		Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
