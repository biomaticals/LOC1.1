// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOC_LOCPlayerCharacter_generated_h
#error "LOCPlayerCharacter.generated.h already included, missing '#pragma once' in LOCPlayerCharacter.h"
#endif
#define LOC_LOCPlayerCharacter_generated_h

#define LOC_Source_Character_Public_LOCPlayerCharacter_h_13_SPARSE_DATA
#define LOC_Source_Character_Public_LOCPlayerCharacter_h_13_RPC_WRAPPERS
#define LOC_Source_Character_Public_LOCPlayerCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define LOC_Source_Character_Public_LOCPlayerCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALOCPlayerCharacter(); \
	friend struct Z_Construct_UClass_ALOCPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ALOCPlayerCharacter, ALOCCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LOC"), NO_API) \
	DECLARE_SERIALIZER(ALOCPlayerCharacter)


#define LOC_Source_Character_Public_LOCPlayerCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesALOCPlayerCharacter(); \
	friend struct Z_Construct_UClass_ALOCPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ALOCPlayerCharacter, ALOCCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LOC"), NO_API) \
	DECLARE_SERIALIZER(ALOCPlayerCharacter)


#define LOC_Source_Character_Public_LOCPlayerCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALOCPlayerCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALOCPlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALOCPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALOCPlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALOCPlayerCharacter(ALOCPlayerCharacter&&); \
	NO_API ALOCPlayerCharacter(const ALOCPlayerCharacter&); \
public:


#define LOC_Source_Character_Public_LOCPlayerCharacter_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALOCPlayerCharacter() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALOCPlayerCharacter(ALOCPlayerCharacter&&); \
	NO_API ALOCPlayerCharacter(const ALOCPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALOCPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALOCPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALOCPlayerCharacter)


#define LOC_Source_Character_Public_LOCPlayerCharacter_h_13_PRIVATE_PROPERTY_OFFSET
#define LOC_Source_Character_Public_LOCPlayerCharacter_h_10_PROLOG
#define LOC_Source_Character_Public_LOCPlayerCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LOC_Source_Character_Public_LOCPlayerCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	LOC_Source_Character_Public_LOCPlayerCharacter_h_13_SPARSE_DATA \
	LOC_Source_Character_Public_LOCPlayerCharacter_h_13_RPC_WRAPPERS \
	LOC_Source_Character_Public_LOCPlayerCharacter_h_13_INCLASS \
	LOC_Source_Character_Public_LOCPlayerCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LOC_Source_Character_Public_LOCPlayerCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LOC_Source_Character_Public_LOCPlayerCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	LOC_Source_Character_Public_LOCPlayerCharacter_h_13_SPARSE_DATA \
	LOC_Source_Character_Public_LOCPlayerCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	LOC_Source_Character_Public_LOCPlayerCharacter_h_13_INCLASS_NO_PURE_DECLS \
	LOC_Source_Character_Public_LOCPlayerCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOC_API UClass* StaticClass<class ALOCPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LOC_Source_Character_Public_LOCPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
