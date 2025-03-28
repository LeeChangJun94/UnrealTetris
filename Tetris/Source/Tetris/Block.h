// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.generated.h"

class UStaticMeshComponent;

UCLASS()
class TETRIS_API ABlock : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABlock();

	UStaticMeshComponent* GetStaticMeshComponent()
	{
		return MeshComp;
	}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UStaticMeshComponent* MeshComp;

};
