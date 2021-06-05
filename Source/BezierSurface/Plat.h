// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "Plat.generated.h"

UCLASS()
class BEZIERSURFACE_API APlat : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlat();
	
	UFUNCTION()
        void Buduj(FVector2D MapSizep, UMaterial* material, float dlugoscFali, float zp,float z1, float z2,float zk);

	UFUNCTION()
        void Faluj();
	
	UFUNCTION()
        void Przesun();

	UFUNCTION()
		void Kalkuluj();
	
	UPROPERTY()
		UProceduralMeshComponent* mesh;

	TArray<FVector> normals;
    TArray<int32> Triangles;
    TArray<FVector2D> UV;
    TArray<FLinearColor> vertexColors;
    TArray<FProcMeshTangent> tangents;
	UPROPERTY()
		TArray<FVector> vertices;
	
	UPROPERTY(EditAnywhere)
		FVector2D MapSize;

	UPROPERTY(EditAnywhere)
		float SizeOfPlate;
	UPROPERTY()
		int32 kontrola;
	UPROPERTY()
		TArray<FVector> OutPoints;
	UPROPERTY()
		TArray<FVector> ControlPoints;
	UPROPERTY(EditAnywhere)
		float dlugoscFali;
	float delay;
	float zp,z1,z2,zk;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
