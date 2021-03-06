// Fill out your copyright notice in the Description page of Project Settings.


#include "Plat.h"

// Sets default values
APlat::APlat()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	glowny = false;
}

// Called when the game starts or when spawned
void APlat::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlat::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APlat::Przesun()
{

		for(int32 i = vertices.Num()-1; i >= MapSize.X; i--)
		{
			vertices[i].Z = vertices[i-MapSize.X].Z;
		}
		mesh->UpdateMeshSection_LinearColor(0,vertices, normals, UV, vertexColors, tangents);

}

void APlat::Faluj(TArray<FVector> verticesZew)
{
	if(glowny)
	{
		if(kontrola==OutPoints.Num())
		{
			kontrola=1;
		}
		
		for(int32 IndexX = 0; IndexX < this->MapSize.X; IndexX++)
		{
			vertices[IndexX].Z = OutPoints[kontrola].Z;
		}
		mesh->UpdateMeshSection_LinearColor(0,vertices, normals, UV, vertexColors, tangents);
		
		kontrola++;
	}
	else
	{
		if(verticesZew.Num() != MapSize.X)
		{
			UE_LOG(LogTemp,Warning,TEXT("Liczba elementow nie zgodna"));
		}else
		{
			for(int32 IndexX = 0; IndexX < this->MapSize.X; IndexX++)
			{
				vertices[IndexX].Z = verticesZew[IndexX].Z;
			}
			mesh->UpdateMeshSection_LinearColor(0,vertices, normals, UV, vertexColors, tangents);
		}
	}
}

TArray<FVector> APlat::GetVertices(int kierunekp)
{
	TArray<FVector> tmp;
	if(kierunekp == 0)
	{
		for(int32 i = 0;i<MapSize.X;i++)
		{
			tmp.Add(vertices[i]);
		}
	}
	else if(kierunekp == 1)
	{
		for(int32 i = 0;i<MapSize.X;i++)
		{
			tmp.Add(vertices[i+(MapSize.X*MapSize.Y-MapSize.X)]);
		}
	}
	return tmp;
}


void APlat::Buduj(FVector2D MapSizep, UMaterial* material, float SizeOfPlatep, float df, float zpp,float z1p, float z2p,float zkp, FVector pocz, int kierunekp, int indexp, int kierunekFalowaniap)
{
	this->SizeOfPlate = SizeOfPlatep;
	this->MapSize = MapSizep;
	this->dlugoscFali = df;
	this->zp = zpp;
	this->z1 = z1p;
	this->z2 = z2p;
	this->zk = zkp;
	this->kierunek = kierunekp;
	this->index = indexp;
	this->kierunekFalowania = kierunekFalowaniap;
	
	mesh = NewObject<UProceduralMeshComponent>(this, UProceduralMeshComponent::StaticClass());
	mesh->RegisterComponentWithWorld(GetWorld());
	
	mesh->bUseAsyncCooking = true;
	
	float uvSpace = 4.0f / FMath::Max(MapSize.X, MapSize.Y);
	for(int32 IndexX = 0; IndexX < MapSize.X; IndexX++)
	{
		for(int32 IndexY = 0; IndexY < MapSize.Y; IndexY++)
		{
			vertices.Add(FVector(IndexX * this->SizeOfPlate + pocz.X, IndexY * this->SizeOfPlate + pocz.Y,0));
			normals.Add(FVector(0, 0, 1));
			UV.Add(FVector2D(IndexX * uvSpace, IndexY * uvSpace));
			tangents.Add(FProcMeshTangent(1, 0, 0));
			vertexColors.Add(FLinearColor(0, 0, 0, 1.0));

			Triangles.Add(IndexX + (IndexY * MapSize.Y));
			Triangles.Add(IndexX + (IndexY * MapSize.Y) + MapSize.X + 1);
			Triangles.Add(IndexX + (IndexY * MapSize.Y) + MapSize.X);
			
			Triangles.Add(IndexX + (IndexY * MapSize.Y));
			Triangles.Add(IndexX + (IndexY * MapSize.Y) + 1);
			Triangles.Add(IndexX + (IndexY * MapSize.Y) + MapSize.X + 1);
		}
	}

	mesh->CreateMeshSection_LinearColor(0, vertices, Triangles, normals, UV, vertexColors, tangents, true);
	mesh->SetMeshSectionVisible(0,true);
	if(material)
	{
		mesh->SetMaterial(0,material);
	}
	mesh->ContainsPhysicsTriMeshData(true);

	if(kierunekFalowania == 1)
	{
		mesh->SetWorldRotation(FRotator(0,180,0));
	}
}

void APlat::Kalkuluj()
{
	kontrola = 0;
	
	int pocz = MapSize.X;
	int p1 = MapSize.X*(int)(dlugoscFali/3);
	int p2 = MapSize.X*(int)(dlugoscFali/1.5);
	int kon = MapSize.X*(int)(dlugoscFali);

	FVector tmpP = vertices[pocz];
	FVector tmp1 = vertices[p1];
	FVector tmp2 = vertices[p2];
	FVector tmpK = vertices[kon];

	tmpP.X = zp;
	tmp1.Z = z1;
	tmp2.Z = z2;
	tmpK.X = zk;

	ControlPoints.Add(tmpP);
	ControlPoints.Add(tmp1);
	ControlPoints.Add(tmp2);
	ControlPoints.Add(tmpK);
	FVector::EvaluateBezier(&ControlPoints[0], dlugoscFali, OutPoints);
	glowny = true;
}