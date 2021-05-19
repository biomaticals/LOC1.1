// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LOC/Public/LOCCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLOCCharacter() {}
// Cross Module References
	LOC_API UScriptStruct* Z_Construct_UScriptStruct_FLOCAttributeData();
	UPackage* Z_Construct_UPackage__Script_LOC();
	LOC_API UScriptStruct* Z_Construct_UScriptStruct_FLOCAttributeDetailData();
	LOC_API UClass* Z_Construct_UClass_ALOCCharacter_NoRegister();
	LOC_API UClass* Z_Construct_UClass_ALOCCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	LOC_API UClass* Z_Construct_UClass_ULOCAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FLOCAttributeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOC_API uint32 Get_Z_Construct_UScriptStruct_FLOCAttributeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLOCAttributeData, Z_Construct_UPackage__Script_LOC(), TEXT("LOCAttributeData"), sizeof(FLOCAttributeData), Get_Z_Construct_UScriptStruct_FLOCAttributeData_Hash());
	}
	return Singleton;
}
template<> LOC_API UScriptStruct* StaticStruct<FLOCAttributeData>()
{
	return FLOCAttributeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLOCAttributeData(FLOCAttributeData::StaticStruct, TEXT("/Script/LOC"), TEXT("LOCAttributeData"), false, nullptr, nullptr);
static struct FScriptStruct_LOC_StaticRegisterNativesFLOCAttributeData
{
	FScriptStruct_LOC_StaticRegisterNativesFLOCAttributeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LOCAttributeData")),new UScriptStruct::TCppStructOps<FLOCAttributeData>);
	}
} ScriptStruct_LOC_StaticRegisterNativesFLOCAttributeData;
	struct Z_Construct_UScriptStruct_FLOCAttributeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Details_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Details_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Details;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLOCAttributeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLOCAttributeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLOCAttributeData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLOCAttributeData_Statics::NewProp_Details_Inner = { "Details", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLOCAttributeDetailData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLOCAttributeData_Statics::NewProp_Details_MetaData[] = {
		{ "Category", "JsonData" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLOCAttributeData_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLOCAttributeData, Details), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLOCAttributeData_Statics::NewProp_Details_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLOCAttributeData_Statics::NewProp_Details_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLOCAttributeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLOCAttributeData_Statics::NewProp_Details_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLOCAttributeData_Statics::NewProp_Details,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLOCAttributeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LOC,
		nullptr,
		&NewStructOps,
		"LOCAttributeData",
		sizeof(FLOCAttributeData),
		alignof(FLOCAttributeData),
		Z_Construct_UScriptStruct_FLOCAttributeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLOCAttributeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLOCAttributeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLOCAttributeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLOCAttributeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLOCAttributeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LOC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LOCAttributeData"), sizeof(FLOCAttributeData), Get_Z_Construct_UScriptStruct_FLOCAttributeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLOCAttributeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLOCAttributeData_Hash() { return 3570647487U; }
class UScriptStruct* FLOCAttributeDetailData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOC_API uint32 Get_Z_Construct_UScriptStruct_FLOCAttributeDetailData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLOCAttributeDetailData, Z_Construct_UPackage__Script_LOC(), TEXT("LOCAttributeDetailData"), sizeof(FLOCAttributeDetailData), Get_Z_Construct_UScriptStruct_FLOCAttributeDetailData_Hash());
	}
	return Singleton;
}
template<> LOC_API UScriptStruct* StaticStruct<FLOCAttributeDetailData>()
{
	return FLOCAttributeDetailData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLOCAttributeDetailData(FLOCAttributeDetailData::StaticStruct, TEXT("/Script/LOC"), TEXT("LOCAttributeDetailData"), false, nullptr, nullptr);
static struct FScriptStruct_LOC_StaticRegisterNativesFLOCAttributeDetailData
{
	FScriptStruct_LOC_StaticRegisterNativesFLOCAttributeDetailData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LOCAttributeDetailData")),new UScriptStruct::TCppStructOps<FLOCAttributeDetailData>);
	}
} ScriptStruct_LOC_StaticRegisterNativesFLOCAttributeDetailData;
	struct Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLOCAttributeDetailData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "JsonData" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLOCAttributeDetailData, AttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "Category", "JsonData" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLOCAttributeDetailData, AttributeValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::NewProp_AttributeValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::NewProp_AttributeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::NewProp_AttributeValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LOC,
		nullptr,
		&NewStructOps,
		"LOCAttributeDetailData",
		sizeof(FLOCAttributeDetailData),
		alignof(FLOCAttributeDetailData),
		Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLOCAttributeDetailData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLOCAttributeDetailData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LOC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LOCAttributeDetailData"), sizeof(FLOCAttributeDetailData), Get_Z_Construct_UScriptStruct_FLOCAttributeDetailData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLOCAttributeDetailData_Hash() { return 2288009752U; }
	DEFINE_FUNCTION(ALOCCharacter::execCancelAbilityWithTags)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_CancelWithTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAbilityWithTags(Z_Param_CancelWithTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execActivateAbility)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InputCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateAbility(Z_Param_InputCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGrantAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_Level);
		P_GET_PROPERTY(FIntProperty,Z_Param_InputCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrantAbility(Z_Param_AbilityClass,Z_Param_Level,Z_Param_InputCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetMaxArmor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxArmor(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetArmor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArmor(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetMaxWeaponDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxWeaponDamage(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetWeaponDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWeaponDamage(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetMaxSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxSpeed(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpeed(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetMaxIntellect)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxIntellect(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetIntellect)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntellect(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetMaxEndurance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxEndurance(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetEndurance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEndurance(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetMaxStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxStrength(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStrength(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetMaxCriticalProb)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxCriticalProb(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetCriticalProb)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCriticalProb(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetMaxCritical)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxCritical(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetCritical)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCritical(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetMaxStaminaRegen)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxStaminaRegen(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetStaminaRegen)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStaminaRegen(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetMaxStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxStamina(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStamina(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetMaxManaRegen)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxManaRegen(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetManaRegen)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetManaRegen(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetMaxMana)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxMana(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetMana)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMana(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetMaxHealthRegen)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxHealthRegen(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetHealthRegen)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHealthRegen(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetMaxHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxHealth(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHealth(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetMaxExperience)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxExperience(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetExperience)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExperience(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSetLevel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLevel(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetMaxArmor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxArmor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetArmor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetArmor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetMaxWeaponDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxWeaponDamage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetWeaponDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWeaponDamage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetMaxSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetMaxIntellect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxIntellect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetIntellect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetIntellect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetMaxEndurance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxEndurance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetEndurance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEndurance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetMaxStrength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxStrength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetStrength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStrength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetMaxCriticalProb)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxCriticalProb();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetCriticalProb)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCriticalProb();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetMaxCritical)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxCritical();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetCritical)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCritical();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetMaxStaminaRegen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxStaminaRegen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetStaminaRegen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStaminaRegen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetMaxStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetMaxManaRegen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxManaRegen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetManaRegen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetManaRegen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetMaxMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetMaxHealthRegen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealthRegen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetHealthRegen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthRegen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetMaxExperience)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxExperience();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetExperience)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetExperience();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execGetLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execLoadAttributeSetFromJson)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadAttributeSetFromJson();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALOCCharacter::execSaveAttributeSetToJson)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveAttributeSetToJson();
		P_NATIVE_END;
	}
	static FName NAME_ALOCCharacter_OnArmorChanged = FName(TEXT("OnArmorChanged"));
	void ALOCCharacter::OnArmorChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnArmorChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnArmorChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnCriticalChanged = FName(TEXT("OnCriticalChanged"));
	void ALOCCharacter::OnCriticalChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnCriticalChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnCriticalChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnCriticalProbChanged = FName(TEXT("OnCriticalProbChanged"));
	void ALOCCharacter::OnCriticalProbChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnCriticalProbChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnCriticalProbChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnEnduranceChanged = FName(TEXT("OnEnduranceChanged"));
	void ALOCCharacter::OnEnduranceChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnEnduranceChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnEnduranceChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnExperienceChanged = FName(TEXT("OnExperienceChanged"));
	void ALOCCharacter::OnExperienceChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnExperienceChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnExperienceChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnHealthChanged = FName(TEXT("OnHealthChanged"));
	void ALOCCharacter::OnHealthChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnHealthChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnHealthChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnHealthRegenChanged = FName(TEXT("OnHealthRegenChanged"));
	void ALOCCharacter::OnHealthRegenChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnHealthRegenChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnHealthRegenChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnIntellectChanged = FName(TEXT("OnIntellectChanged"));
	void ALOCCharacter::OnIntellectChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnIntellectChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnIntellectChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnLevelChanged = FName(TEXT("OnLevelChanged"));
	void ALOCCharacter::OnLevelChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnLevelChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnLevelChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnManaChanged = FName(TEXT("OnManaChanged"));
	void ALOCCharacter::OnManaChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnManaChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnManaChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnManaRegenChanged = FName(TEXT("OnManaRegenChanged"));
	void ALOCCharacter::OnManaRegenChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnManaRegenChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnManaRegenChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnMaxArmorChanged = FName(TEXT("OnMaxArmorChanged"));
	void ALOCCharacter::OnMaxArmorChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnMaxArmorChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnMaxArmorChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnMaxCriticalChanged = FName(TEXT("OnMaxCriticalChanged"));
	void ALOCCharacter::OnMaxCriticalChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnMaxCriticalChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnMaxCriticalChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnMaxCriticalProbChanged = FName(TEXT("OnMaxCriticalProbChanged"));
	void ALOCCharacter::OnMaxCriticalProbChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnMaxCriticalProbChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnMaxCriticalProbChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnMaxEnduranceChanged = FName(TEXT("OnMaxEnduranceChanged"));
	void ALOCCharacter::OnMaxEnduranceChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnMaxEnduranceChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnMaxEnduranceChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnMaxExperienceChanged = FName(TEXT("OnMaxExperienceChanged"));
	void ALOCCharacter::OnMaxExperienceChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnMaxExperienceChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnMaxExperienceChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnMaxHealthChanged = FName(TEXT("OnMaxHealthChanged"));
	void ALOCCharacter::OnMaxHealthChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnMaxHealthChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnMaxHealthChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnMaxHealthRegenChanged = FName(TEXT("OnMaxHealthRegenChanged"));
	void ALOCCharacter::OnMaxHealthRegenChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnMaxHealthRegenChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnMaxHealthRegenChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnMaxIntellectChanged = FName(TEXT("OnMaxIntellectChanged"));
	void ALOCCharacter::OnMaxIntellectChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnMaxIntellectChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnMaxIntellectChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnMaxManaChanged = FName(TEXT("OnMaxManaChanged"));
	void ALOCCharacter::OnMaxManaChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnMaxManaChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnMaxManaChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnMaxManaRegenChanged = FName(TEXT("OnMaxManaRegenChanged"));
	void ALOCCharacter::OnMaxManaRegenChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnMaxManaRegenChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnMaxManaRegenChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnMaxSpeedChanged = FName(TEXT("OnMaxSpeedChanged"));
	void ALOCCharacter::OnMaxSpeedChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnMaxSpeedChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnMaxSpeedChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnMaxStaminaChanged = FName(TEXT("OnMaxStaminaChanged"));
	void ALOCCharacter::OnMaxStaminaChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnMaxStaminaChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnMaxStaminaChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnMaxStaminaRegenChanged = FName(TEXT("OnMaxStaminaRegenChanged"));
	void ALOCCharacter::OnMaxStaminaRegenChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnMaxStaminaRegenChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnMaxStaminaRegenChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnMaxStrengthChanged = FName(TEXT("OnMaxStrengthChanged"));
	void ALOCCharacter::OnMaxStrengthChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnMaxStrengthChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnMaxStrengthChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnMaxWeaponDamageChanged = FName(TEXT("OnMaxWeaponDamageChanged"));
	void ALOCCharacter::OnMaxWeaponDamageChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnMaxWeaponDamageChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnMaxWeaponDamageChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnSpeedChanged = FName(TEXT("OnSpeedChanged"));
	void ALOCCharacter::OnSpeedChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnSpeedChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnSpeedChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnStaminaChanged = FName(TEXT("OnStaminaChanged"));
	void ALOCCharacter::OnStaminaChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnStaminaChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnStaminaChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnStaminaRegenChanged = FName(TEXT("OnStaminaRegenChanged"));
	void ALOCCharacter::OnStaminaRegenChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnStaminaRegenChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnStaminaRegenChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnStrengthChanged = FName(TEXT("OnStrengthChanged"));
	void ALOCCharacter::OnStrengthChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnStrengthChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnStrengthChanged),&Parms);
	}
	static FName NAME_ALOCCharacter_OnWeaponDamageChanged = FName(TEXT("OnWeaponDamageChanged"));
	void ALOCCharacter::OnWeaponDamageChanged(float oldValue, float newValue)
	{
		LOCCharacter_eventOnWeaponDamageChanged_Parms Parms;
		Parms.oldValue=oldValue;
		Parms.newValue=newValue;
		ProcessEvent(FindFunctionChecked(NAME_ALOCCharacter_OnWeaponDamageChanged),&Parms);
	}
	void ALOCCharacter::StaticRegisterNativesALOCCharacter()
	{
		UClass* Class = ALOCCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateAbility", &ALOCCharacter::execActivateAbility },
			{ "CancelAbilityWithTags", &ALOCCharacter::execCancelAbilityWithTags },
			{ "GetArmor", &ALOCCharacter::execGetArmor },
			{ "GetCritical", &ALOCCharacter::execGetCritical },
			{ "GetCriticalProb", &ALOCCharacter::execGetCriticalProb },
			{ "GetEndurance", &ALOCCharacter::execGetEndurance },
			{ "GetExperience", &ALOCCharacter::execGetExperience },
			{ "GetHealth", &ALOCCharacter::execGetHealth },
			{ "GetHealthRegen", &ALOCCharacter::execGetHealthRegen },
			{ "GetIntellect", &ALOCCharacter::execGetIntellect },
			{ "GetLevel", &ALOCCharacter::execGetLevel },
			{ "GetMana", &ALOCCharacter::execGetMana },
			{ "GetManaRegen", &ALOCCharacter::execGetManaRegen },
			{ "GetMaxArmor", &ALOCCharacter::execGetMaxArmor },
			{ "GetMaxCritical", &ALOCCharacter::execGetMaxCritical },
			{ "GetMaxCriticalProb", &ALOCCharacter::execGetMaxCriticalProb },
			{ "GetMaxEndurance", &ALOCCharacter::execGetMaxEndurance },
			{ "GetMaxExperience", &ALOCCharacter::execGetMaxExperience },
			{ "GetMaxHealth", &ALOCCharacter::execGetMaxHealth },
			{ "GetMaxHealthRegen", &ALOCCharacter::execGetMaxHealthRegen },
			{ "GetMaxIntellect", &ALOCCharacter::execGetMaxIntellect },
			{ "GetMaxMana", &ALOCCharacter::execGetMaxMana },
			{ "GetMaxManaRegen", &ALOCCharacter::execGetMaxManaRegen },
			{ "GetMaxSpeed", &ALOCCharacter::execGetMaxSpeed },
			{ "GetMaxStamina", &ALOCCharacter::execGetMaxStamina },
			{ "GetMaxStaminaRegen", &ALOCCharacter::execGetMaxStaminaRegen },
			{ "GetMaxStrength", &ALOCCharacter::execGetMaxStrength },
			{ "GetMaxWeaponDamage", &ALOCCharacter::execGetMaxWeaponDamage },
			{ "GetSpeed", &ALOCCharacter::execGetSpeed },
			{ "GetStamina", &ALOCCharacter::execGetStamina },
			{ "GetStaminaRegen", &ALOCCharacter::execGetStaminaRegen },
			{ "GetStrength", &ALOCCharacter::execGetStrength },
			{ "GetWeaponDamage", &ALOCCharacter::execGetWeaponDamage },
			{ "GrantAbility", &ALOCCharacter::execGrantAbility },
			{ "LoadAttributeSetFromJson", &ALOCCharacter::execLoadAttributeSetFromJson },
			{ "SaveAttributeSetToJson", &ALOCCharacter::execSaveAttributeSetToJson },
			{ "SetArmor", &ALOCCharacter::execSetArmor },
			{ "SetCritical", &ALOCCharacter::execSetCritical },
			{ "SetCriticalProb", &ALOCCharacter::execSetCriticalProb },
			{ "SetEndurance", &ALOCCharacter::execSetEndurance },
			{ "SetExperience", &ALOCCharacter::execSetExperience },
			{ "SetHealth", &ALOCCharacter::execSetHealth },
			{ "SetHealthRegen", &ALOCCharacter::execSetHealthRegen },
			{ "SetIntellect", &ALOCCharacter::execSetIntellect },
			{ "SetLevel", &ALOCCharacter::execSetLevel },
			{ "SetMana", &ALOCCharacter::execSetMana },
			{ "SetManaRegen", &ALOCCharacter::execSetManaRegen },
			{ "SetMaxArmor", &ALOCCharacter::execSetMaxArmor },
			{ "SetMaxCritical", &ALOCCharacter::execSetMaxCritical },
			{ "SetMaxCriticalProb", &ALOCCharacter::execSetMaxCriticalProb },
			{ "SetMaxEndurance", &ALOCCharacter::execSetMaxEndurance },
			{ "SetMaxExperience", &ALOCCharacter::execSetMaxExperience },
			{ "SetMaxHealth", &ALOCCharacter::execSetMaxHealth },
			{ "SetMaxHealthRegen", &ALOCCharacter::execSetMaxHealthRegen },
			{ "SetMaxIntellect", &ALOCCharacter::execSetMaxIntellect },
			{ "SetMaxMana", &ALOCCharacter::execSetMaxMana },
			{ "SetMaxManaRegen", &ALOCCharacter::execSetMaxManaRegen },
			{ "SetMaxSpeed", &ALOCCharacter::execSetMaxSpeed },
			{ "SetMaxStamina", &ALOCCharacter::execSetMaxStamina },
			{ "SetMaxStaminaRegen", &ALOCCharacter::execSetMaxStaminaRegen },
			{ "SetMaxStrength", &ALOCCharacter::execSetMaxStrength },
			{ "SetMaxWeaponDamage", &ALOCCharacter::execSetMaxWeaponDamage },
			{ "SetSpeed", &ALOCCharacter::execSetSpeed },
			{ "SetStamina", &ALOCCharacter::execSetStamina },
			{ "SetStaminaRegen", &ALOCCharacter::execSetStaminaRegen },
			{ "SetStrength", &ALOCCharacter::execSetStrength },
			{ "SetWeaponDamage", &ALOCCharacter::execSetWeaponDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALOCCharacter_ActivateAbility_Statics
	{
		struct LOCCharacter_eventActivateAbility_Parms
		{
			int32 InputCode;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InputCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALOCCharacter_ActivateAbility_Statics::NewProp_InputCode = { "InputCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventActivateAbility_Parms, InputCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_ActivateAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_ActivateAbility_Statics::NewProp_InputCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_ActivateAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** Activates an ability with a matching input code */" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
		{ "ToolTip", "Activates an ability with a matching input code" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_ActivateAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "ActivateAbility", nullptr, nullptr, sizeof(LOCCharacter_eventActivateAbility_Parms), Z_Construct_UFunction_ALOCCharacter_ActivateAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_ActivateAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_ActivateAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_ActivateAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_ActivateAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_ActivateAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_CancelAbilityWithTags_Statics
	{
		struct LOCCharacter_eventCancelAbilityWithTags_Parms
		{
			FGameplayTagContainer CancelWithTags;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelWithTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CancelWithTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_CancelAbilityWithTags_Statics::NewProp_CancelWithTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALOCCharacter_CancelAbilityWithTags_Statics::NewProp_CancelWithTags = { "CancelWithTags", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventCancelAbilityWithTags_Parms, CancelWithTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_CancelAbilityWithTags_Statics::NewProp_CancelWithTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_CancelAbilityWithTags_Statics::NewProp_CancelWithTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_CancelAbilityWithTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_CancelAbilityWithTags_Statics::NewProp_CancelWithTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_CancelAbilityWithTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** Cancels abilities with specific Gameplay Tags applied to them.*/" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
		{ "ToolTip", "Cancels abilities with specific Gameplay Tags applied to them." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_CancelAbilityWithTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "CancelAbilityWithTags", nullptr, nullptr, sizeof(LOCCharacter_eventCancelAbilityWithTags_Parms), Z_Construct_UFunction_ALOCCharacter_CancelAbilityWithTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_CancelAbilityWithTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_CancelAbilityWithTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_CancelAbilityWithTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_CancelAbilityWithTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_CancelAbilityWithTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetArmor_Statics
	{
		struct LOCCharacter_eventGetArmor_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetArmor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetArmor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetArmor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetArmor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetArmor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetArmor", nullptr, nullptr, sizeof(LOCCharacter_eventGetArmor_Parms), Z_Construct_UFunction_ALOCCharacter_GetArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetArmor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetArmor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetArmor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetArmor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetArmor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetCritical_Statics
	{
		struct LOCCharacter_eventGetCritical_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetCritical_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetCritical_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetCritical_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetCritical_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetCritical_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetCritical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetCritical", nullptr, nullptr, sizeof(LOCCharacter_eventGetCritical_Parms), Z_Construct_UFunction_ALOCCharacter_GetCritical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetCritical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetCritical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetCritical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetCritical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetCritical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetCriticalProb_Statics
	{
		struct LOCCharacter_eventGetCriticalProb_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetCriticalProb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetCriticalProb_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetCriticalProb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetCriticalProb_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetCriticalProb_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetCriticalProb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetCriticalProb", nullptr, nullptr, sizeof(LOCCharacter_eventGetCriticalProb_Parms), Z_Construct_UFunction_ALOCCharacter_GetCriticalProb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetCriticalProb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetCriticalProb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetCriticalProb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetCriticalProb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetCriticalProb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetEndurance_Statics
	{
		struct LOCCharacter_eventGetEndurance_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetEndurance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetEndurance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetEndurance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetEndurance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetEndurance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetEndurance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetEndurance", nullptr, nullptr, sizeof(LOCCharacter_eventGetEndurance_Parms), Z_Construct_UFunction_ALOCCharacter_GetEndurance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetEndurance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetEndurance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetEndurance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetEndurance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetEndurance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetExperience_Statics
	{
		struct LOCCharacter_eventGetExperience_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetExperience_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetExperience_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetExperience_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetExperience_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetExperience_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetExperience", nullptr, nullptr, sizeof(LOCCharacter_eventGetExperience_Parms), Z_Construct_UFunction_ALOCCharacter_GetExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetExperience_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetExperience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetExperience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetExperience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetExperience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetHealth_Statics
	{
		struct LOCCharacter_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetHealth", nullptr, nullptr, sizeof(LOCCharacter_eventGetHealth_Parms), Z_Construct_UFunction_ALOCCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetHealthRegen_Statics
	{
		struct LOCCharacter_eventGetHealthRegen_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetHealthRegen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetHealthRegen_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetHealthRegen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetHealthRegen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetHealthRegen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetHealthRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetHealthRegen", nullptr, nullptr, sizeof(LOCCharacter_eventGetHealthRegen_Parms), Z_Construct_UFunction_ALOCCharacter_GetHealthRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetHealthRegen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetHealthRegen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetHealthRegen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetHealthRegen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetHealthRegen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetIntellect_Statics
	{
		struct LOCCharacter_eventGetIntellect_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetIntellect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetIntellect_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetIntellect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetIntellect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetIntellect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetIntellect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetIntellect", nullptr, nullptr, sizeof(LOCCharacter_eventGetIntellect_Parms), Z_Construct_UFunction_ALOCCharacter_GetIntellect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetIntellect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetIntellect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetIntellect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetIntellect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetIntellect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetLevel_Statics
	{
		struct LOCCharacter_eventGetLevel_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "//????????\xc6\xae???? ?\xd8\xb4? ?\xc9\xb7?\xc4\xa1?? ???????? ???? ?\xd4\xbc??\xd4\xb4\xcf\xb4?.\n" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
		{ "ToolTip", "????????\xc6\xae???? ?\xd8\xb4? ?\xc9\xb7?\xc4\xa1?? ???????? ???? ?\xd4\xbc??\xd4\xb4\xcf\xb4?." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetLevel", nullptr, nullptr, sizeof(LOCCharacter_eventGetLevel_Parms), Z_Construct_UFunction_ALOCCharacter_GetLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetMana_Statics
	{
		struct LOCCharacter_eventGetMana_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetMana_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetMana", nullptr, nullptr, sizeof(LOCCharacter_eventGetMana_Parms), Z_Construct_UFunction_ALOCCharacter_GetMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetManaRegen_Statics
	{
		struct LOCCharacter_eventGetManaRegen_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetManaRegen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetManaRegen_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetManaRegen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetManaRegen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetManaRegen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetManaRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetManaRegen", nullptr, nullptr, sizeof(LOCCharacter_eventGetManaRegen_Parms), Z_Construct_UFunction_ALOCCharacter_GetManaRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetManaRegen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetManaRegen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetManaRegen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetManaRegen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetManaRegen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetMaxArmor_Statics
	{
		struct LOCCharacter_eventGetMaxArmor_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetMaxArmor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetMaxArmor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetMaxArmor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetMaxArmor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetMaxArmor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetMaxArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetMaxArmor", nullptr, nullptr, sizeof(LOCCharacter_eventGetMaxArmor_Parms), Z_Construct_UFunction_ALOCCharacter_GetMaxArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxArmor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetMaxArmor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxArmor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetMaxArmor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetMaxArmor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetMaxCritical_Statics
	{
		struct LOCCharacter_eventGetMaxCritical_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetMaxCritical_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetMaxCritical_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetMaxCritical_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetMaxCritical_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetMaxCritical_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetMaxCritical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetMaxCritical", nullptr, nullptr, sizeof(LOCCharacter_eventGetMaxCritical_Parms), Z_Construct_UFunction_ALOCCharacter_GetMaxCritical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxCritical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetMaxCritical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxCritical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetMaxCritical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetMaxCritical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetMaxCriticalProb_Statics
	{
		struct LOCCharacter_eventGetMaxCriticalProb_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetMaxCriticalProb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetMaxCriticalProb_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetMaxCriticalProb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetMaxCriticalProb_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetMaxCriticalProb_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetMaxCriticalProb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetMaxCriticalProb", nullptr, nullptr, sizeof(LOCCharacter_eventGetMaxCriticalProb_Parms), Z_Construct_UFunction_ALOCCharacter_GetMaxCriticalProb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxCriticalProb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetMaxCriticalProb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxCriticalProb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetMaxCriticalProb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetMaxCriticalProb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetMaxEndurance_Statics
	{
		struct LOCCharacter_eventGetMaxEndurance_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetMaxEndurance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetMaxEndurance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetMaxEndurance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetMaxEndurance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetMaxEndurance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetMaxEndurance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetMaxEndurance", nullptr, nullptr, sizeof(LOCCharacter_eventGetMaxEndurance_Parms), Z_Construct_UFunction_ALOCCharacter_GetMaxEndurance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxEndurance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetMaxEndurance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxEndurance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetMaxEndurance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetMaxEndurance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetMaxExperience_Statics
	{
		struct LOCCharacter_eventGetMaxExperience_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetMaxExperience_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetMaxExperience_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetMaxExperience_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetMaxExperience_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetMaxExperience_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetMaxExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetMaxExperience", nullptr, nullptr, sizeof(LOCCharacter_eventGetMaxExperience_Parms), Z_Construct_UFunction_ALOCCharacter_GetMaxExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxExperience_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetMaxExperience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxExperience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetMaxExperience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetMaxExperience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetMaxHealth_Statics
	{
		struct LOCCharacter_eventGetMaxHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetMaxHealth", nullptr, nullptr, sizeof(LOCCharacter_eventGetMaxHealth_Parms), Z_Construct_UFunction_ALOCCharacter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetMaxHealthRegen_Statics
	{
		struct LOCCharacter_eventGetMaxHealthRegen_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetMaxHealthRegen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetMaxHealthRegen_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetMaxHealthRegen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetMaxHealthRegen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetMaxHealthRegen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetMaxHealthRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetMaxHealthRegen", nullptr, nullptr, sizeof(LOCCharacter_eventGetMaxHealthRegen_Parms), Z_Construct_UFunction_ALOCCharacter_GetMaxHealthRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxHealthRegen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetMaxHealthRegen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxHealthRegen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetMaxHealthRegen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetMaxHealthRegen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetMaxIntellect_Statics
	{
		struct LOCCharacter_eventGetMaxIntellect_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetMaxIntellect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetMaxIntellect_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetMaxIntellect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetMaxIntellect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetMaxIntellect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetMaxIntellect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetMaxIntellect", nullptr, nullptr, sizeof(LOCCharacter_eventGetMaxIntellect_Parms), Z_Construct_UFunction_ALOCCharacter_GetMaxIntellect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxIntellect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetMaxIntellect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxIntellect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetMaxIntellect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetMaxIntellect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetMaxMana_Statics
	{
		struct LOCCharacter_eventGetMaxMana_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetMaxMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetMaxMana_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetMaxMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetMaxMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetMaxMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetMaxMana", nullptr, nullptr, sizeof(LOCCharacter_eventGetMaxMana_Parms), Z_Construct_UFunction_ALOCCharacter_GetMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetMaxMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetMaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetMaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetMaxManaRegen_Statics
	{
		struct LOCCharacter_eventGetMaxManaRegen_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetMaxManaRegen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetMaxManaRegen_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetMaxManaRegen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetMaxManaRegen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetMaxManaRegen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetMaxManaRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetMaxManaRegen", nullptr, nullptr, sizeof(LOCCharacter_eventGetMaxManaRegen_Parms), Z_Construct_UFunction_ALOCCharacter_GetMaxManaRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxManaRegen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetMaxManaRegen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxManaRegen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetMaxManaRegen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetMaxManaRegen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetMaxSpeed_Statics
	{
		struct LOCCharacter_eventGetMaxSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetMaxSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetMaxSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetMaxSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetMaxSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetMaxSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetMaxSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetMaxSpeed", nullptr, nullptr, sizeof(LOCCharacter_eventGetMaxSpeed_Parms), Z_Construct_UFunction_ALOCCharacter_GetMaxSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetMaxSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetMaxSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetMaxSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetMaxStamina_Statics
	{
		struct LOCCharacter_eventGetMaxStamina_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetMaxStamina_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetMaxStamina_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetMaxStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetMaxStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetMaxStamina", nullptr, nullptr, sizeof(LOCCharacter_eventGetMaxStamina_Parms), Z_Construct_UFunction_ALOCCharacter_GetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetMaxStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetMaxStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetMaxStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetMaxStaminaRegen_Statics
	{
		struct LOCCharacter_eventGetMaxStaminaRegen_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetMaxStaminaRegen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetMaxStaminaRegen_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetMaxStaminaRegen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetMaxStaminaRegen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetMaxStaminaRegen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetMaxStaminaRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetMaxStaminaRegen", nullptr, nullptr, sizeof(LOCCharacter_eventGetMaxStaminaRegen_Parms), Z_Construct_UFunction_ALOCCharacter_GetMaxStaminaRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxStaminaRegen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetMaxStaminaRegen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxStaminaRegen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetMaxStaminaRegen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetMaxStaminaRegen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetMaxStrength_Statics
	{
		struct LOCCharacter_eventGetMaxStrength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetMaxStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetMaxStrength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetMaxStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetMaxStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetMaxStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetMaxStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetMaxStrength", nullptr, nullptr, sizeof(LOCCharacter_eventGetMaxStrength_Parms), Z_Construct_UFunction_ALOCCharacter_GetMaxStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetMaxStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetMaxStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetMaxStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetMaxWeaponDamage_Statics
	{
		struct LOCCharacter_eventGetMaxWeaponDamage_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetMaxWeaponDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetMaxWeaponDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetMaxWeaponDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetMaxWeaponDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetMaxWeaponDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetMaxWeaponDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetMaxWeaponDamage", nullptr, nullptr, sizeof(LOCCharacter_eventGetMaxWeaponDamage_Parms), Z_Construct_UFunction_ALOCCharacter_GetMaxWeaponDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxWeaponDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetMaxWeaponDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetMaxWeaponDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetMaxWeaponDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetMaxWeaponDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetSpeed_Statics
	{
		struct LOCCharacter_eventGetSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetSpeed", nullptr, nullptr, sizeof(LOCCharacter_eventGetSpeed_Parms), Z_Construct_UFunction_ALOCCharacter_GetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetStamina_Statics
	{
		struct LOCCharacter_eventGetStamina_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetStamina_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetStamina_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetStamina", nullptr, nullptr, sizeof(LOCCharacter_eventGetStamina_Parms), Z_Construct_UFunction_ALOCCharacter_GetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetStaminaRegen_Statics
	{
		struct LOCCharacter_eventGetStaminaRegen_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetStaminaRegen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetStaminaRegen_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetStaminaRegen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetStaminaRegen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetStaminaRegen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetStaminaRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetStaminaRegen", nullptr, nullptr, sizeof(LOCCharacter_eventGetStaminaRegen_Parms), Z_Construct_UFunction_ALOCCharacter_GetStaminaRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetStaminaRegen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetStaminaRegen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetStaminaRegen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetStaminaRegen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetStaminaRegen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetStrength_Statics
	{
		struct LOCCharacter_eventGetStrength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetStrength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetStrength", nullptr, nullptr, sizeof(LOCCharacter_eventGetStrength_Parms), Z_Construct_UFunction_ALOCCharacter_GetStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GetWeaponDamage_Statics
	{
		struct LOCCharacter_eventGetWeaponDamage_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_GetWeaponDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGetWeaponDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GetWeaponDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GetWeaponDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GetWeaponDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GetWeaponDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GetWeaponDamage", nullptr, nullptr, sizeof(LOCCharacter_eventGetWeaponDamage_Parms), Z_Construct_UFunction_ALOCCharacter_GetWeaponDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetWeaponDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GetWeaponDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GetWeaponDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GetWeaponDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GetWeaponDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_GrantAbility_Statics
	{
		struct LOCCharacter_eventGrantAbility_Parms
		{
			TSubclassOf<UGameplayAbility>  AbilityClass;
			int32 Level;
			int32 InputCode;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InputCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ALOCCharacter_GrantAbility_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGrantAbility_Parms, AbilityClass), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALOCCharacter_GrantAbility_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGrantAbility_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALOCCharacter_GrantAbility_Statics::NewProp_InputCode = { "InputCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventGrantAbility_Parms, InputCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_GrantAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GrantAbility_Statics::NewProp_AbilityClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GrantAbility_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_GrantAbility_Statics::NewProp_InputCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_GrantAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** Grants an ability at the given level, with an input code used to pick and choose which ability should be triggered. */" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
		{ "ToolTip", "Grants an ability at the given level, with an input code used to pick and choose which ability should be triggered." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_GrantAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "GrantAbility", nullptr, nullptr, sizeof(LOCCharacter_eventGrantAbility_Parms), Z_Construct_UFunction_ALOCCharacter_GrantAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GrantAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_GrantAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_GrantAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_GrantAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_GrantAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_LoadAttributeSetFromJson_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_LoadAttributeSetFromJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_LoadAttributeSetFromJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "LoadAttributeSetFromJson", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_LoadAttributeSetFromJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_LoadAttributeSetFromJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_LoadAttributeSetFromJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_LoadAttributeSetFromJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnArmorChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnArmorChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnArmorChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnArmorChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnArmorChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnArmorChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnArmorChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnArmorChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnArmorChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnArmorChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnArmorChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnArmorChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnArmorChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnArmorChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnArmorChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnArmorChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnArmorChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnArmorChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnCriticalChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnCriticalChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnCriticalChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnCriticalChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnCriticalChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnCriticalChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnCriticalChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnCriticalChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnCriticalChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnCriticalChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnCriticalChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnCriticalChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnCriticalChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnCriticalChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnCriticalChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnCriticalChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnCriticalChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnCriticalChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnCriticalProbChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnCriticalProbChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnCriticalProbChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnCriticalProbChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnCriticalProbChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnCriticalProbChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnCriticalProbChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnCriticalProbChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnCriticalProbChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnCriticalProbChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnCriticalProbChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnCriticalProbChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnCriticalProbChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnCriticalProbChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnCriticalProbChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnCriticalProbChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnCriticalProbChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnCriticalProbChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnEnduranceChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnEnduranceChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnEnduranceChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnEnduranceChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnEnduranceChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnEnduranceChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnEnduranceChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnEnduranceChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnEnduranceChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnEnduranceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnEnduranceChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnEnduranceChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnEnduranceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnEnduranceChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnEnduranceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnEnduranceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnEnduranceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnEnduranceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnExperienceChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnExperienceChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnExperienceChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnExperienceChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnExperienceChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnExperienceChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnExperienceChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnExperienceChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnExperienceChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnExperienceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnExperienceChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnExperienceChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnExperienceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnExperienceChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnExperienceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnExperienceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnExperienceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnExperienceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnHealthChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnHealthChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnHealthChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnHealthChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnHealthChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnHealthChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnHealthChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnHealthChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnHealthChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnHealthChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnHealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnHealthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnHealthRegenChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnHealthRegenChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnHealthRegenChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnHealthRegenChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnHealthRegenChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnHealthRegenChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnHealthRegenChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnHealthRegenChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnHealthRegenChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnHealthRegenChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnHealthRegenChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnHealthRegenChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnHealthRegenChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnHealthRegenChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnHealthRegenChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnHealthRegenChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnHealthRegenChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnHealthRegenChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnIntellectChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnIntellectChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnIntellectChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnIntellectChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnIntellectChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnIntellectChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnIntellectChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnIntellectChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnIntellectChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnIntellectChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnIntellectChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnIntellectChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnIntellectChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnIntellectChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnIntellectChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnIntellectChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnIntellectChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnIntellectChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnLevelChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnLevelChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnLevelChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnLevelChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnLevelChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnLevelChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnLevelChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnLevelChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnLevelChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/** On\"Property\"Changed Function */" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
		{ "ToolTip", "On\"Property\"Changed Function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnLevelChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnLevelChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnLevelChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnLevelChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnLevelChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnLevelChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnLevelChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnLevelChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnLevelChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnManaChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnManaChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnManaChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnManaChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnManaChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnManaChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnManaChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnManaChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnManaChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnManaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnManaChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnManaChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnManaChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnManaChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnManaChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnManaChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnManaChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnManaChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnManaRegenChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnManaRegenChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnManaRegenChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnManaRegenChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnManaRegenChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnManaRegenChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnManaRegenChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnManaRegenChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnManaRegenChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnManaRegenChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnManaRegenChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnManaRegenChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnManaRegenChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnManaRegenChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnManaRegenChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnManaRegenChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnManaRegenChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnManaRegenChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnMaxArmorChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxArmorChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxArmorChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxArmorChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxArmorChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnMaxArmorChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxArmorChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxArmorChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnMaxArmorChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnMaxArmorChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnMaxArmorChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnMaxArmorChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnMaxArmorChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxArmorChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnMaxArmorChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxArmorChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnMaxArmorChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnMaxArmorChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxCriticalChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxCriticalChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnMaxCriticalChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnMaxCriticalChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalProbChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalProbChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxCriticalProbChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalProbChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxCriticalProbChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalProbChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalProbChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalProbChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalProbChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalProbChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnMaxCriticalProbChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnMaxCriticalProbChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalProbChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalProbChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalProbChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalProbChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalProbChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalProbChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnMaxEnduranceChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxEnduranceChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxEnduranceChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxEnduranceChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxEnduranceChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnMaxEnduranceChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxEnduranceChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxEnduranceChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnMaxEnduranceChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnMaxEnduranceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnMaxEnduranceChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnMaxEnduranceChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnMaxEnduranceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxEnduranceChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnMaxEnduranceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxEnduranceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnMaxEnduranceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnMaxEnduranceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnMaxExperienceChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxExperienceChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxExperienceChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxExperienceChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxExperienceChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnMaxExperienceChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxExperienceChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxExperienceChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnMaxExperienceChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnMaxExperienceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnMaxExperienceChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnMaxExperienceChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnMaxExperienceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxExperienceChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnMaxExperienceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxExperienceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnMaxExperienceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnMaxExperienceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnMaxHealthChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxHealthChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxHealthChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxHealthChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxHealthChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnMaxHealthChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxHealthChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxHealthChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnMaxHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnMaxHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnMaxHealthChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnMaxHealthChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnMaxHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxHealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnMaxHealthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnMaxHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnMaxHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnMaxHealthRegenChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxHealthRegenChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxHealthRegenChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxHealthRegenChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxHealthRegenChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnMaxHealthRegenChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxHealthRegenChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxHealthRegenChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnMaxHealthRegenChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnMaxHealthRegenChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnMaxHealthRegenChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnMaxHealthRegenChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnMaxHealthRegenChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxHealthRegenChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnMaxHealthRegenChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxHealthRegenChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnMaxHealthRegenChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnMaxHealthRegenChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnMaxIntellectChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxIntellectChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxIntellectChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxIntellectChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxIntellectChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnMaxIntellectChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxIntellectChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxIntellectChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnMaxIntellectChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnMaxIntellectChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnMaxIntellectChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnMaxIntellectChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnMaxIntellectChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxIntellectChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnMaxIntellectChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxIntellectChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnMaxIntellectChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnMaxIntellectChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnMaxManaChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxManaChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxManaChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxManaChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxManaChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnMaxManaChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxManaChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxManaChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnMaxManaChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnMaxManaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnMaxManaChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnMaxManaChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnMaxManaChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxManaChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnMaxManaChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxManaChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnMaxManaChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnMaxManaChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnMaxManaRegenChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxManaRegenChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxManaRegenChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxManaRegenChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxManaRegenChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnMaxManaRegenChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxManaRegenChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxManaRegenChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnMaxManaRegenChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnMaxManaRegenChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnMaxManaRegenChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnMaxManaRegenChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnMaxManaRegenChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxManaRegenChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnMaxManaRegenChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxManaRegenChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnMaxManaRegenChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnMaxManaRegenChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnMaxSpeedChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxSpeedChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxSpeedChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxSpeedChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxSpeedChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnMaxSpeedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxSpeedChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxSpeedChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnMaxSpeedChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnMaxSpeedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnMaxSpeedChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnMaxSpeedChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnMaxSpeedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxSpeedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnMaxSpeedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxSpeedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnMaxSpeedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnMaxSpeedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxStaminaChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxStaminaChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnMaxStaminaChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnMaxStaminaChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaRegenChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaRegenChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxStaminaRegenChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaRegenChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxStaminaRegenChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaRegenChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaRegenChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaRegenChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaRegenChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaRegenChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnMaxStaminaRegenChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnMaxStaminaRegenChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaRegenChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaRegenChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaRegenChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaRegenChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaRegenChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaRegenChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnMaxStrengthChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxStrengthChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxStrengthChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxStrengthChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxStrengthChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnMaxStrengthChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxStrengthChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxStrengthChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnMaxStrengthChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnMaxStrengthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnMaxStrengthChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnMaxStrengthChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnMaxStrengthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxStrengthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnMaxStrengthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxStrengthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnMaxStrengthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnMaxStrengthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnMaxWeaponDamageChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxWeaponDamageChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxWeaponDamageChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnMaxWeaponDamageChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnMaxWeaponDamageChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnMaxWeaponDamageChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxWeaponDamageChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnMaxWeaponDamageChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnMaxWeaponDamageChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnMaxWeaponDamageChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnMaxWeaponDamageChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnMaxWeaponDamageChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnMaxWeaponDamageChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxWeaponDamageChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnMaxWeaponDamageChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnMaxWeaponDamageChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnMaxWeaponDamageChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnMaxWeaponDamageChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnSpeedChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnSpeedChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnSpeedChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnSpeedChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnSpeedChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnSpeedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnSpeedChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnSpeedChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnSpeedChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnSpeedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnSpeedChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnSpeedChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnSpeedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnSpeedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnSpeedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnSpeedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnSpeedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnSpeedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnStaminaChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnStaminaChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnStaminaChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnStaminaChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnStaminaChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnStaminaChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnStaminaChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnStaminaChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnStaminaChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnStaminaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnStaminaChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnStaminaChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnStaminaChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnStaminaChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnStaminaChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnStaminaChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnStaminaChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnStaminaChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnStaminaRegenChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnStaminaRegenChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnStaminaRegenChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnStaminaRegenChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnStaminaRegenChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnStaminaRegenChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnStaminaRegenChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnStaminaRegenChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnStaminaRegenChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnStaminaRegenChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnStaminaRegenChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnStaminaRegenChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnStaminaRegenChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnStaminaRegenChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnStaminaRegenChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnStaminaRegenChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnStaminaRegenChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnStaminaRegenChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnStrengthChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnStrengthChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnStrengthChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnStrengthChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnStrengthChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnStrengthChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnStrengthChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnStrengthChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnStrengthChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnStrengthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnStrengthChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnStrengthChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnStrengthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnStrengthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnStrengthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnStrengthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnStrengthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnStrengthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_OnWeaponDamageChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnWeaponDamageChanged_Statics::NewProp_oldValue = { "oldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnWeaponDamageChanged_Parms, oldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_OnWeaponDamageChanged_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventOnWeaponDamageChanged_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_OnWeaponDamageChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnWeaponDamageChanged_Statics::NewProp_oldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_OnWeaponDamageChanged_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_OnWeaponDamageChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_OnWeaponDamageChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "OnWeaponDamageChanged", nullptr, nullptr, sizeof(LOCCharacter_eventOnWeaponDamageChanged_Parms), Z_Construct_UFunction_ALOCCharacter_OnWeaponDamageChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnWeaponDamageChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_OnWeaponDamageChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_OnWeaponDamageChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_OnWeaponDamageChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_OnWeaponDamageChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SaveAttributeSetToJson_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SaveAttributeSetToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SaveAttributeSetToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SaveAttributeSetToJson", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SaveAttributeSetToJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SaveAttributeSetToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SaveAttributeSetToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SaveAttributeSetToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetArmor_Statics
	{
		struct LOCCharacter_eventSetArmor_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetArmor_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetArmor_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetArmor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetArmor_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetArmor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetArmor", nullptr, nullptr, sizeof(LOCCharacter_eventSetArmor_Parms), Z_Construct_UFunction_ALOCCharacter_SetArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetArmor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetArmor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetArmor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetArmor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetArmor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetCritical_Statics
	{
		struct LOCCharacter_eventSetCritical_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetCritical_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetCritical_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetCritical_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetCritical_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetCritical_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetCritical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetCritical", nullptr, nullptr, sizeof(LOCCharacter_eventSetCritical_Parms), Z_Construct_UFunction_ALOCCharacter_SetCritical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetCritical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetCritical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetCritical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetCritical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetCritical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetCriticalProb_Statics
	{
		struct LOCCharacter_eventSetCriticalProb_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetCriticalProb_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetCriticalProb_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetCriticalProb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetCriticalProb_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetCriticalProb_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetCriticalProb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetCriticalProb", nullptr, nullptr, sizeof(LOCCharacter_eventSetCriticalProb_Parms), Z_Construct_UFunction_ALOCCharacter_SetCriticalProb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetCriticalProb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetCriticalProb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetCriticalProb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetCriticalProb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetCriticalProb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetEndurance_Statics
	{
		struct LOCCharacter_eventSetEndurance_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetEndurance_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetEndurance_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetEndurance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetEndurance_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetEndurance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetEndurance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetEndurance", nullptr, nullptr, sizeof(LOCCharacter_eventSetEndurance_Parms), Z_Construct_UFunction_ALOCCharacter_SetEndurance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetEndurance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetEndurance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetEndurance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetEndurance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetEndurance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetExperience_Statics
	{
		struct LOCCharacter_eventSetExperience_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetExperience_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetExperience_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetExperience_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetExperience_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetExperience_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetExperience", nullptr, nullptr, sizeof(LOCCharacter_eventSetExperience_Parms), Z_Construct_UFunction_ALOCCharacter_SetExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetExperience_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetExperience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetExperience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetExperience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetExperience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetHealth_Statics
	{
		struct LOCCharacter_eventSetHealth_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetHealth_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetHealth_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetHealth_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetHealth", nullptr, nullptr, sizeof(LOCCharacter_eventSetHealth_Parms), Z_Construct_UFunction_ALOCCharacter_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetHealthRegen_Statics
	{
		struct LOCCharacter_eventSetHealthRegen_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetHealthRegen_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetHealthRegen_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetHealthRegen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetHealthRegen_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetHealthRegen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetHealthRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetHealthRegen", nullptr, nullptr, sizeof(LOCCharacter_eventSetHealthRegen_Parms), Z_Construct_UFunction_ALOCCharacter_SetHealthRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetHealthRegen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetHealthRegen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetHealthRegen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetHealthRegen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetHealthRegen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetIntellect_Statics
	{
		struct LOCCharacter_eventSetIntellect_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetIntellect_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetIntellect_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetIntellect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetIntellect_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetIntellect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetIntellect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetIntellect", nullptr, nullptr, sizeof(LOCCharacter_eventSetIntellect_Parms), Z_Construct_UFunction_ALOCCharacter_SetIntellect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetIntellect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetIntellect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetIntellect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetIntellect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetIntellect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetLevel_Statics
	{
		struct LOCCharacter_eventSetLevel_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetLevel_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetLevel_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetLevel_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetLevel", nullptr, nullptr, sizeof(LOCCharacter_eventSetLevel_Parms), Z_Construct_UFunction_ALOCCharacter_SetLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetMana_Statics
	{
		struct LOCCharacter_eventSetMana_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetMana_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetMana_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetMana_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetMana", nullptr, nullptr, sizeof(LOCCharacter_eventSetMana_Parms), Z_Construct_UFunction_ALOCCharacter_SetMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetManaRegen_Statics
	{
		struct LOCCharacter_eventSetManaRegen_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetManaRegen_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetManaRegen_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetManaRegen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetManaRegen_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetManaRegen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetManaRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetManaRegen", nullptr, nullptr, sizeof(LOCCharacter_eventSetManaRegen_Parms), Z_Construct_UFunction_ALOCCharacter_SetManaRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetManaRegen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetManaRegen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetManaRegen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetManaRegen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetManaRegen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetMaxArmor_Statics
	{
		struct LOCCharacter_eventSetMaxArmor_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetMaxArmor_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetMaxArmor_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetMaxArmor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetMaxArmor_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetMaxArmor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetMaxArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetMaxArmor", nullptr, nullptr, sizeof(LOCCharacter_eventSetMaxArmor_Parms), Z_Construct_UFunction_ALOCCharacter_SetMaxArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxArmor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetMaxArmor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxArmor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetMaxArmor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetMaxArmor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetMaxCritical_Statics
	{
		struct LOCCharacter_eventSetMaxCritical_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetMaxCritical_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetMaxCritical_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetMaxCritical_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetMaxCritical_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetMaxCritical_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetMaxCritical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetMaxCritical", nullptr, nullptr, sizeof(LOCCharacter_eventSetMaxCritical_Parms), Z_Construct_UFunction_ALOCCharacter_SetMaxCritical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxCritical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetMaxCritical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxCritical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetMaxCritical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetMaxCritical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetMaxCriticalProb_Statics
	{
		struct LOCCharacter_eventSetMaxCriticalProb_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetMaxCriticalProb_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetMaxCriticalProb_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetMaxCriticalProb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetMaxCriticalProb_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetMaxCriticalProb_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetMaxCriticalProb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetMaxCriticalProb", nullptr, nullptr, sizeof(LOCCharacter_eventSetMaxCriticalProb_Parms), Z_Construct_UFunction_ALOCCharacter_SetMaxCriticalProb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxCriticalProb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetMaxCriticalProb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxCriticalProb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetMaxCriticalProb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetMaxCriticalProb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetMaxEndurance_Statics
	{
		struct LOCCharacter_eventSetMaxEndurance_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetMaxEndurance_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetMaxEndurance_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetMaxEndurance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetMaxEndurance_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetMaxEndurance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetMaxEndurance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetMaxEndurance", nullptr, nullptr, sizeof(LOCCharacter_eventSetMaxEndurance_Parms), Z_Construct_UFunction_ALOCCharacter_SetMaxEndurance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxEndurance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetMaxEndurance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxEndurance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetMaxEndurance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetMaxEndurance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetMaxExperience_Statics
	{
		struct LOCCharacter_eventSetMaxExperience_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetMaxExperience_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetMaxExperience_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetMaxExperience_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetMaxExperience_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetMaxExperience_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetMaxExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetMaxExperience", nullptr, nullptr, sizeof(LOCCharacter_eventSetMaxExperience_Parms), Z_Construct_UFunction_ALOCCharacter_SetMaxExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxExperience_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetMaxExperience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxExperience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetMaxExperience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetMaxExperience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetMaxHealth_Statics
	{
		struct LOCCharacter_eventSetMaxHealth_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetMaxHealth_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetMaxHealth_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetMaxHealth_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetMaxHealth", nullptr, nullptr, sizeof(LOCCharacter_eventSetMaxHealth_Parms), Z_Construct_UFunction_ALOCCharacter_SetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetMaxHealthRegen_Statics
	{
		struct LOCCharacter_eventSetMaxHealthRegen_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetMaxHealthRegen_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetMaxHealthRegen_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetMaxHealthRegen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetMaxHealthRegen_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetMaxHealthRegen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetMaxHealthRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetMaxHealthRegen", nullptr, nullptr, sizeof(LOCCharacter_eventSetMaxHealthRegen_Parms), Z_Construct_UFunction_ALOCCharacter_SetMaxHealthRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxHealthRegen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetMaxHealthRegen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxHealthRegen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetMaxHealthRegen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetMaxHealthRegen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetMaxIntellect_Statics
	{
		struct LOCCharacter_eventSetMaxIntellect_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetMaxIntellect_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetMaxIntellect_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetMaxIntellect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetMaxIntellect_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetMaxIntellect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetMaxIntellect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetMaxIntellect", nullptr, nullptr, sizeof(LOCCharacter_eventSetMaxIntellect_Parms), Z_Construct_UFunction_ALOCCharacter_SetMaxIntellect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxIntellect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetMaxIntellect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxIntellect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetMaxIntellect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetMaxIntellect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetMaxMana_Statics
	{
		struct LOCCharacter_eventSetMaxMana_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetMaxMana_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetMaxMana_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetMaxMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetMaxMana_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetMaxMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetMaxMana", nullptr, nullptr, sizeof(LOCCharacter_eventSetMaxMana_Parms), Z_Construct_UFunction_ALOCCharacter_SetMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetMaxMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetMaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetMaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetMaxManaRegen_Statics
	{
		struct LOCCharacter_eventSetMaxManaRegen_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetMaxManaRegen_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetMaxManaRegen_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetMaxManaRegen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetMaxManaRegen_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetMaxManaRegen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetMaxManaRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetMaxManaRegen", nullptr, nullptr, sizeof(LOCCharacter_eventSetMaxManaRegen_Parms), Z_Construct_UFunction_ALOCCharacter_SetMaxManaRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxManaRegen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetMaxManaRegen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxManaRegen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetMaxManaRegen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetMaxManaRegen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetMaxSpeed_Statics
	{
		struct LOCCharacter_eventSetMaxSpeed_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetMaxSpeed_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetMaxSpeed_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetMaxSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetMaxSpeed_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetMaxSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetMaxSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetMaxSpeed", nullptr, nullptr, sizeof(LOCCharacter_eventSetMaxSpeed_Parms), Z_Construct_UFunction_ALOCCharacter_SetMaxSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetMaxSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetMaxSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetMaxSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetMaxStamina_Statics
	{
		struct LOCCharacter_eventSetMaxStamina_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetMaxStamina_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetMaxStamina_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetMaxStamina_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetMaxStamina_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetMaxStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetMaxStamina", nullptr, nullptr, sizeof(LOCCharacter_eventSetMaxStamina_Parms), Z_Construct_UFunction_ALOCCharacter_SetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetMaxStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetMaxStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetMaxStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetMaxStaminaRegen_Statics
	{
		struct LOCCharacter_eventSetMaxStaminaRegen_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetMaxStaminaRegen_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetMaxStaminaRegen_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetMaxStaminaRegen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetMaxStaminaRegen_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetMaxStaminaRegen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetMaxStaminaRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetMaxStaminaRegen", nullptr, nullptr, sizeof(LOCCharacter_eventSetMaxStaminaRegen_Parms), Z_Construct_UFunction_ALOCCharacter_SetMaxStaminaRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxStaminaRegen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetMaxStaminaRegen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxStaminaRegen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetMaxStaminaRegen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetMaxStaminaRegen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetMaxStrength_Statics
	{
		struct LOCCharacter_eventSetMaxStrength_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetMaxStrength_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetMaxStrength_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetMaxStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetMaxStrength_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetMaxStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetMaxStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetMaxStrength", nullptr, nullptr, sizeof(LOCCharacter_eventSetMaxStrength_Parms), Z_Construct_UFunction_ALOCCharacter_SetMaxStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetMaxStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetMaxStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetMaxStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetMaxWeaponDamage_Statics
	{
		struct LOCCharacter_eventSetMaxWeaponDamage_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetMaxWeaponDamage_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetMaxWeaponDamage_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetMaxWeaponDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetMaxWeaponDamage_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetMaxWeaponDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetMaxWeaponDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetMaxWeaponDamage", nullptr, nullptr, sizeof(LOCCharacter_eventSetMaxWeaponDamage_Parms), Z_Construct_UFunction_ALOCCharacter_SetMaxWeaponDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxWeaponDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetMaxWeaponDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetMaxWeaponDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetMaxWeaponDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetMaxWeaponDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetSpeed_Statics
	{
		struct LOCCharacter_eventSetSpeed_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetSpeed_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetSpeed_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetSpeed_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetSpeed", nullptr, nullptr, sizeof(LOCCharacter_eventSetSpeed_Parms), Z_Construct_UFunction_ALOCCharacter_SetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetStamina_Statics
	{
		struct LOCCharacter_eventSetStamina_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetStamina_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetStamina_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetStamina_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetStamina_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetStamina", nullptr, nullptr, sizeof(LOCCharacter_eventSetStamina_Parms), Z_Construct_UFunction_ALOCCharacter_SetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetStaminaRegen_Statics
	{
		struct LOCCharacter_eventSetStaminaRegen_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetStaminaRegen_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetStaminaRegen_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetStaminaRegen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetStaminaRegen_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetStaminaRegen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetStaminaRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetStaminaRegen", nullptr, nullptr, sizeof(LOCCharacter_eventSetStaminaRegen_Parms), Z_Construct_UFunction_ALOCCharacter_SetStaminaRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetStaminaRegen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetStaminaRegen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetStaminaRegen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetStaminaRegen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetStaminaRegen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetStrength_Statics
	{
		struct LOCCharacter_eventSetStrength_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetStrength_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetStrength_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetStrength_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetStrength", nullptr, nullptr, sizeof(LOCCharacter_eventSetStrength_Parms), Z_Construct_UFunction_ALOCCharacter_SetStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALOCCharacter_SetWeaponDamage_Statics
	{
		struct LOCCharacter_eventSetWeaponDamage_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALOCCharacter_SetWeaponDamage_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LOCCharacter_eventSetWeaponDamage_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALOCCharacter_SetWeaponDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALOCCharacter_SetWeaponDamage_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALOCCharacter_SetWeaponDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities|Attributes" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALOCCharacter_SetWeaponDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALOCCharacter, nullptr, "SetWeaponDamage", nullptr, nullptr, sizeof(LOCCharacter_eventSetWeaponDamage_Parms), Z_Construct_UFunction_ALOCCharacter_SetWeaponDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetWeaponDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALOCCharacter_SetWeaponDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALOCCharacter_SetWeaponDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALOCCharacter_SetWeaponDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALOCCharacter_SetWeaponDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALOCCharacter_NoRegister()
	{
		return ALOCCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ALOCCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALOCCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_LOC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALOCCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALOCCharacter_ActivateAbility, "ActivateAbility" }, // 2424603490
		{ &Z_Construct_UFunction_ALOCCharacter_CancelAbilityWithTags, "CancelAbilityWithTags" }, // 2161355275
		{ &Z_Construct_UFunction_ALOCCharacter_GetArmor, "GetArmor" }, // 2257130418
		{ &Z_Construct_UFunction_ALOCCharacter_GetCritical, "GetCritical" }, // 4289406002
		{ &Z_Construct_UFunction_ALOCCharacter_GetCriticalProb, "GetCriticalProb" }, // 2598414596
		{ &Z_Construct_UFunction_ALOCCharacter_GetEndurance, "GetEndurance" }, // 3450405647
		{ &Z_Construct_UFunction_ALOCCharacter_GetExperience, "GetExperience" }, // 3034618110
		{ &Z_Construct_UFunction_ALOCCharacter_GetHealth, "GetHealth" }, // 1054338797
		{ &Z_Construct_UFunction_ALOCCharacter_GetHealthRegen, "GetHealthRegen" }, // 4035062092
		{ &Z_Construct_UFunction_ALOCCharacter_GetIntellect, "GetIntellect" }, // 3122483835
		{ &Z_Construct_UFunction_ALOCCharacter_GetLevel, "GetLevel" }, // 4294334936
		{ &Z_Construct_UFunction_ALOCCharacter_GetMana, "GetMana" }, // 2694777782
		{ &Z_Construct_UFunction_ALOCCharacter_GetManaRegen, "GetManaRegen" }, // 2843011623
		{ &Z_Construct_UFunction_ALOCCharacter_GetMaxArmor, "GetMaxArmor" }, // 2692829918
		{ &Z_Construct_UFunction_ALOCCharacter_GetMaxCritical, "GetMaxCritical" }, // 4047254338
		{ &Z_Construct_UFunction_ALOCCharacter_GetMaxCriticalProb, "GetMaxCriticalProb" }, // 187644316
		{ &Z_Construct_UFunction_ALOCCharacter_GetMaxEndurance, "GetMaxEndurance" }, // 2974106456
		{ &Z_Construct_UFunction_ALOCCharacter_GetMaxExperience, "GetMaxExperience" }, // 3294821329
		{ &Z_Construct_UFunction_ALOCCharacter_GetMaxHealth, "GetMaxHealth" }, // 3395966543
		{ &Z_Construct_UFunction_ALOCCharacter_GetMaxHealthRegen, "GetMaxHealthRegen" }, // 267081879
		{ &Z_Construct_UFunction_ALOCCharacter_GetMaxIntellect, "GetMaxIntellect" }, // 2127861341
		{ &Z_Construct_UFunction_ALOCCharacter_GetMaxMana, "GetMaxMana" }, // 543355888
		{ &Z_Construct_UFunction_ALOCCharacter_GetMaxManaRegen, "GetMaxManaRegen" }, // 3250289682
		{ &Z_Construct_UFunction_ALOCCharacter_GetMaxSpeed, "GetMaxSpeed" }, // 2398447802
		{ &Z_Construct_UFunction_ALOCCharacter_GetMaxStamina, "GetMaxStamina" }, // 365160211
		{ &Z_Construct_UFunction_ALOCCharacter_GetMaxStaminaRegen, "GetMaxStaminaRegen" }, // 2878236126
		{ &Z_Construct_UFunction_ALOCCharacter_GetMaxStrength, "GetMaxStrength" }, // 131868144
		{ &Z_Construct_UFunction_ALOCCharacter_GetMaxWeaponDamage, "GetMaxWeaponDamage" }, // 3148411019
		{ &Z_Construct_UFunction_ALOCCharacter_GetSpeed, "GetSpeed" }, // 3387141149
		{ &Z_Construct_UFunction_ALOCCharacter_GetStamina, "GetStamina" }, // 1518344322
		{ &Z_Construct_UFunction_ALOCCharacter_GetStaminaRegen, "GetStaminaRegen" }, // 3733342053
		{ &Z_Construct_UFunction_ALOCCharacter_GetStrength, "GetStrength" }, // 486135151
		{ &Z_Construct_UFunction_ALOCCharacter_GetWeaponDamage, "GetWeaponDamage" }, // 4019116984
		{ &Z_Construct_UFunction_ALOCCharacter_GrantAbility, "GrantAbility" }, // 2525985727
		{ &Z_Construct_UFunction_ALOCCharacter_LoadAttributeSetFromJson, "LoadAttributeSetFromJson" }, // 732895929
		{ &Z_Construct_UFunction_ALOCCharacter_OnArmorChanged, "OnArmorChanged" }, // 946013964
		{ &Z_Construct_UFunction_ALOCCharacter_OnCriticalChanged, "OnCriticalChanged" }, // 170623266
		{ &Z_Construct_UFunction_ALOCCharacter_OnCriticalProbChanged, "OnCriticalProbChanged" }, // 2799569764
		{ &Z_Construct_UFunction_ALOCCharacter_OnEnduranceChanged, "OnEnduranceChanged" }, // 1778715299
		{ &Z_Construct_UFunction_ALOCCharacter_OnExperienceChanged, "OnExperienceChanged" }, // 3361856793
		{ &Z_Construct_UFunction_ALOCCharacter_OnHealthChanged, "OnHealthChanged" }, // 71582871
		{ &Z_Construct_UFunction_ALOCCharacter_OnHealthRegenChanged, "OnHealthRegenChanged" }, // 1188948400
		{ &Z_Construct_UFunction_ALOCCharacter_OnIntellectChanged, "OnIntellectChanged" }, // 384574485
		{ &Z_Construct_UFunction_ALOCCharacter_OnLevelChanged, "OnLevelChanged" }, // 2648174568
		{ &Z_Construct_UFunction_ALOCCharacter_OnManaChanged, "OnManaChanged" }, // 3448074558
		{ &Z_Construct_UFunction_ALOCCharacter_OnManaRegenChanged, "OnManaRegenChanged" }, // 3093092215
		{ &Z_Construct_UFunction_ALOCCharacter_OnMaxArmorChanged, "OnMaxArmorChanged" }, // 808467054
		{ &Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalChanged, "OnMaxCriticalChanged" }, // 3299480665
		{ &Z_Construct_UFunction_ALOCCharacter_OnMaxCriticalProbChanged, "OnMaxCriticalProbChanged" }, // 315678885
		{ &Z_Construct_UFunction_ALOCCharacter_OnMaxEnduranceChanged, "OnMaxEnduranceChanged" }, // 3069343448
		{ &Z_Construct_UFunction_ALOCCharacter_OnMaxExperienceChanged, "OnMaxExperienceChanged" }, // 1990595312
		{ &Z_Construct_UFunction_ALOCCharacter_OnMaxHealthChanged, "OnMaxHealthChanged" }, // 2341221276
		{ &Z_Construct_UFunction_ALOCCharacter_OnMaxHealthRegenChanged, "OnMaxHealthRegenChanged" }, // 2740917166
		{ &Z_Construct_UFunction_ALOCCharacter_OnMaxIntellectChanged, "OnMaxIntellectChanged" }, // 2292863582
		{ &Z_Construct_UFunction_ALOCCharacter_OnMaxManaChanged, "OnMaxManaChanged" }, // 2549079083
		{ &Z_Construct_UFunction_ALOCCharacter_OnMaxManaRegenChanged, "OnMaxManaRegenChanged" }, // 1502784277
		{ &Z_Construct_UFunction_ALOCCharacter_OnMaxSpeedChanged, "OnMaxSpeedChanged" }, // 1656274625
		{ &Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaChanged, "OnMaxStaminaChanged" }, // 3972210141
		{ &Z_Construct_UFunction_ALOCCharacter_OnMaxStaminaRegenChanged, "OnMaxStaminaRegenChanged" }, // 674051749
		{ &Z_Construct_UFunction_ALOCCharacter_OnMaxStrengthChanged, "OnMaxStrengthChanged" }, // 3111533793
		{ &Z_Construct_UFunction_ALOCCharacter_OnMaxWeaponDamageChanged, "OnMaxWeaponDamageChanged" }, // 1894788597
		{ &Z_Construct_UFunction_ALOCCharacter_OnSpeedChanged, "OnSpeedChanged" }, // 2575088951
		{ &Z_Construct_UFunction_ALOCCharacter_OnStaminaChanged, "OnStaminaChanged" }, // 363670392
		{ &Z_Construct_UFunction_ALOCCharacter_OnStaminaRegenChanged, "OnStaminaRegenChanged" }, // 2411126125
		{ &Z_Construct_UFunction_ALOCCharacter_OnStrengthChanged, "OnStrengthChanged" }, // 3158230859
		{ &Z_Construct_UFunction_ALOCCharacter_OnWeaponDamageChanged, "OnWeaponDamageChanged" }, // 3671174912
		{ &Z_Construct_UFunction_ALOCCharacter_SaveAttributeSetToJson, "SaveAttributeSetToJson" }, // 81321986
		{ &Z_Construct_UFunction_ALOCCharacter_SetArmor, "SetArmor" }, // 713798790
		{ &Z_Construct_UFunction_ALOCCharacter_SetCritical, "SetCritical" }, // 3392287827
		{ &Z_Construct_UFunction_ALOCCharacter_SetCriticalProb, "SetCriticalProb" }, // 1658001160
		{ &Z_Construct_UFunction_ALOCCharacter_SetEndurance, "SetEndurance" }, // 767144089
		{ &Z_Construct_UFunction_ALOCCharacter_SetExperience, "SetExperience" }, // 3028290523
		{ &Z_Construct_UFunction_ALOCCharacter_SetHealth, "SetHealth" }, // 1689173578
		{ &Z_Construct_UFunction_ALOCCharacter_SetHealthRegen, "SetHealthRegen" }, // 3035519441
		{ &Z_Construct_UFunction_ALOCCharacter_SetIntellect, "SetIntellect" }, // 1268175542
		{ &Z_Construct_UFunction_ALOCCharacter_SetLevel, "SetLevel" }, // 3383281807
		{ &Z_Construct_UFunction_ALOCCharacter_SetMana, "SetMana" }, // 793561130
		{ &Z_Construct_UFunction_ALOCCharacter_SetManaRegen, "SetManaRegen" }, // 1919777304
		{ &Z_Construct_UFunction_ALOCCharacter_SetMaxArmor, "SetMaxArmor" }, // 4115261699
		{ &Z_Construct_UFunction_ALOCCharacter_SetMaxCritical, "SetMaxCritical" }, // 695480253
		{ &Z_Construct_UFunction_ALOCCharacter_SetMaxCriticalProb, "SetMaxCriticalProb" }, // 3830630017
		{ &Z_Construct_UFunction_ALOCCharacter_SetMaxEndurance, "SetMaxEndurance" }, // 827102033
		{ &Z_Construct_UFunction_ALOCCharacter_SetMaxExperience, "SetMaxExperience" }, // 3964649452
		{ &Z_Construct_UFunction_ALOCCharacter_SetMaxHealth, "SetMaxHealth" }, // 206868193
		{ &Z_Construct_UFunction_ALOCCharacter_SetMaxHealthRegen, "SetMaxHealthRegen" }, // 514119667
		{ &Z_Construct_UFunction_ALOCCharacter_SetMaxIntellect, "SetMaxIntellect" }, // 1090252536
		{ &Z_Construct_UFunction_ALOCCharacter_SetMaxMana, "SetMaxMana" }, // 277566139
		{ &Z_Construct_UFunction_ALOCCharacter_SetMaxManaRegen, "SetMaxManaRegen" }, // 2397149237
		{ &Z_Construct_UFunction_ALOCCharacter_SetMaxSpeed, "SetMaxSpeed" }, // 2296818739
		{ &Z_Construct_UFunction_ALOCCharacter_SetMaxStamina, "SetMaxStamina" }, // 1901381972
		{ &Z_Construct_UFunction_ALOCCharacter_SetMaxStaminaRegen, "SetMaxStaminaRegen" }, // 3878825100
		{ &Z_Construct_UFunction_ALOCCharacter_SetMaxStrength, "SetMaxStrength" }, // 2117080753
		{ &Z_Construct_UFunction_ALOCCharacter_SetMaxWeaponDamage, "SetMaxWeaponDamage" }, // 2239163738
		{ &Z_Construct_UFunction_ALOCCharacter_SetSpeed, "SetSpeed" }, // 34934549
		{ &Z_Construct_UFunction_ALOCCharacter_SetStamina, "SetStamina" }, // 3064329784
		{ &Z_Construct_UFunction_ALOCCharacter_SetStaminaRegen, "SetStaminaRegen" }, // 646563098
		{ &Z_Construct_UFunction_ALOCCharacter_SetStrength, "SetStrength" }, // 1484035745
		{ &Z_Construct_UFunction_ALOCCharacter_SetWeaponDamage, "SetWeaponDamage" }, // 303103415
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALOCCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "LOCCharacter.h" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALOCCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALOCCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALOCCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALOCCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALOCCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALOCCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALOCCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALOCCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALOCCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALOCCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALOCCharacter_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** Gameplay Ability System Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
		{ "ToolTip", "Gameplay Ability System Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALOCCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALOCCharacter, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALOCCharacter_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALOCCharacter_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALOCCharacter_Statics::NewProp_AttributeData_MetaData[] = {
		{ "Category", "JsonData" },
		{ "Comment", "/** Struct for save attributeset */" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
		{ "ToolTip", "Struct for save attributeset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALOCCharacter_Statics::NewProp_AttributeData = { "AttributeData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALOCCharacter, AttributeData), Z_Construct_UScriptStruct_FLOCAttributeData, METADATA_PARAMS(Z_Construct_UClass_ALOCCharacter_Statics::NewProp_AttributeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALOCCharacter_Statics::NewProp_AttributeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALOCCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALOCCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALOCCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ALOCCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALOCCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALOCCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALOCCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALOCCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ALOCCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALOCCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALOCCharacter_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Comment", "/** AttributeSet?? ???????\xdd\xb4\xcf\xb4?.*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LOCCharacter.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "AttributeSet?? ???????\xdd\xb4\xcf\xb4?." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALOCCharacter_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALOCCharacter, AttributeSet), Z_Construct_UClass_ULOCAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALOCCharacter_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALOCCharacter_Statics::NewProp_AttributeSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALOCCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALOCCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALOCCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALOCCharacter_Statics::NewProp_AbilitySystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALOCCharacter_Statics::NewProp_AttributeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALOCCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALOCCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALOCCharacter_Statics::NewProp_AttributeSet,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALOCCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ALOCCharacter, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALOCCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALOCCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALOCCharacter_Statics::ClassParams = {
		&ALOCCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALOCCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALOCCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALOCCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALOCCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALOCCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALOCCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALOCCharacter, 4125222097);
	template<> LOC_API UClass* StaticClass<ALOCCharacter>()
	{
		return ALOCCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALOCCharacter(Z_Construct_UClass_ALOCCharacter, &ALOCCharacter::StaticClass, TEXT("/Script/LOC"), TEXT("ALOCCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALOCCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
