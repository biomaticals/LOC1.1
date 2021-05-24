// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayEffectSpecHandle;
struct FGameplayAbilityTargetDataHandle;
struct FGameplayTag;
struct FGameplayTagContainer;
class UGameplayAbility;
#ifdef LOC_LOCCharacter_generated_h
#error "LOCCharacter.generated.h already included, missing '#pragma once' in LOCCharacter.h"
#endif
#define LOC_LOCCharacter_generated_h

#define LOC_Source_LOC_Public_LOCCharacter_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLOCAttributeData_Statics; \
	LOC_API static class UScriptStruct* StaticStruct();


template<> LOC_API UScriptStruct* StaticStruct<struct FLOCAttributeData>();

#define LOC_Source_LOC_Public_LOCCharacter_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics; \
	LOC_API static class UScriptStruct* StaticStruct();


template<> LOC_API UScriptStruct* StaticStruct<struct FLOCAttributeDetailData>();

#define LOC_Source_LOC_Public_LOCCharacter_h_41_SPARSE_DATA
#define LOC_Source_LOC_Public_LOCCharacter_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMaxArmor); \
	DECLARE_FUNCTION(execSetArmor); \
	DECLARE_FUNCTION(execSetMaxWeaponDamage); \
	DECLARE_FUNCTION(execSetWeaponDamage); \
	DECLARE_FUNCTION(execSetMaxSpeed); \
	DECLARE_FUNCTION(execSetSpeed); \
	DECLARE_FUNCTION(execSetMaxIntellect); \
	DECLARE_FUNCTION(execSetIntellect); \
	DECLARE_FUNCTION(execSetMaxEndurance); \
	DECLARE_FUNCTION(execSetEndurance); \
	DECLARE_FUNCTION(execSetMaxStrength); \
	DECLARE_FUNCTION(execSetStrength); \
	DECLARE_FUNCTION(execSetMaxCriticalProb); \
	DECLARE_FUNCTION(execSetCriticalProb); \
	DECLARE_FUNCTION(execSetMaxCritical); \
	DECLARE_FUNCTION(execSetCritical); \
	DECLARE_FUNCTION(execSetMaxStaminaRegen); \
	DECLARE_FUNCTION(execSetStaminaRegen); \
	DECLARE_FUNCTION(execSetMaxStamina); \
	DECLARE_FUNCTION(execSetStamina); \
	DECLARE_FUNCTION(execSetMaxManaRegen); \
	DECLARE_FUNCTION(execSetManaRegen); \
	DECLARE_FUNCTION(execSetMaxMana); \
	DECLARE_FUNCTION(execSetMana); \
	DECLARE_FUNCTION(execSetMaxHealthRegen); \
	DECLARE_FUNCTION(execSetHealthRegen); \
	DECLARE_FUNCTION(execSetMaxHealth); \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execSetMaxExperience); \
	DECLARE_FUNCTION(execSetExperience); \
	DECLARE_FUNCTION(execSetLevel); \
	DECLARE_FUNCTION(execGetMaxArmor); \
	DECLARE_FUNCTION(execGetArmor); \
	DECLARE_FUNCTION(execGetMaxWeaponDamage); \
	DECLARE_FUNCTION(execGetWeaponDamage); \
	DECLARE_FUNCTION(execGetMaxSpeed); \
	DECLARE_FUNCTION(execGetSpeed); \
	DECLARE_FUNCTION(execGetMaxIntellect); \
	DECLARE_FUNCTION(execGetIntellect); \
	DECLARE_FUNCTION(execGetMaxEndurance); \
	DECLARE_FUNCTION(execGetEndurance); \
	DECLARE_FUNCTION(execGetMaxStrength); \
	DECLARE_FUNCTION(execGetStrength); \
	DECLARE_FUNCTION(execGetMaxCriticalProb); \
	DECLARE_FUNCTION(execGetCriticalProb); \
	DECLARE_FUNCTION(execGetMaxCritical); \
	DECLARE_FUNCTION(execGetCritical); \
	DECLARE_FUNCTION(execGetMaxStaminaRegen); \
	DECLARE_FUNCTION(execGetStaminaRegen); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetMaxManaRegen); \
	DECLARE_FUNCTION(execGetManaRegen); \
	DECLARE_FUNCTION(execGetMaxMana); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execGetMaxHealthRegen); \
	DECLARE_FUNCTION(execGetHealthRegen); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetMaxExperience); \
	DECLARE_FUNCTION(execGetExperience); \
	DECLARE_FUNCTION(execGetLevel); \
	DECLARE_FUNCTION(execLoadAttributeSetFromJson); \
	DECLARE_FUNCTION(execSaveAttributeSetToJson); \
	DECLARE_FUNCTION(execApplyGETOTargetData); \
	DECLARE_FUNCTION(execRemoveLooseGameplayTags); \
	DECLARE_FUNCTION(execAddLooseGameplayTag); \
	DECLARE_FUNCTION(execChangeAbilityLevelWithTags); \
	DECLARE_FUNCTION(execRemoveAbilityWithTags); \
	DECLARE_FUNCTION(execInitializeAbilityMulti); \
	DECLARE_FUNCTION(execInitializeAbility); \
	DECLARE_FUNCTION(execCancelAbilityWithWithoutTags); \
	DECLARE_FUNCTION(execCancelAbilityWithTags); \
	DECLARE_FUNCTION(execActivateAbility); \
	DECLARE_FUNCTION(execGrantAbility);


