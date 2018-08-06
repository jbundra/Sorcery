// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "STile.h"
#include "SDirtTile.generated.h"

/**
 * 
 */
UCLASS()
class SORCERY_API ASDirtTile : public ASTile
{
	GENERATED_BODY()

public:
	
		ASDirtTile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	
};
