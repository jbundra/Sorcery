// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "STile.h"
#include "SSandTile.generated.h"

/**
 * 
 */
UCLASS()
class SORCERY_API ASSandTile : public ASTile
{
	GENERATED_BODY()
	
		ASSandTile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	
};