#define LOC_Source_LOC_Public_LOCCharacter_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMaxArmor); \
	DECLARE_FUNCTION(execSetArmor); \
	DECLARE_FUNCTION(execSetMaxWeaponDamage); \
	DECLARE_FUNCTION(execSetWeaponDamage); \
	DECLARE_FUNCTION(execSetMaxSpeed); \
	DECLARE_FUNCTION(execSetSpeed); \
	DECLARE_FUNCTION(execSetMaxIntellect); \
	DECLARE_FUNCTION(execSetIntellect); \
	DECLARE_FUNCTION(execSetMaxEndurance); \
	DECLARE_FUNCTION(execSetEndurance); \
	DECLARE_FUNCTION(execSetMaxStrength); \
	DECLARE_FUNCTION(execSetStrength); \
	DECLARE_FUNCTION(execSetMaxCriticalProb); \
	DECLARE_FUNCTION(execSetCriticalProb); \
	DECLARE_FUNCTION(execSetMaxCritical); \
	DECLARE_FUNCTION(execSetCritical); \
	DECLARE_FUNCTION(execSetMaxStaminaRegen); \
	DECLARE_FUNCTION(execSetStaminaRegen); \
	DECLARE_FUNCTION(execSetMaxStamina); \
	DECLARE_FUNCTION(execSetStamina); \
	DECLARE_FUNCTION(execSetMaxManaRegen); \
	DECLARE_FUNCTION(execSetManaRegen); \
	DECLARE_FUNCTION(execSetMaxMana); \
	DECLARE_FUNCTION(execSetMana); \
	DECLARE_FUNCTION(execSetMaxHealthRegen); \
	DECLARE_FUNCTION(execSetHealthRegen); \
	DECLARE_FUNCTION(execSetMaxHealth); \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execSetMaxExperience); \
	DECLARE_FUNCTION(execSetExperience); \
	DECLARE_FUNCTION(execSetLevel); \
	DECLARE_FUNCTION(execGetMaxArmor); \
	DECLARE_FUNCTION(execGetArmor); \
	DECLARE_FUNCTION(execGetMaxWeaponDamage); \
	DECLARE_FUNCTION(execGetWeaponDamage); \
	DECLARE_FUNCTION(execGetMaxSpeed); \
	DECLARE_FUNCTION(execGetSpeed); \
	DECLARE_FUNCTION(execGetMaxIntellect); \
	DECLARE_FUNCTION(execGetIntellect); \
	DECLARE_FUNCTION(execGetMaxEndurance); \
	DECLARE_FUNCTION(execGetEndurance); \
	DECLARE_FUNCTION(execGetMaxStrength); \
	DECLARE_FUNCTION(execGetStrength); \
	DECLARE_FUNCTION(execGetMaxCriticalProb); \
	DECLARE_FUNCTION(execGetCriticalProb); \
	DECLARE_FUNCTION(execGetMaxCritical); \
	DECLARE_FUNCTION(execGetCritical); \
	DECLARE_FUNCTION(execGetMaxStaminaRegen); \
	DECLARE_FUNCTION(execGetStaminaRegen); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetMaxManaRegen); \
	DECLARE_FUNCTION(execGetManaRegen); \
	DECLARE_FUNCTION(execGetMaxMana); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execGetMaxHealthRegen); \
	DECLARE_FUNCTION(execGetHealthRegen); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetMaxExperience); \
	DECLARE_FUNCTION(execGetExperience); \
	DECLARE_FUNCTION(execGetLevel); \
	DECLARE_FUNCTION(execLoadAttributeSetFromJson); \
	DECLARE_FUNCTION(execSaveAttributeSetToJson); \
	DECLARE_FUNCTION(execApplyGETOTargetData); \
	DECLARE_FUNCTION(execRemoveLooseGameplayTags); \
	DECLARE_FUNCTION(execAddLooseGameplayTag); \
	DECLARE_FUNCTION(execChangeAbilityLevelWithTags); \
	DECLARE_FUNCTION(execRemoveAbilityWithTags); \
	DECLARE_FUNCTION(execInitializeAbilityMulti); \
	DECLARE_FUNCTION(execInitializeAbility); \
	DECLARE_FUNCTION(execCancelAbilityWithWithoutTags); \
	DECLARE_FUNCTION(execCancelAbilityWithTags); \
	DECLARE_FUNCTION(execActivateAbility); \
	DECLARE_FUNCTION(execGrantAbility);


