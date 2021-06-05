// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
	PrimaryActorTick.bCanEverTick = true;
	
	Root = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
	RootComponent = Root;
	
	delay = 0;
	zp=0;
	z1=10;
	z2=-10;
	zk=zp;
	
	maxDelay = 0.01;
	maxDelay2 = 1;
	dlugoscFali = 50;

	dlugosc = 1;
	szerokosc = 1;
	
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialFinder(TEXT("/Game/StarterContent/Materials/M_Water_Ocean.M_Water_Ocean"));
	if(MaterialFinder.Object)
	{
		material = MaterialFinder.Object;
	}else
	{
		UE_LOG(LogTemp, Error, TEXT("Blad wczytania materialu!"));
	}
}


// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	Buduj();
}
// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	delay += DeltaTime;
	
	if(delay >= maxDelay)
	{			
		for(int32 i = 0;i<meshes.Num();i++)
		{
			meshes[i]->Faluj();
			meshes[i]->Przesun();
			meshes[i]->Tick(DeltaTime);
		}
		delay = 0;
	}
}





void AMyActor::Buduj()
{
	meshes.Add(NewObject<APlat>());
	meshes.Last()->Buduj(MapSize,material,dlugoscFali,zp,z1,z2,zk);
	meshes.Last()->Kalkuluj();
}