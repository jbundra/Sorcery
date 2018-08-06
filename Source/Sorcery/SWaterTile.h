// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "STile.h"
#include "SWaterTile.generated.h"

/**
 * 
 */
UCLASS()
class SORCERY_API ASWaterTile : public ASTile
{
	GENERATED_BODY()

public:
	
		ASWaterTile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	
};
