// Fill out your copyright notice in the Description page of Project Settings.

#include "SWorldGrid.h"


// Sets default values
ASWorldGrid::ASWorldGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASWorldGrid::BeginPlay()
{
	Super::BeginPlay();

	CreateWorld();
}

void ASWorldGrid::CreateWorld() {
	//Used for procedural generation
	/*
	for (int x = 0; x <= 5; x++)
	{
		for (int y = 0; y <= 5; y++)
		{
			for (int z = 0; z <= 0; z++)
			{
				FIntVector pos = FIntVector(x, y, z);
				SpawnTile(pos, ASGrassTile::StaticClass());
				//Grid.Add(Tile);
			}
		}
	}
	*/

	//custom generated world

	//water tiles
	SpawnTile(FIntVector(-2, -2, 0), ASWaterTile::StaticClass());
	SpawnTile(FIntVector(-2, -1, 0), ASWaterTile::StaticClass());
	SpawnTile(FIntVector(-2, 0, 0), ASWaterTile::StaticClass());
	SpawnTile(FIntVector(-1, -2, 0), ASWaterTile::StaticClass());
	SpawnTile(FIntVector(-1, -1, 0), ASWaterTile::StaticClass());

	//sand tiles
	SpawnTile(FIntVector(0, -2, 0), ASSandTile::StaticClass());
	SpawnTile(FIntVector(0, -1, 0), ASSandTile::StaticClass());
	SpawnTile(FIntVector(0, 0, 0), ASSandTile::StaticClass());
	SpawnTile(FIntVector(0, 1, 0), ASSandTile::StaticClass());
	SpawnTile(FIntVector(-1, 0, 0), ASSandTile::StaticClass());
	SpawnTile(FIntVector(-1, 1, 0), ASSandTile::StaticClass());
	SpawnTile(FIntVector(-2, 1, 0), ASSandTile::StaticClass());

	//grass tiles
	SpawnTile(FIntVector(1, -2, 0), ASGrassTile::StaticClass());
	SpawnTile(FIntVector(1, -1, 0), ASGrassTile::StaticClass());
	SpawnTile(FIntVector(1, 0, 0), ASGrassTile::StaticClass());
	SpawnTile(FIntVector(1, 1, 0), ASGrassTile::StaticClass());
	SpawnTile(FIntVector(2, -2, 0), ASGrassTile::StaticClass());
	SpawnTile(FIntVector(2, -1, 0), ASGrassTile::StaticClass());
	SpawnTile(FIntVector(2, 0, 0), ASGrassTile::StaticClass());
	SpawnTile(FIntVector(2, 1, 0), ASGrassTile::StaticClass());

	//dirt tiles
	SpawnTile(FIntVector(1, 2, 0), ASDirtTile::StaticClass());
	SpawnTile(FIntVector(0, 2, 0), ASDirtTile::StaticClass());
	SpawnTile(FIntVector(0, 2, 1), ASDirtTile::StaticClass());
	SpawnTile(FIntVector(-1, 2, 0), ASDirtTile::StaticClass());
	SpawnTile(FIntVector(-1, 2, 1), ASDirtTile::StaticClass());
	SpawnTile(FIntVector(-1, 2, 2), ASDirtTile::StaticClass());
	SpawnTile(FIntVector(-2, 2, 0), ASDirtTile::StaticClass());
	SpawnTile(FIntVector(-2, 2, 1), ASDirtTile::StaticClass());
	SpawnTile(FIntVector(-2, 2, 2), ASDirtTile::StaticClass());

	//grass overtop dirt
	SpawnTile(FIntVector(1, 2, 1), ASGrassTile::StaticClass());
	SpawnTile(FIntVector(0, 2, 2), ASGrassTile::StaticClass());
	SpawnTile(FIntVector(-1, 2, 3), ASGrassTile::StaticClass());
	SpawnTile(FIntVector(-2, 2, 3), ASGrassTile::StaticClass());

	//spawn the player
	ASCharacter* playerCharacter = GetWorld()->SpawnActor<ASCharacter>(ASCharacter::StaticClass(), FVector(0, 0, 0), FRotator(0, 0, 0));
}

void ASWorldGrid::SpawnTile(FIntVector pos, TSubclassOf<ASTile> tileClass) {
	int temp = 100;

	float offset = 0;
	if (pos.Y % 2 != 0) {
		offset = ASTile::HEX_WIDTH/2;
	}

	float x = (pos.X * ASTile::HEX_WIDTH - offset) * temp;
	float y = pos.Y * ASTile::HEX_LENGTH * 0.75f * temp;
	float z = pos.Z * ASTile::HEX_HEIGHT * temp;

	FVector Location(x, y, z);
	FRotator Rotation(0.0f, 0.0f, 0.0f);

	ASTile* newTile = GetWorld()->SpawnActor<ASTile>(tileClass, Location, Rotation);

	newTile->coordinates = pos;
}

// Called every frame
void ASWorldGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

