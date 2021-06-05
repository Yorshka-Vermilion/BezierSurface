// Fill out your copyright notice in the Description page of Project Settings.


#include "Bezier.h"


void UBezier::BeginPlay()
{
    
}


void UBezier::Test()
{
    TArray<FVector> vertices,normals;
    TArray<int32> Triangles;
    TArray<FVector2D> UV;
    TArray<FLinearColor> vertexColors;
    TArray<FProcMeshTangent> tangents;
    float uvSpace = 1.0f / FMath::Max(this->MapSize.X, this->MapSize.Y);
    for(int32 IndexX = 0; IndexX <= this->MapSize.X; IndexX++)
    {
        for(int32 IndexY = 0; IndexY <= this->MapSize.Y; IndexY++)
        {
            vertices.Add(FVector(IndexX * this->SizeOfPlate, IndexY * this->SizeOfPlate,FMath::Sin(IndexY) * 100));
            normals.Add(FVector(0, 0, 1));
            UV.Add(FVector2D(IndexX * uvSpace, IndexY * uvSpace));
            tangents.Add(FProcMeshTangent(1, 0, 0));
            vertexColors.Add(FLinearColor(0, 0, 0, 1.0));
        }
    }

    for(int32 IndexX = 0; IndexX <= this->MapSize.X; IndexX++)
    {
        for(int32 IndexY = 0; IndexY <= this->MapSize.Y; IndexY++)
        {
            Triangles.Add(IndexX + (IndexY * MapSize.Y));
            Triangles.Add(IndexX + (IndexY * MapSize.Y) + MapSize.X);
            Triangles.Add(IndexX + (IndexY * MapSize.Y) + MapSize.X + 1);

            Triangles.Add(IndexX + (IndexY * MapSize.Y));
            Triangles.Add(IndexX + (IndexY * MapSize.Y) + MapSize.X + 1);
            Triangles.Add(IndexX + (IndexY * MapSize.Y) + 1);
        }
    }

    proceduralMesh->CreateMeshSection_LinearColor(0, vertices, Triangles, normals, UV, vertexColors, tangents, true);

    // Enable collision data
    proceduralMesh->ContainsPhysicsTriMeshData(true);
}