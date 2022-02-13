// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef LOC_Zone_generated_h
#error "Zone.generated.h already included, missing '#pragma once' in Zone.h"
#endif
#define LOC_Zone_generated_h

#define LOC_Source_Zone_Public_Zone_h_22_SPARSE_DATA
#define LOC_Source_Zone_Public_Zone_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetZoneNameTag); \
	DECLARE_FUNCTION(execOnActorBeginOverlap);


#define LOC_Source_Zone_Public_Zone_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetZoneNameTag); \
	DECLARE_FUNCTION(execOnActorBeginOverlap);


#define LOC_Source_Zone_Public_Zone_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZone(); \
	friend struct Z_Construct_UClass_AZone_Statics; \
public: \
	DECLARE_CLASS(AZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LOC"), NO_API) \
	DECLARE_SERIALIZER(AZone)


#define LOC_Source_Zone_Public_Zone_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAZone(); \
	friend struct Z_Construct_UClass_AZone_Statics; \
public: \
	DECLARE_CLASS(AZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LOC"), NO_API) \
	DECLARE_SERIALIZER(AZone)


#define LOC_Source_Zone_Public_Zone_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZone(AZone&&); \
	NO_API AZone(const AZone&); \
public:


#define LOC_Source_Zone_Public_Zone_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZone(AZone&&); \
	NO_API AZone(const AZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZone)


#define LOC_Source_Zone_Public_Zone_h_22_PRIVATE_PROPERTY_OFFSET
#define LOC_Source_Zone_Public_Zone_h_19_PROLOG
#define LOC_Source_Zone_Public_Zone_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LOC_Source_Zone_Public_Zone_h_22_PRIVATE_PROPERTY_OFFSET \
	LOC_Source_Zone_Public_Zone_h_22_SPARSE_DATA \
	LOC_Source_Zone_Public_Zone_h_22_RPC_WRAPPERS \
	LOC_Source_Zone_Public_Zone_h_22_INCLASS \
	LOC_Source_Zone_Public_Zone_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LOC_Source_Zone_Public_Zone_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LOC_Source_Zone_Public_Zone_h_22_PRIVATE_PROPERTY_OFFSET \
	LOC_Source_Zone_Public_Zone_h_22_SPARSE_DATA \
	LOC_Source_Zone_Public_Zone_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	LOC_Source_Zone_Public_Zone_h_22_INCLASS_NO_PURE_DECLS \
	LOC_Source_Zone_Public_Zone_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOC_API UClass* StaticClass<class AZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LOC_Source_Zone_Public_Zone_h


#define FOREACH_ENUM_EZONE(op) \
	op(EZone::Zone) \
	op(EZone::DangerZone) \
	op(EZone::ProhibitedZone) \
	op(EZone::SafetyZone) 

enum class EZone : uint8;
template<> LOC_API UEnum* StaticEnum<EZone>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
