// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BezierSurface/Plat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlat() {}
// Cross Module References
	BEZIERSURFACE_API UClass* Z_Construct_UClass_APlat_NoRegister();
	BEZIERSURFACE_API UClass* Z_Construct_UClass_APlat();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BezierSurface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlat::execKalkuluj)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Kalkuluj();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlat::execPrzesun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Przesun();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlat::execGetVertices)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_kierunekp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetVertices(Z_Param_kierunekp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlat::execFaluj)
	{
		P_GET_TARRAY(FVector,Z_Param_verticesZew);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Faluj(Z_Param_verticesZew);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlat::execBuduj)
	{
		P_GET_STRUCT(FVector2D,Z_Param_MapSizep);
		P_GET_OBJECT(UMaterial,Z_Param_material);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SizeOfPlatep);
		P_GET_PROPERTY(FFloatProperty,Z_Param_dlugoscFali);
		P_GET_PROPERTY(FFloatProperty,Z_Param_zp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_z1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_z2);
		P_GET_PROPERTY(FFloatProperty,Z_Param_zk);
		P_GET_STRUCT(FVector,Z_Param_pocz);
		P_GET_PROPERTY(FIntProperty,Z_Param_kierunek);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_kierunekFalowaniap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Buduj(Z_Param_MapSizep,Z_Param_material,Z_Param_SizeOfPlatep,Z_Param_dlugoscFali,Z_Param_zp,Z_Param_z1,Z_Param_z2,Z_Param_zk,Z_Param_pocz,Z_Param_kierunek,Z_Param_index,Z_Param_kierunekFalowaniap);
		P_NATIVE_END;
	}
	void APlat::StaticRegisterNativesAPlat()
	{
		UClass* Class = APlat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Buduj", &APlat::execBuduj },
			{ "Faluj", &APlat::execFaluj },
			{ "GetVertices", &APlat::execGetVertices },
			{ "Kalkuluj", &APlat::execKalkuluj },
			{ "Przesun", &APlat::execPrzesun },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlat_Buduj_Statics
	{
		struct Plat_eventBuduj_Parms
		{
			FVector2D MapSizep;
			UMaterial* material;
			float SizeOfPlatep;
			float dlugoscFali;
			float zp;
			float z1;
			float z2;
			float zk;
			FVector pocz;
			int32 kierunek;
			int32 index;
			int32 kierunekFalowaniap;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapSizep;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_material;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SizeOfPlatep;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dlugoscFali;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_zp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z1;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z2;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_zk;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pocz;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_kierunek;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_kierunekFalowaniap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_MapSizep = { "MapSizep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plat_eventBuduj_Parms, MapSizep), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plat_eventBuduj_Parms, material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_SizeOfPlatep = { "SizeOfPlatep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plat_eventBuduj_Parms, SizeOfPlatep), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_dlugoscFali = { "dlugoscFali", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plat_eventBuduj_Parms, dlugoscFali), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_zp = { "zp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plat_eventBuduj_Parms, zp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_z1 = { "z1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plat_eventBuduj_Parms, z1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_z2 = { "z2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plat_eventBuduj_Parms, z2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_zk = { "zk", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plat_eventBuduj_Parms, zk), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_pocz = { "pocz", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plat_eventBuduj_Parms, pocz), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_kierunek = { "kierunek", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plat_eventBuduj_Parms, kierunek), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plat_eventBuduj_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_kierunekFalowaniap = { "kierunekFalowaniap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plat_eventBuduj_Parms, kierunekFalowaniap), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlat_Buduj_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_MapSizep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_SizeOfPlatep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_dlugoscFali,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_zp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_z1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_z2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_zk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_pocz,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_kierunek,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlat_Buduj_Statics::NewProp_kierunekFalowaniap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlat_Buduj_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlat_Buduj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlat, nullptr, "Buduj", nullptr, nullptr, sizeof(Plat_eventBuduj_Parms), Z_Construct_UFunction_APlat_Buduj_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlat_Buduj_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlat_Buduj_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlat_Buduj_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlat_Buduj()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlat_Buduj_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlat_Faluj_Statics
	{
		struct Plat_eventFaluj_Parms
		{
			TArray<FVector> verticesZew;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_verticesZew_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_verticesZew;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlat_Faluj_Statics::NewProp_verticesZew_Inner = { "verticesZew", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlat_Faluj_Statics::NewProp_verticesZew = { "verticesZew", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plat_eventFaluj_Parms, verticesZew), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlat_Faluj_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlat_Faluj_Statics::NewProp_verticesZew_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlat_Faluj_Statics::NewProp_verticesZew,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlat_Faluj_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlat_Faluj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlat, nullptr, "Faluj", nullptr, nullptr, sizeof(Plat_eventFaluj_Parms), Z_Construct_UFunction_APlat_Faluj_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlat_Faluj_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlat_Faluj_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlat_Faluj_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlat_Faluj()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlat_Faluj_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlat_GetVertices_Statics
	{
		struct Plat_eventGetVertices_Parms
		{
			int32 kierunekp;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_kierunekp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlat_GetVertices_Statics::NewProp_kierunekp = { "kierunekp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plat_eventGetVertices_Parms, kierunekp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlat_GetVertices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlat_GetVertices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plat_eventGetVertices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlat_GetVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlat_GetVertices_Statics::NewProp_kierunekp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlat_GetVertices_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlat_GetVertices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlat_GetVertices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlat_GetVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlat, nullptr, "GetVertices", nullptr, nullptr, sizeof(Plat_eventGetVertices_Parms), Z_Construct_UFunction_APlat_GetVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlat_GetVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlat_GetVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlat_GetVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlat_GetVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlat_GetVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlat_Kalkuluj_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlat_Kalkuluj_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlat_Kalkuluj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlat, nullptr, "Kalkuluj", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlat_Kalkuluj_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlat_Kalkuluj_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlat_Kalkuluj()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlat_Kalkuluj_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlat_Przesun_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlat_Przesun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlat_Przesun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlat, nullptr, "Przesun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlat_Przesun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlat_Przesun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlat_Przesun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlat_Przesun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlat_NoRegister()
	{
		return APlat::StaticClass();
	}
	struct Z_Construct_UClass_APlat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_vertices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeOfPlate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SizeOfPlate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_kontrola_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_kontrola;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControlPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dlugoscFali_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dlugoscFali;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BezierSurface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlat_Buduj, "Buduj" }, // 2977359795
		{ &Z_Construct_UFunction_APlat_Faluj, "Faluj" }, // 920324206
		{ &Z_Construct_UFunction_APlat_GetVertices, "GetVertices" }, // 2316899080
		{ &Z_Construct_UFunction_APlat_Kalkuluj, "Kalkuluj" }, // 1077462569
		{ &Z_Construct_UFunction_APlat_Przesun, "Przesun" }, // 795320323
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlat_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Plat.h" },
		{ "ModuleRelativePath", "Plat.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlat_Statics::NewProp_mesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Plat.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlat_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlat, mesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlat_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlat_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlat_Statics::NewProp_vertices_Inner = { "vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlat_Statics::NewProp_vertices_MetaData[] = {
		{ "ModuleRelativePath", "Plat.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlat_Statics::NewProp_vertices = { "vertices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlat, vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlat_Statics::NewProp_vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlat_Statics::NewProp_vertices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlat_Statics::NewProp_MapSize_MetaData[] = {
		{ "Category", "Plat" },
		{ "ModuleRelativePath", "Plat.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlat_Statics::NewProp_MapSize = { "MapSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlat, MapSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_APlat_Statics::NewProp_MapSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlat_Statics::NewProp_MapSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlat_Statics::NewProp_SizeOfPlate_MetaData[] = {
		{ "Category", "Plat" },
		{ "ModuleRelativePath", "Plat.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlat_Statics::NewProp_SizeOfPlate = { "SizeOfPlate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlat, SizeOfPlate), METADATA_PARAMS(Z_Construct_UClass_APlat_Statics::NewProp_SizeOfPlate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlat_Statics::NewProp_SizeOfPlate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlat_Statics::NewProp_kontrola_MetaData[] = {
		{ "ModuleRelativePath", "Plat.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlat_Statics::NewProp_kontrola = { "kontrola", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlat, kontrola), METADATA_PARAMS(Z_Construct_UClass_APlat_Statics::NewProp_kontrola_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlat_Statics::NewProp_kontrola_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlat_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlat_Statics::NewProp_OutPoints_MetaData[] = {
		{ "ModuleRelativePath", "Plat.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlat_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlat, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlat_Statics::NewProp_OutPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlat_Statics::NewProp_OutPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlat_Statics::NewProp_ControlPoints_Inner = { "ControlPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlat_Statics::NewProp_ControlPoints_MetaData[] = {
		{ "ModuleRelativePath", "Plat.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlat_Statics::NewProp_ControlPoints = { "ControlPoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlat, ControlPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlat_Statics::NewProp_ControlPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlat_Statics::NewProp_ControlPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlat_Statics::NewProp_dlugoscFali_MetaData[] = {
		{ "Category", "Plat" },
		{ "ModuleRelativePath", "Plat.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlat_Statics::NewProp_dlugoscFali = { "dlugoscFali", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlat, dlugoscFali), METADATA_PARAMS(Z_Construct_UClass_APlat_Statics::NewProp_dlugoscFali_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlat_Statics::NewProp_dlugoscFali_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlat_Statics::NewProp_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlat_Statics::NewProp_vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlat_Statics::NewProp_vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlat_Statics::NewProp_MapSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlat_Statics::NewProp_SizeOfPlate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlat_Statics::NewProp_kontrola,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlat_Statics::NewProp_OutPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlat_Statics::NewProp_OutPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlat_Statics::NewProp_ControlPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlat_Statics::NewProp_ControlPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlat_Statics::NewProp_dlugoscFali,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlat_Statics::ClassParams = {
		&APlat::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlat_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlat, 3755397918);
	template<> BEZIERSURFACE_API UClass* StaticClass<APlat>()
	{
		return APlat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlat(Z_Construct_UClass_APlat, &APlat::StaticClass, TEXT("/Script/BezierSurface"), TEXT("APlat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
