// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FVector2D;
class UMaterial;
#ifdef BEZIERSURFACE_Plat_generated_h
#error "Plat.generated.h already included, missing '#pragma once' in Plat.h"
#endif
#define BEZIERSURFACE_Plat_generated_h

#define BezierSurface_Source_BezierSurface_Plat_h_13_SPARSE_DATA
#define BezierSurface_Source_BezierSurface_Plat_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execKalkuluj); \
	DECLARE_FUNCTION(execPrzesun); \
	DECLARE_FUNCTION(execGetVertices); \
	DECLARE_FUNCTION(execFaluj); \
	DECLARE_FUNCTION(execBuduj);


#define BezierSurface_Source_BezierSurface_Plat_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execKalkuluj); \
	DECLARE_FUNCTION(execPrzesun); \
	DECLARE_FUNCTION(execGetVertices); \
	DECLARE_FUNCTION(execFaluj); \
	DECLARE_FUNCTION(execBuduj);


#define BezierSurface_Source_BezierSurface_Plat_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlat(); \
	friend struct Z_Construct_UClass_APlat_Statics; \
public: \
	DECLARE_CLASS(APlat, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BezierSurface"), NO_API) \
	DECLARE_SERIALIZER(APlat)


#define BezierSurface_Source_BezierSurface_Plat_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPlat(); \
	friend struct Z_Construct_UClass_APlat_Statics; \
public: \
	DECLARE_CLASS(APlat, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BezierSurface"), NO_API) \
	DECLARE_SERIALIZER(APlat)


#define BezierSurface_Source_BezierSurface_Plat_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlat(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlat(APlat&&); \
	NO_API APlat(const APlat&); \
public:


#define BezierSurface_Source_BezierSurface_Plat_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlat(APlat&&); \
	NO_API APlat(const APlat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlat); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlat)


#define BezierSurface_Source_BezierSurface_Plat_h_13_PRIVATE_PROPERTY_OFFSET
#define BezierSurface_Source_BezierSurface_Plat_h_10_PROLOG
#define BezierSurface_Source_BezierSurface_Plat_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BezierSurface_Source_BezierSurface_Plat_h_13_PRIVATE_PROPERTY_OFFSET \
	BezierSurface_Source_BezierSurface_Plat_h_13_SPARSE_DATA \
	BezierSurface_Source_BezierSurface_Plat_h_13_RPC_WRAPPERS \
	BezierSurface_Source_BezierSurface_Plat_h_13_INCLASS \
	BezierSurface_Source_BezierSurface_Plat_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BezierSurface_Source_BezierSurface_Plat_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BezierSurface_Source_BezierSurface_Plat_h_13_PRIVATE_PROPERTY_OFFSET \
	BezierSurface_Source_BezierSurface_Plat_h_13_SPARSE_DATA \
	BezierSurface_Source_BezierSurface_Plat_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BezierSurface_Source_BezierSurface_Plat_h_13_INCLASS_NO_PURE_DECLS \
	BezierSurface_Source_BezierSurface_Plat_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEZIERSURFACE_API UClass* StaticClass<class APlat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BezierSurface_Source_BezierSurface_Plat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
