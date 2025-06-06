// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpeechRecognition.h"

#ifdef SPEECHRECOGNITION_SpeechRecognition_generated_h
#error "SpeechRecognition.generated.h already included, missing '#pragma once' in SpeechRecognition.h"
#endif
#define SPEECHRECOGNITION_SpeechRecognition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRecognisedPhrases ************************************************
#define FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognition_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRecognisedPhrases_Statics; \
	SPEECHRECOGNITION_API static class UScriptStruct* StaticStruct();


struct FRecognisedPhrases;
// ********** End ScriptStruct FRecognisedPhrases **************************************************

// ********** Begin ScriptStruct FRecognitionPhrase ************************************************
#define FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognition_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRecognitionPhrase_Statics; \
	SPEECHRECOGNITION_API static class UScriptStruct* StaticStruct();


struct FRecognitionPhrase;
// ********** End ScriptStruct FRecognitionPhrase **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Ula_Desktop_SpeechRecognition_HostProject_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognition_h

// ********** Begin Enum ESpeechRecognitionMode ****************************************************
#define FOREACH_ENUM_ESPEECHRECOGNITIONMODE(op) \
	op(ESpeechRecognitionMode::VE_KEYWORD) \
	op(ESpeechRecognitionMode::VE_GRAMMAR) \
	op(ESpeechRecognitionMode::VE_LANGUAGE_MODEL) 

enum class ESpeechRecognitionMode : uint8;
template<> struct TIsUEnumClass<ESpeechRecognitionMode> { enum { Value = true }; };
template<> SPEECHRECOGNITION_API UEnum* StaticEnum<ESpeechRecognitionMode>();
// ********** End Enum ESpeechRecognitionMode ******************************************************

// ********** Begin Enum ESpeechRecognitionParamType ***********************************************
#define FOREACH_ENUM_ESPEECHRECOGNITIONPARAMTYPE(op) \
	op(ESpeechRecognitionParamType::VE_FLOAT) \
	op(ESpeechRecognitionParamType::VE_BOOLEAN) \
	op(ESpeechRecognitionParamType::VE_STRING) \
	op(ESpeechRecognitionParamType::VE_INTEGER) 

enum class ESpeechRecognitionParamType : uint8;
template<> struct TIsUEnumClass<ESpeechRecognitionParamType> { enum { Value = true }; };
template<> SPEECHRECOGNITION_API UEnum* StaticEnum<ESpeechRecognitionParamType>();
// ********** End Enum ESpeechRecognitionParamType *************************************************

// ********** Begin Enum ESpeechRecognitionLanguage ************************************************
#define FOREACH_ENUM_ESPEECHRECOGNITIONLANGUAGE(op) \
	op(ESpeechRecognitionLanguage::VE_English) \
	op(ESpeechRecognitionLanguage::VE_Chinese) \
	op(ESpeechRecognitionLanguage::VE_French) \
	op(ESpeechRecognitionLanguage::VE_Spanish) \
	op(ESpeechRecognitionLanguage::VE_Russian) 

enum class ESpeechRecognitionLanguage : uint8;
template<> struct TIsUEnumClass<ESpeechRecognitionLanguage> { enum { Value = true }; };
template<> SPEECHRECOGNITION_API UEnum* StaticEnum<ESpeechRecognitionLanguage>();
// ********** End Enum ESpeechRecognitionLanguage **************************************************

// ********** Begin Enum EPhraseRecognitionTolerance ***********************************************
#define FOREACH_ENUM_EPHRASERECOGNITIONTOLERANCE(op) \
	op(EPhraseRecognitionTolerance::VE_1) \
	op(EPhraseRecognitionTolerance::VE_2) \
	op(EPhraseRecognitionTolerance::VE_3) \
	op(EPhraseRecognitionTolerance::VE_4) \
	op(EPhraseRecognitionTolerance::VE_5) \
	op(EPhraseRecognitionTolerance::VE_6) \
	op(EPhraseRecognitionTolerance::VE_7) \
	op(EPhraseRecognitionTolerance::VE_8) \
	op(EPhraseRecognitionTolerance::VE_9) \
	op(EPhraseRecognitionTolerance::VE_10) 

enum class EPhraseRecognitionTolerance : uint8;
template<> struct TIsUEnumClass<EPhraseRecognitionTolerance> { enum { Value = true }; };
template<> SPEECHRECOGNITION_API UEnum* StaticEnum<EPhraseRecognitionTolerance>();
// ********** End Enum EPhraseRecognitionTolerance *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
