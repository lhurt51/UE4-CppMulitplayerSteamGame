// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ServerRow.generated.h"

class UTextBlock;

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API UServerRow : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* ServerName;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* HostUser;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* PlayerCount;

	UPROPERTY(BlueprintReadOnly)
	bool Selected;
	
	void Setup(class UMainMenu* InParent, uint32 InIndex);

private:
	uint32 Index;

	UPROPERTY(meta = (BindWidget))
	class UButton* SelectServerButton;

	UPROPERTY()
	class UMainMenu* Parent;

	UFUNCTION()
	void OnClicked();

};
