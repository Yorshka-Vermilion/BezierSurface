// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEZIERSURFACE_Bezier_generated_h
#error "Bezier.generated.h already included, missing '#pragma once' in Bezier.h"
#endif
#define BEZIERSURFACE_Bezier_generated_h

#define BezierSurface_Source_BezierSurface_Bezier_h_15_SPARSE_DATA
#define BezierSurface_Source_BezierSurface_Bezier_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTest);


#define BezierSurface_Source_BezierSurface_Bezier_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTest);


#define BezierSurface_Source_BezierSurface_Bezier_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBezier(); \
	friend struct Z_Construct_UClass_UBezier_Statics; \
public: \
	DECLARE_CLASS(UBezier, UProceduralMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BezierSurface"), NO_API) \
	DECLARE_SERIALIZER(UBezier)


#define BezierSurface_Source_BezierSurface_Bezier_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBezier(); \
	friend struct Z_Construct_UClass_UBezier_Statics; \
public: \
	DECLARE_CLASS(UBezier, UProceduralMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BezierSurface"), NO_API) \
	DECLARE_SERIALIZER(UBezier)


#define BezierSurface_Source_BezierSurface_Bezier_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBezier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBezier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBezier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBezier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBezier(UBezier&&); \
	NO_API UBezier(const UBezier&); \
public:


#define BezierSurface_Source_BezierSurface_Bezier_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBezier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBezier(UBezier&&); \
	NO_API UBezier(const UBezier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBezier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBezier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBezier)


#define BezierSurface_Source_BezierSurface_Bezier_h_15_PRIVATE_PROPERTY_OFFSET
#define BezierSurface_Source_BezierSurface_Bezier_h_12_PROLOG
#define BezierSurface_Source_BezierSurface_Bezier_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BezierSurface_Source_BezierSurface_Bezier_h_15_PRIVATE_PROPERTY_OFFSET \
	BezierSurface_Source_BezierSurface_Bezier_h_15_SPARSE_DATA \
	BezierSurface_Source_BezierSurface_Bezier_h_15_RPC_WRAPPERS \
	BezierSurface_Source_BezierSurface_Bezier_h_15_INCLASS \
	BezierSurface_Source_BezierSurface_Bezier_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BezierSurface_Source_BezierSurface_Bezier_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BezierSurface_Source_BezierSurface_Bezier_h_15_PRIVATE_PROPERTY_OFFSET \
	BezierSurface_Source_BezierSurface_Bezier_h_15_SPARSE_DATA \
	BezierSurface_Source_BezierSurface_Bezier_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BezierSurface_Source_BezierSurface_Bezier_h_15_INCLASS_NO_PURE_DECLS \
	BezierSurface_Source_BezierSurface_Bezier_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEZIERSURFACE_API UClass* StaticClass<class UBezier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BezierSurface_Source_BezierSurface_Bezier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
