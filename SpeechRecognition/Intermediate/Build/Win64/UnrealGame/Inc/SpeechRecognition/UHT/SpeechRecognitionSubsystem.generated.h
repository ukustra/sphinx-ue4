// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpeechRecognitionSubsystem.h"

#ifdef SPEECHRECOGNITION_SpeechRecognitionSubsystem_generated_h
#error "SpeechRecognitionSubsystem.generated.h already included, missing '#pragma once' in SpeechRecognitionSubsystem.h"
#endif
#define SPEECHRECOGNITION_SpeechRecognitionSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ESpeechRecognitionLanguage : uint8;
enum class ESpeechRecognitionParamType : uint8;
struct FRecognisedPhrases;
struct FRecognitionPhrase;

// ********** Begin Delegate FStartedSpeakingSignature *********************************************
#define FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h_10_DELEGATE \
SPEECHRECOGNITION_API void FStartedSpeakingSignature_DelegateWrapper(const FMulticastScriptDelegate& StartedSpeakingSignature);


// ********** End Delegate FStartedSpeakingSignature ***********************************************

// ********** Begin Delegate FStoppedSpeakingSignature *********************************************
#define FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h_11_DELEGATE \
SPEECHRECOGNITION_API void FStoppedSpeakingSignature_DelegateWrapper(const FMulticastScriptDelegate& StoppedSpeakingSignature);


// ********** End Delegate FStoppedSpeakingSignature ***********************************************

// ********** Begin Delegate FWordsSpokenSignature *************************************************
#define FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h_12_DELEGATE \
SPEECHRECOGNITION_API void FWordsSpokenSignature_DelegateWrapper(const FMulticastScriptDelegate& WordsSpokenSignature, FRecognisedPhrases Text);


// ********** End Delegate FWordsSpokenSignature ***************************************************

// ********** Begin Delegate FUnknownPhraseSignature ***********************************************
#define FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h_13_DELEGATE \
SPEECHRECOGNITION_API void FUnknownPhraseSignature_DelegateWrapper(const FMulticastScriptDelegate& UnknownPhraseSignature);


// ********** End Delegate FUnknownPhraseSignature *************************************************

// ********** Begin Class USpeechRecognitionSubsystem **********************************************
#define FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStoppedSpeaking_method); \
	DECLARE_FUNCTION(execStartedSpeaking_method); \
	DECLARE_FUNCTION(execUnknownPhrase_method); \
	DECLARE_FUNCTION(execWordsSpoken_method); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execSetConfigParam); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execGetCurrentVolume); \
	DECLARE_FUNCTION(execEnableLanguageModel); \
	DECLARE_FUNCTION(execEnableGrammarMode); \
	DECLARE_FUNCTION(execEnableKeywordMode);


SPEECHRECOGNITION_API UClass* Z_Construct_UClass_USpeechRecognitionSubsystem_NoRegister();

#define FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpeechRecognitionSubsystem(); \
	friend struct Z_Construct_UClass_USpeechRecognitionSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPEECHRECOGNITION_API UClass* Z_Construct_UClass_USpeechRecognitionSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USpeechRecognitionSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpeechRecognition"), Z_Construct_UClass_USpeechRecognitionSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USpeechRecognitionSubsystem)


#define FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpeechRecognitionSubsystem(USpeechRecognitionSubsystem&&) = delete; \
	USpeechRecognitionSubsystem(const USpeechRecognitionSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpeechRecognitionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpeechRecognitionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpeechRecognitionSubsystem) \
	NO_API virtual ~USpeechRecognitionSubsystem();


#define FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h_15_PROLOG
#define FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpeechRecognitionSubsystem;

// ********** End Class USpeechRecognitionSubsystem ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
