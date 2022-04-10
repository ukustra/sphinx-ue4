
#include "SpeechRecognitionSubsystem.h"

#define SPEECHRECOGNITIONPLUGIN ISpeechRecognition::Get()

USpeechRecognitionSubsystem::USpeechRecognitionSubsystem()
{
	
}

bool USpeechRecognitionSubsystem::Init(ESpeechRecognitionLanguage Language, bool bInitDefaultConfigParams)
{
	bool bSuccess = false;
	
	// terminate any existing thread
	if (listenerThread != NULL) {
		listenerThread->SetLanguage(Language);
		bSuccess = true;
	}

	if (!bSuccess)
	{
		// start listener thread
		listenerThread = new FSpeechRecognitionWorker();
		TArray<FRecognitionPhrase> dictionaryList;
		listenerThread->SetLanguage(Language);
		bSuccess = listenerThread->StartThread(this);
	}

	if (bSuccess && bInitDefaultConfigParams)
	{
		SetConfigParam(TEXT("-vad_prespeech"), ESpeechRecognitionParamType::VE_INTEGER, TEXT("10"));
		SetConfigParam(TEXT("-vad_postspeech"), ESpeechRecognitionParamType::VE_INTEGER, TEXT("10"));
		SetConfigParam(TEXT("-agc"), ESpeechRecognitionParamType::VE_STRING, TEXT("noise"));
		SetConfigParam(TEXT("-beam"), ESpeechRecognitionParamType::VE_FLOAT, TEXT("1e-40"));
	}

	return bSuccess;
}

int32 USpeechRecognitionSubsystem::GetCurrentVolume() const
{
	if (listenerThread != NULL) {
		const int16 returnVal = listenerThread->GetCurrentVolume();
		return returnVal;
	}
	return 0;
}

bool USpeechRecognitionSubsystem::SetConfigParam(FString param, ESpeechRecognitionParamType type, FString value)
{
	if (listenerThread != NULL) {
		const bool returnVal = listenerThread->SetConfigParam(param, type, value);
		return returnVal;
	}
	return false;
}

bool USpeechRecognitionSubsystem::Shutdown()
{
	if (listenerThread != NULL) {
		listenerThread->ShutDown();
		listenerThread = NULL;
		return true;
	}
	else{
		return false;
	}
}

/**************************
// Change recognition methods
**************************/
bool USpeechRecognitionSubsystem::EnableKeywordMode(const TArray<FRecognitionPhrase>& wordList)
{
	if (listenerThread != NULL) {
		return listenerThread->EnableKeywordMode(wordList);
	}
	return false;
}

bool USpeechRecognitionSubsystem::EnableGrammarMode(FString grammarName)
{
	if (listenerThread != NULL) {
		return listenerThread->EnableGrammarMode(grammarName);
	}
	return false;
}

bool USpeechRecognitionSubsystem::EnableLanguageModel(FString languageModel)
{
	if (listenerThread != NULL) {
		return listenerThread->EnableLanguageModel(languageModel);
	}
	return false;
}

/**************************
// Callback methods
**************************/
void USpeechRecognitionSubsystem::WordsSpoken_trigger(FWordsSpokenSignature delegate_method, FRecognisedPhrases text)
{
	delegate_method.Broadcast(text);
}

void USpeechRecognitionSubsystem::WordsSpoken_method(FRecognisedPhrases text) const
{
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
		(
			FSimpleDelegateGraphTask::FDelegate::CreateStatic(&WordsSpoken_trigger, OnWordsSpoken, text)
			, TStatId()
			, nullptr
			, ENamedThreads::GameThread
			);
}

void USpeechRecognitionSubsystem::UnknownPhrase_trigger(FUnknownPhraseSignature delegate_method)
{
	delegate_method.Broadcast();
}

void USpeechRecognitionSubsystem::UnknownPhrase_method() const
{
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
		(
			FSimpleDelegateGraphTask::FDelegate::CreateStatic(&UnknownPhrase_trigger, OnUnknownPhrase)
			, TStatId()
			, nullptr
			, ENamedThreads::GameThread
			);
}

void USpeechRecognitionSubsystem::StartedSpeaking_trigger(FStartedSpeakingSignature delegate_method)
{
	delegate_method.Broadcast();
}

void USpeechRecognitionSubsystem::StartedSpeaking_method() const
{
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
		(
			FSimpleDelegateGraphTask::FDelegate::CreateStatic(&StartedSpeaking_trigger, OnStartedSpeaking)
			, TStatId()
			, nullptr
			, ENamedThreads::GameThread
			);
}

void USpeechRecognitionSubsystem::StoppedSpeaking_trigger(FStoppedSpeakingSignature delegate_method)
{
	delegate_method.Broadcast();
}

void USpeechRecognitionSubsystem::StoppedSpeaking_method() const
{
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
		(
			FSimpleDelegateGraphTask::FDelegate::CreateStatic(&StoppedSpeaking_trigger, OnStoppedSpeaking)
			, TStatId()
			, nullptr
			, ENamedThreads::GameThread
			);
}

bool USpeechRecognitionSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	if (Super::ShouldCreateSubsystem(Outer))
	{
		if (const UWorld* World = Cast<UWorld>(Outer))
		{
			return !World->IsNetMode(NM_DedicatedServer);
		}
	}

	return false;
}

void USpeechRecognitionSubsystem::Deinitialize()
{
	Shutdown();
	
	Super::Deinitialize();
}
