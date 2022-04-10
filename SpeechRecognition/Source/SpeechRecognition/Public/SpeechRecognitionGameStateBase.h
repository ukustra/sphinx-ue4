
#pragma once

#include "CoreMinimal.h"
#include "SpeechRecognition.h"
#include "GameFramework/GameStateBase.h"
#include "SpeechRecognitionGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class SPEECHRECOGNITION_API ASpeechRecognitionGameStateBase : public AGameStateBase
{
	GENERATED_UCLASS_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Audio|SpeechRecognition")
	ESpeechRecognitionLanguage Language;

	/** Optional phrases to recognize */
	UPROPERTY(EditDefaultsOnly, Category = "Audio|SpeechRecognition")
	TArray<FRecognitionPhrase> OptionalWorldList;

	UFUNCTION(BlueprintImplementableEvent, Category = "Audio|SpeechRecognition", meta = (DisplayName = "On Speech Recognition Subsystem Initialized"))
	void K2_OnSpeechRecognitionSubsystemInitialized();

	virtual void OnSpeechRecognitionSubsystemInitialized();
	
	//~ Begin AActor Subsystem
	virtual void BeginPlay() override;
	//~ End AActor Subsystem
};
