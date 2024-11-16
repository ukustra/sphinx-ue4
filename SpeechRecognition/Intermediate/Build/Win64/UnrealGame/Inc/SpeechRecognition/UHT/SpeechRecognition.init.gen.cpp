// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechRecognition_init() {}
	SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SpeechRecognition;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SpeechRecognition()
	{
		if (!Z_Registration_Info_UPackage__Script_SpeechRecognition.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SpeechRecognition",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC47A24E4,
				0x3097805D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SpeechRecognition.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SpeechRecognition.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SpeechRecognition(Z_Construct_UPackage__Script_SpeechRecognition, TEXT("/Script/SpeechRecognition"), Z_Registration_Info_UPackage__Script_SpeechRecognition, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC47A24E4, 0x3097805D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
