// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechRecognition_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature(ETypeConstructPhase);
	SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature(ETypeConstructPhase);
	SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature(ETypeConstructPhase);
	SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature(ETypeConstructPhase);
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SpeechRecognition;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SpeechRecognition(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_SpeechRecognition.OuterSingleton)
		{
		static FTypeConstructFunc* SingletonFuncArray[] = {
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/SpeechRecognition",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x5E67AFA3,
			0xEF2585D0,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SpeechRecognition.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_SpeechRecognition.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SpeechRecognition(Z_Construct_UPackage__Script_SpeechRecognition, TEXT("/Script/SpeechRecognition"), Z_Registration_Info_UPackage__Script_SpeechRecognition, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5E67AFA3, 0xEF2585D0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
