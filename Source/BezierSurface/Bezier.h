// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "Bezier.generated.h"

/**
 * 
 */
UCLASS()
class BEZIERSURFACE_API UBezier : public UProceduralMeshComponent
{
	GENERATED_BODY()

	protected:
		virtual void BeginPlay() override;
	public:

	UFUNCTION()
		void Test();

	UPROPERTY()
		UProceduralMeshComponent* proceduralMesh;

	UPROPERTY(EditAnywhere)
		FVector2D MapSize;

	UPROPERTY(EditAnywhere)
		float SizeOfPlate;
};
