
#include "SpeechRecognitionGameStateBase.h"
#include "SpeechRecognitionSubsystem.h"

ASpeechRecognitionGameStateBase::ASpeechRecognitionGameStateBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, Language(ESpeechRecognitionLanguage::VE_English)
{
	
}

void ASpeechRecognitionGameStateBase::OnSpeechRecognitionSubsystemInitialized()
{
	K2_OnSpeechRecognitionSubsystemInitialized();
}

void ASpeechRecognitionGameStateBase::BeginPlay()
{
	const UWorld* World = GetWorld();
	if (World && GetLocalRole() != ROLE_SimulatedProxy)
	{
		if (USpeechRecognitionSubsystem* SpeechRecognitionSubsystem = World->GetSubsystem<USpeechRecognitionSubsystem>())
		{
			if (SpeechRecognitionSubsystem->Init(Language))
			{
				if (!OptionalWorldList.IsEmpty())
				{
					SpeechRecognitionSubsystem->EnableKeywordMode(OptionalWorldList);
				}

				OnSpeechRecognitionSubsystemInitialized();
			}
		}
	}
	
	Super::BeginPlay();
}
