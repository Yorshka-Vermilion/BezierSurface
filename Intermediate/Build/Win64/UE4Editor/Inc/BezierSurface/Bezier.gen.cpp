// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BezierSurface/Bezier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBezier() {}
// Cross Module References
	BEZIERSURFACE_API UClass* Z_Construct_UClass_UBezier_NoRegister();
	BEZIERSURFACE_API UClass* Z_Construct_UClass_UBezier();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent();
	UPackage* Z_Construct_UPackage__Script_BezierSurface();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(UBezier::execTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Test();
		P_NATIVE_END;
	}
	void UBezier::StaticRegisterNativesUBezier()
	{
		UClass* Class = UBezier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Test", &UBezier::execTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBezier_Test_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBezier_Test_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bezier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBezier_Test_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBezier, nullptr, "Test", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBezier_Test_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBezier_Test_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBezier_Test()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBezier_Test_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBezier_NoRegister()
	{
		return UBezier::StaticClass();
	}
	struct Z_Construct_UClass_UBezier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_proceduralMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_proceduralMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeOfPlate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SizeOfPlate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBezier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProceduralMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BezierSurface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBezier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBezier_Test, "Test" }, // 2408275017
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBezier_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "Bezier.h" },
		{ "ModuleRelativePath", "Bezier.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBezier_Statics::NewProp_proceduralMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bezier.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBezier_Statics::NewProp_proceduralMesh = { "proceduralMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBezier, proceduralMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBezier_Statics::NewProp_proceduralMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBezier_Statics::NewProp_proceduralMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBezier_Statics::NewProp_MapSize_MetaData[] = {
		{ "Category", "Bezier" },
		{ "ModuleRelativePath", "Bezier.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBezier_Statics::NewProp_MapSize = { "MapSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBezier, MapSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBezier_Statics::NewProp_MapSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBezier_Statics::NewProp_MapSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBezier_Statics::NewProp_SizeOfPlate_MetaData[] = {
		{ "Category", "Bezier" },
		{ "ModuleRelativePath", "Bezier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBezier_Statics::NewProp_SizeOfPlate = { "SizeOfPlate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBezier, SizeOfPlate), METADATA_PARAMS(Z_Construct_UClass_UBezier_Statics::NewProp_SizeOfPlate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBezier_Statics::NewProp_SizeOfPlate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBezier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBezier_Statics::NewProp_proceduralMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBezier_Statics::NewProp_MapSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBezier_Statics::NewProp_SizeOfPlate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBezier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBezier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBezier_Statics::ClassParams = {
		&UBezier::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBezier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBezier_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBezier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBezier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBezier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBezier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBezier, 2223521425);
	template<> BEZIERSURFACE_API UClass* StaticClass<UBezier>()
	{
		return UBezier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBezier(Z_Construct_UClass_UBezier, &UBezier::StaticClass, TEXT("/Script/BezierSurface"), TEXT("UBezier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBezier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
