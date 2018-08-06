// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "STile.h"
#include "SGrassTile.h"
#include "SDirtTile.h"
#include "SSandTile.h"
#include "SWaterTile.h"
#include "SWorldGrid.generated.h"

UCLASS()
class SORCERY_API ASWorldGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASWorldGrid();

	void CreateWorld();

	void SpawnTile(FIntVector pos, TSubclassOf<ASTile> tileClass);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
