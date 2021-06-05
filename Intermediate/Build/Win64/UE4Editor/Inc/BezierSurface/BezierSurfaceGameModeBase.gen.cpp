// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BezierSurface/BezierSurfaceGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBezierSurfaceGameModeBase() {}
// Cross Module References
	BEZIERSURFACE_API UClass* Z_Construct_UClass_ABezierSurfaceGameModeBase_NoRegister();
	BEZIERSURFACE_API UClass* Z_Construct_UClass_ABezierSurfaceGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BezierSurface();
// End Cross Module References
	void ABezierSurfaceGameModeBase::StaticRegisterNativesABezierSurfaceGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABezierSurfaceGameModeBase_NoRegister()
	{
		return ABezierSurfaceGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABezierSurfaceGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABezierSurfaceGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BezierSurface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierSurfaceGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BezierSurfaceGameModeBase.h" },
		{ "ModuleRelativePath", "BezierSurfaceGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABezierSurfaceGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABezierSurfaceGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABezierSurfaceGameModeBase_Statics::ClassParams = {
		&ABezierSurfaceGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABezierSurfaceGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABezierSurfaceGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABezierSurfaceGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABezierSurfaceGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABezierSurfaceGameModeBase, 823315048);
	template<> BEZIERSURFACE_API UClass* StaticClass<ABezierSurfaceGameModeBase>()
	{
		return ABezierSurfaceGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABezierSurfaceGameModeBase(Z_Construct_UClass_ABezierSurfaceGameModeBase, &ABezierSurfaceGameModeBase::StaticClass, TEXT("/Script/BezierSurface"), TEXT("ABezierSurfaceGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABezierSurfaceGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
