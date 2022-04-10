
#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SpeechRecognitionWorker.h"
#include "SpeechRecognition.h"
#include "SpeechRecognitionSubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStartedSpeakingSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStoppedSpeakingSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWordsSpokenSignature, FRecognisedPhrases, Text);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUnknownPhraseSignature);

UCLASS(BlueprintType)
class SPEECHRECOGNITION_API USpeechRecognitionSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

	int32 instanceCtr;
	
	FSpeechRecognitionWorker* listenerThread;

	static void WordsSpoken_trigger(FWordsSpokenSignature delegate_method, FRecognisedPhrases text);
	static void UnknownPhrase_trigger(FUnknownPhraseSignature delegate_method);
	static void StartedSpeaking_trigger(FStartedSpeakingSignature delegate_method);
	static void StoppedSpeaking_trigger(FStoppedSpeakingSignature delegate_method);

public:
	//Methods to switch recognition modes
	UFUNCTION(BlueprintCallable, Category = "Audio|SpeechRecognition", meta = (DisplayName = "Enable Keyword Mode", Keywords = "Speech Recognition Mode"))
	bool EnableKeywordMode(const TArray<FRecognitionPhrase>& wordList);

	UFUNCTION(BlueprintCallable, Category = "Audio|SpeechRecognition", meta = (DisplayName = "Enable Grammar Mode", Keywords = "Speech Recognition Mode"))
	bool EnableGrammarMode(FString grammarName);

	UFUNCTION(BlueprintCallable, Category = "Audio|SpeechRecognition", meta = (DisplayName = "Enable Language Model Mode", Keywords = "Speech Recognition Mode"))
	bool EnableLanguageModel(FString languageModel);

	// Basic functions 
	UFUNCTION(BlueprintCallable, Category = "Audio|SpeechRecognition", meta = (DisplayName = "GetCurrentVolume", Keywords = "Speech Recognition Volume"))
	int32 GetCurrentVolume() const;

	UFUNCTION(BlueprintCallable, Category = "Audio|SpeechRecognition", meta = (DisplayName = "Init", Keywords = "Speech Recognition Init"))
	bool Init(ESpeechRecognitionLanguage Language, bool bInitDefaultConfigParams = true);	

	UFUNCTION(BlueprintCallable, Category = "Audio|SpeechRecognition", meta = (DisplayName = "SetConfigParam", Keywords = "Speech Recognition Set Config Param"))
	bool SetConfigParam(FString param, ESpeechRecognitionParamType type, FString value);

	UFUNCTION(BlueprintCallable, Category = "Audio|SpeechRecognition", meta = (DisplayName = "Shutdown", Keywords = "Speech Recognition Shutdown"))
	bool Shutdown();

	// Callback events
	UFUNCTION()
	void WordsSpoken_method(FRecognisedPhrases phrases) const;

	UPROPERTY(BlueprintAssignable, Category = "Audio|SpeechRecognition")
	FWordsSpokenSignature OnWordsSpoken;

	UFUNCTION()
	void UnknownPhrase_method() const;

	UPROPERTY(BlueprintAssignable, Category = "Audio|SpeechRecognition")
	FUnknownPhraseSignature OnUnknownPhrase;

	UFUNCTION()
	void StartedSpeaking_method() const;

	UPROPERTY(BlueprintAssignable, Category = "Audio|SpeechRecognition")
	FStartedSpeakingSignature OnStartedSpeaking;

	UFUNCTION()
	void StoppedSpeaking_method() const;

	UPROPERTY(BlueprintAssignable, Category = "Audio|SpeechRecognition")
	FStoppedSpeakingSignature OnStoppedSpeaking;

	//~ Begin UWorldSubsystem Subsystem
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
	virtual void Deinitialize() override;
	//~ End UWorldSubsystem Subsystem

	USpeechRecognitionSubsystem();
};