#define LOC_Source_LOC_Public_LOCCharacter_h_41_EVENT_PARMS \
	struct LOCCharacter_eventOnArmorChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnCriticalChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnCriticalProbChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnEnduranceChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnExperienceChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnHealthChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnHealthRegenChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnIntellectChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnLevelChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnManaChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnManaRegenChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnMaxArmorChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnMaxCriticalChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnMaxCriticalProbChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnMaxEnduranceChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnMaxExperienceChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnMaxHealthChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnMaxHealthRegenChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnMaxIntellectChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnMaxManaChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnMaxManaRegenChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnMaxSpeedChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnMaxStaminaChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnMaxStaminaRegenChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnMaxStrengthChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnMaxWeaponDamageChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnSpeedChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnStaminaChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnStaminaRegenChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnStrengthChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	}; \
	struct LOCCharacter_eventOnWeaponDamageChanged_Parms \
	{ \
		float oldValue; \
		float newValue; \
	};


#define LOC_Source_LOC_Public_LOCCharacter_h_41_CALLBACK_WRAPPERS
#define LOC_Source_LOC_Public_LOCCharacter_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALOCCharacter(); \
	friend struct Z_Construct_UClass_ALOCCharacter_Statics; \
public: \
	DECLARE_CLASS(ALOCCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LOC"), NO_API) \
	DECLARE_SERIALIZER(ALOCCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ALOCCharacter*>(this); }


#define LOC_Source_LOC_Public_LOCCharacter_h_41_INCLASS \
private: \
	static void StaticRegisterNativesALOCCharacter(); \
	friend struct Z_Construct_UClass_ALOCCharacter_Statics; \
public: \
	DECLARE_CLASS(ALOCCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LOC"), NO_API) \
	DECLARE_SERIALIZER(ALOCCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ALOCCharacter*>(this); }


#define LOC_Source_LOC_Public_LOCCharacter_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALOCCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALOCCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALOCCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALOCCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALOCCharacter(ALOCCharacter&&); \
	NO_API ALOCCharacter(const ALOCCharacter&); \
public:


#define LOC_Source_LOC_Public_LOCCharacter_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALOCCharacter(ALOCCharacter&&); \
	NO_API ALOCCharacter(const ALOCCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALOCCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALOCCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALOCCharacter)


#define LOC_Source_LOC_Public_LOCCharacter_h_41_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ALOCCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ALOCCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__AttributeSet() { return STRUCT_OFFSET(ALOCCharacter, AttributeSet); }


#define LOC_Source_LOC_Public_LOCCharacter_h_38_PROLOG \
	LOC_Source_LOC_Public_LOCCharacter_h_41_EVENT_PARMS


#define LOC_Source_LOC_Public_LOCCharacter_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LOC_Source_LOC_Public_LOCCharacter_h_41_PRIVATE_PROPERTY_OFFSET \
	LOC_Source_LOC_Public_LOCCharacter_h_41_SPARSE_DATA \
	LOC_Source_LOC_Public_LOCCharacter_h_41_RPC_WRAPPERS \
	LOC_Source_LOC_Public_LOCCharacter_h_41_CALLBACK_WRAPPERS \
	LOC_Source_LOC_Public_LOCCharacter_h_41_INCLASS \
	LOC_Source_LOC_Public_LOCCharacter_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LOC_Source_LOC_Public_LOCCharacter_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LOC_Source_LOC_Public_LOCCharacter_h_41_PRIVATE_PROPERTY_OFFSET \
	LOC_Source_LOC_Public_LOCCharacter_h_41_SPARSE_DATA \
	LOC_Source_LOC_Public_LOCCharacter_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	LOC_Source_LOC_Public_LOCCharacter_h_41_CALLBACK_WRAPPERS \
	LOC_Source_LOC_Public_LOCCharacter_h_41_INCLASS_NO_PURE_DECLS \
	LOC_Source_LOC_Public_LOCCharacter_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOC_API UClass* StaticClass<class ALOCCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LOC_Source_LOC_Public_LOCCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
