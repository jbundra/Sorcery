// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "STile.h"
#include "SGrassTile.generated.h"

/**
 * 
 */
UCLASS()
class SORCERY_API ASGrassTile : public ASTile
{
	GENERATED_BODY()

		ASGrassTile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

};
