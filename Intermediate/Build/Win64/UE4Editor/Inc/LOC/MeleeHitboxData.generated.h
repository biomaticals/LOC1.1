// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMeleeHitSphereDefinition;
#ifdef LOC_MeleeHitboxData_generated_h
#error "MeleeHitboxData.generated.h already included, missing '#pragma once' in MeleeHitboxData.h"
#endif
#define LOC_MeleeHitboxData_generated_h

#define LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics; \
	LOC_API static class UScriptStruct* StaticStruct();


template<> LOC_API UScriptStruct* StaticStruct<struct FMeleeHitSphereDefinition>();

#define LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_32_SPARSE_DATA
#define LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMeleeHitSpheres);


#define LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMeleeHitSpheres);


#define LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeleeHitboxData(); \
	friend struct Z_Construct_UClass_UMeleeHitboxData_Statics; \
public: \
	DECLARE_CLASS(UMeleeHitboxData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LOC"), NO_API) \
	DECLARE_SERIALIZER(UMeleeHitboxData)


#define LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUMeleeHitboxData(); \
	friend struct Z_Construct_UClass_UMeleeHitboxData_Statics; \
public: \
	DECLARE_CLASS(UMeleeHitboxData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LOC"), NO_API) \
	DECLARE_SERIALIZER(UMeleeHitboxData)


#define LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeleeHitboxData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeleeHitboxData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeleeHitboxData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeleeHitboxData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeleeHitboxData(UMeleeHitboxData&&); \
	NO_API UMeleeHitboxData(const UMeleeHitboxData&); \
public:


#define LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeleeHitboxData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeleeHitboxData(UMeleeHitboxData&&); \
	NO_API UMeleeHitboxData(const UMeleeHitboxData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeleeHitboxData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeleeHitboxData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeleeHitboxData)


#define LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_32_PRIVATE_PROPERTY_OFFSET
#define LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_29_PROLOG
#define LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_32_PRIVATE_PROPERTY_OFFSET \
	LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_32_SPARSE_DATA \
	LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_32_RPC_WRAPPERS \
	LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_32_INCLASS \
	LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_32_PRIVATE_PROPERTY_OFFSET \
	LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_32_SPARSE_DATA \
	LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_32_INCLASS_NO_PURE_DECLS \
	LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOC_API UClass* StaticClass<class UMeleeHitboxData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LOC_Source_MeleeHitboxes_public_MeleeHitboxData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
