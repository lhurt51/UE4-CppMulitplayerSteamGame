// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ServerRow.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API UServerRow : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* ServerName;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* PlayerCount;
	
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
