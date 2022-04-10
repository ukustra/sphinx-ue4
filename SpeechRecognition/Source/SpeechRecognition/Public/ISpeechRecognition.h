// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "SpeechRecognition.h"
#include "Modules/ModuleManager.h"

class ISpeechRecognition : public IModuleInterface
{

	int32 instanceCtr;

public:

	UFUNCTION(BlueprintCallable, Category = "Audio|SpeechRecognition")
	static inline ISpeechRecognition& Get()
	{
		return FModuleManager::LoadModuleChecked< ISpeechRecognition >( "SpeechRecognition" );
	}

	UFUNCTION(BlueprintCallable, Category = "Audio|SpeechRecognition")
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("SpeechRecognition");
	}

	UFUNCTION(BlueprintCallable, Category = "Audio|SpeechRecognition")
	int32 GetInstanceCounter()
	{
		return instanceCtr++;
	}

};

