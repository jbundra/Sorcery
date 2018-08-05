// Fill out your copyright notice in the Description page of Project Settings.

#include "SWaterTile.h"

ASWaterTile::ASWaterTile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	//Material of the tile
	tileMat = Cast<UMaterial>(StaticLoadObject(UMaterial::StaticClass(), nullptr,
		TEXT("Material'/Game/Sorcery/Tile/Materials/Water.Water'")));

	meshComp->SetStaticMesh(meshToUse);
	meshComp->SetMaterial(0, tileMat);
}

void ASWaterTile::BeginPlay() {
	Super::BeginPlay();
}



