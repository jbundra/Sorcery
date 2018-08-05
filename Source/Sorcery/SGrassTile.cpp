// Fill out your copyright notice in the Description page of Project Settings.

#include "SGrassTile.h"

ASGrassTile::ASGrassTile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	//Material of the tile
	tileMat = Cast<UMaterial>(StaticLoadObject(UMaterial::StaticClass(), nullptr,
		TEXT("Material'/Game/Sorcery/Tile/Materials/Grass.Grass'")));

	meshComp->SetStaticMesh(meshToUse);
	meshComp->SetMaterial(0, tileMat);
}

void ASGrassTile::BeginPlay() {
	Super::BeginPlay();
}
