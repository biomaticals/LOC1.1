// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALOCCharacter;
#ifdef LOC_GABase_generated_h
#error "GABase.generated.h already included, missing '#pragma once' in GABase.h"
#endif
#define LOC_GABase_generated_h

#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h_19_SPARSE_DATA
#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCharacterInfo);


#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCharacterInfo);


#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGABase(); \
	friend struct Z_Construct_UClass_UGABase_Statics; \
public: \
	DECLARE_CLASS(UGABase, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LOC"), NO_API) \
	DECLARE_SERIALIZER(UGABase)


#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUGABase(); \
	friend struct Z_Construct_UClass_UGABase_Statics; \
public: \
	DECLARE_CLASS(UGABase, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LOC"), NO_API) \
	DECLARE_SERIALIZER(UGABase)


#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGABase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGABase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGABase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGABase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGABase(UGABase&&); \
	NO_API UGABase(const UGABase&); \
public:


#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGABase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGABase(UGABase&&); \
	NO_API UGABase(const UGABase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGABase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGABase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGABase)


#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h_19_PRIVATE_PROPERTY_OFFSET
#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h_16_PROLOG
#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h_19_PRIVATE_PROPERTY_OFFSET \
	LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h_19_SPARSE_DATA \
	LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h_19_RPC_WRAPPERS \
	LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h_19_INCLASS \
	LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h_19_PRIVATE_PROPERTY_OFFSET \
	LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h_19_SPARSE_DATA \
	LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h_19_INCLASS_NO_PURE_DECLS \
	LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOC_API UClass* StaticClass<class UGABase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LOC_Source_GameplayAbilitySystem_GameplayAbility_Public_GABase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
