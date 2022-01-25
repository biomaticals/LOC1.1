// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayEventData;
#ifdef LOC_GAGreystoneMakeway_generated_h
#error "GAGreystoneMakeway.generated.h already included, missing '#pragma once' in GAGreystoneMakeway.h"
#endif
#define LOC_GAGreystoneMakeway_generated_h

#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h_16_SPARSE_DATA
#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execTimerFunction); \
	DECLARE_FUNCTION(execOnHitStart); \
	DECLARE_FUNCTION(execOnCancelled);


#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execTimerFunction); \
	DECLARE_FUNCTION(execOnHitStart); \
	DECLARE_FUNCTION(execOnCancelled);


#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAGreystoneMakeway(); \
	friend struct Z_Construct_UClass_UGAGreystoneMakeway_Statics; \
public: \
	DECLARE_CLASS(UGAGreystoneMakeway, UGASelfCastBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LOC"), NO_API) \
	DECLARE_SERIALIZER(UGAGreystoneMakeway)


#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGAGreystoneMakeway(); \
	friend struct Z_Construct_UClass_UGAGreystoneMakeway_Statics; \
public: \
	DECLARE_CLASS(UGAGreystoneMakeway, UGASelfCastBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LOC"), NO_API) \
	DECLARE_SERIALIZER(UGAGreystoneMakeway)


#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAGreystoneMakeway(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAGreystoneMakeway) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAGreystoneMakeway); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAGreystoneMakeway); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAGreystoneMakeway(UGAGreystoneMakeway&&); \
	NO_API UGAGreystoneMakeway(const UGAGreystoneMakeway&); \
public:


#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAGreystoneMakeway(UGAGreystoneMakeway&&); \
	NO_API UGAGreystoneMakeway(const UGAGreystoneMakeway&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAGreystoneMakeway); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAGreystoneMakeway); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGAGreystoneMakeway)


#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TimerHandle() { return STRUCT_OFFSET(UGAGreystoneMakeway, TimerHandle); }


#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h_12_PROLOG
#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h_16_PRIVATE_PROPERTY_OFFSET \
	LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h_16_SPARSE_DATA \
	LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h_16_RPC_WRAPPERS \
	LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h_16_INCLASS \
	LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h_16_PRIVATE_PROPERTY_OFFSET \
	LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h_16_SPARSE_DATA \
	LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h_16_INCLASS_NO_PURE_DECLS \
	LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOC_API UClass* StaticClass<class UGAGreystoneMakeway>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GAGreystoneMakeway_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
