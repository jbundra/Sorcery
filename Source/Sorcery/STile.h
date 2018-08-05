// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Materials/Material.h"
#include "Engine/StaticMesh.h"
#include "Engine/Classes/Components/MeshComponent.h"
#include "Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "STile.generated.h"

UCLASS()
class SORCERY_API ASTile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASTile();

	//Define tile variables here
	UMaterial* tileMat;

	UStaticMesh* meshToUse;
	UStaticMeshComponent* meshComp;
	UMaterialInstanceDynamic* dynTileMat;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
