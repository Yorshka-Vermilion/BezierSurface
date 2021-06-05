// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Plat.h"
#include "MyActor.generated.h"

UCLASS()
class BEZIERSURFACE_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		UShapeComponent* Root;
	
	UFUNCTION()
		void Buduj();

	UPROPERTY(VisibleAnywhere)
		TArray<APlat*> meshes;

	UPROPERTY(EditAnywhere)
		float maxDelay;
	UPROPERTY(EditAnywhere)
		float maxDelay2;
	UPROPERTY(EditAnywhere)
		float dlugoscFali;
	
	float delay;
	float zp,z1,z2,zk;
	
	UPROPERTY(EditAnywhere)
		FVector2D MapSize;	
	UPROPERTY()
		TArray<FVector> vertices;
	
	UPROPERTY()
		UMaterial* material;
	UPROPERTY()
		int dlugosc;
	UPROPERTY()
		int szerokosc;
};
