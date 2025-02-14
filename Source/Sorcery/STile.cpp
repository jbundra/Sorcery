// Fill out your copyright notice in the Description page of Project Settings.

#include "STile.h"

const float ASTile::HEX_WIDTH = 1.73205f;
const float ASTile::HEX_LENGTH = 2.0f;
const float ASTile::HEX_HEIGHT = 0.23442f;

// Sets default values
ASTile::ASTile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Mesh component
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TileMesh"));

	//Mesh of the tile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshObj(TEXT("StaticMesh'/Game/Sorcery/Tile/hexagongridpiece.hexagongridpiece'"));
	if (MeshObj.Succeeded()) {
		meshToUse = MeshObj.Object;
	}
}

// Called when the game starts or when spawned
void ASTile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASTile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

