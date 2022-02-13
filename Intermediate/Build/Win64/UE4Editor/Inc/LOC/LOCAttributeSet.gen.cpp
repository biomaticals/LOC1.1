// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLOCAttributeSet() {}
// Cross Module References
	LOC_API UScriptStruct* Z_Construct_UScriptStruct_FLOCAttributeData();
	UPackage* Z_Construct_UPackage__Script_LOC();
	LOC_API UScriptStruct* Z_Construct_UScriptStruct_FLOCAttributeDetailData();
	LOC_API UClass* Z_Construct_UClass_ULOCAttributeSet_NoRegister();
	LOC_API UClass* Z_Construct_UClass_ULOCAttributeSet();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
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
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLOCAttributeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLOCAttributeData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLOCAttributeData_Statics::NewProp_Details_Inner = { "Details", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLOCAttributeDetailData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLOCAttributeData_Statics::NewProp_Details_MetaData[] = {
		{ "Category", "AttributeData" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
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
	uint32 Get_Z_Construct_UScriptStruct_FLOCAttributeData_Hash() { return 1078179248U; }
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
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLOCAttributeDetailData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "AttributeData" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLOCAttributeDetailData, AttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLOCAttributeDetailData_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "Category", "AttributeData" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
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
	uint32 Get_Z_Construct_UScriptStruct_FLOCAttributeDetailData_Hash() { return 539101282U; }
	void ULOCAttributeSet::StaticRegisterNativesULOCAttributeSet()
	{
	}
	UClass* Z_Construct_UClass_ULOCAttributeSet_NoRegister()
	{
		return ULOCAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_ULOCAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Experience_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Experience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxExperience_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxExperience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthRegen_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HealthRegen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealthRegen_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxHealthRegen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxMana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaRegen_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ManaRegen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxManaRegen_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxManaRegen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxStamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaRegen_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaminaRegen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStaminaRegen_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxStaminaRegen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Critical_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Critical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCritical_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxCritical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CriticalProb_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CriticalProb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCriticalProb_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxCriticalProb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Endurance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Endurance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEndurance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxEndurance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intellect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Intellect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxIntellect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxIntellect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWeaponDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxWeaponDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Armor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxArmor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxArmor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULOCAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_LOC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ???? */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, Level), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Experience_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ????\xc4\xa1 */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "????\xc4\xa1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Experience = { "Experience", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, Experience), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Experience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Experience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxExperience_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ?\xd6\xb4? ????\xc4\xa1 */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "?\xd6\xb4? ????\xc4\xa1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxExperience = { "MaxExperience", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, MaxExperience), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxExperience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* \xc3\xbc?? */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "\xc3\xbc??" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ?\xd6\xb4? \xc3\xbc?? */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "?\xd6\xb4? \xc3\xbc??" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_HealthRegen_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* \xc3\xbc?? ???? */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "\xc3\xbc?? ????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_HealthRegen = { "HealthRegen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, HealthRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_HealthRegen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_HealthRegen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxHealthRegen_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ?\xd6\xb4? \xc3\xbc?? ???? */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "?\xd6\xb4? \xc3\xbc?? ????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxHealthRegen = { "MaxHealthRegen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, MaxHealthRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxHealthRegen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxHealthRegen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ???? */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Mana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Mana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxMana_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ?\xd6\xb4? ???? */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "?\xd6\xb4? ????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxMana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_ManaRegen_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ???? ???? */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_ManaRegen = { "ManaRegen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, ManaRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_ManaRegen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_ManaRegen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxManaRegen_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ?\xd6\xb4? ???? ???? */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "?\xd6\xb4? ???? ????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxManaRegen = { "MaxManaRegen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, MaxManaRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxManaRegen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxManaRegen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Stamina_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ?????? */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Stamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Stamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ?\xd6\xb4? ?????? */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "?\xd6\xb4? ??????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, MaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxStamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_StaminaRegen_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ?????? ???? */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_StaminaRegen = { "StaminaRegen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, StaminaRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_StaminaRegen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_StaminaRegen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxStaminaRegen_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ?\xd6\xb4? ?????? ???? */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "?\xd6\xb4? ?????? ????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxStaminaRegen = { "MaxStaminaRegen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, MaxStaminaRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxStaminaRegen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxStaminaRegen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Critical_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* \xc4\xa1??\xc5\xb8 */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "\xc4\xa1??\xc5\xb8" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Critical = { "Critical", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, Critical), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Critical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Critical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxCritical_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ?\xd6\xb4? \xc4\xa1??\xc5\xb8 */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "?\xd6\xb4? \xc4\xa1??\xc5\xb8" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxCritical = { "MaxCritical", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, MaxCritical), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxCritical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxCritical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_CriticalProb_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* \xc4\xa1???? */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "\xc4\xa1????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_CriticalProb = { "CriticalProb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, CriticalProb), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_CriticalProb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_CriticalProb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxCriticalProb_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ?\xd6\xb4? \xc4\xa1???? */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "?\xd6\xb4? \xc4\xa1????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxCriticalProb = { "MaxCriticalProb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, MaxCriticalProb), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxCriticalProb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxCriticalProb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ?? ( MeleeAttack ?? ???? ) */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "?? ( MeleeAttack ?? ???? )" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, Strength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxStrength_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ?\xd6\xb4? ?? ( MeleeAttack ?? ???? ) */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "?\xd6\xb4? ?? ( MeleeAttack ?? ???? )" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxStrength = { "MaxStrength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, MaxStrength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Endurance_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ?\xce\xb3? ( ?????? MeleeAttack ?? ???? ) */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "?\xce\xb3? ( ?????? MeleeAttack ?? ???? )" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Endurance = { "Endurance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, Endurance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Endurance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Endurance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxEndurance_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ?\xd6\xb4? ?\xce\xb3? ( ?????? MeleeAttack ?? ???? ) */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "?\xd6\xb4? ?\xce\xb3? ( ?????? MeleeAttack ?? ???? )" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxEndurance = { "MaxEndurance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, MaxEndurance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxEndurance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxEndurance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Intellect_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ???? ( ???\xc5\xb8? ???? ???\xdd\xbf? ???? ) */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "???? ( ???\xc5\xb8? ???? ???\xdd\xbf? ???? )" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Intellect = { "Intellect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, Intellect), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Intellect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Intellect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxIntellect_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ?\xd6\xb4? ???? ( ?????? MeleeAttack ?? ???? ) */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "?\xd6\xb4? ???? ( ?????? MeleeAttack ?? ???? )" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxIntellect = { "MaxIntellect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, MaxIntellect), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxIntellect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxIntellect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ?\xcc\xb5? ?\xd3\xb5? */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "?\xcc\xb5? ?\xd3\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, Speed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ?\xd6\xb4? ?\xcc\xb5? ?\xd3\xb5? */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "?\xd6\xb4? ?\xcc\xb5? ?\xd3\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, MaxSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_WeaponDamage_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ???? ???\xdd\xb7?  */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "???? ???\xdd\xb7?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_WeaponDamage = { "WeaponDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, WeaponDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_WeaponDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_WeaponDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxWeaponDamage_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ?\xd6\xb4? ???? ???\xdd\xb7?  */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "?\xd6\xb4? ???? ???\xdd\xb7?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxWeaponDamage = { "MaxWeaponDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, MaxWeaponDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxWeaponDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxWeaponDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ??????  */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, Armor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Armor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxArmor_MetaData[] = {
		{ "Category", "Abilities|Attributes" },
		{ "Comment", "/* ?\xd6\xb4? ??????  */" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h" },
		{ "ToolTip", "?\xd6\xb4? ??????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxArmor = { "MaxArmor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULOCAttributeSet, MaxArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxArmor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxArmor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULOCAttributeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Experience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_HealthRegen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxHealthRegen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Mana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxMana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_ManaRegen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxManaRegen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Stamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_StaminaRegen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxStaminaRegen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Critical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxCritical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_CriticalProb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxCriticalProb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Endurance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxEndurance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Intellect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxIntellect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_WeaponDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxWeaponDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_Armor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULOCAttributeSet_Statics::NewProp_MaxArmor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULOCAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULOCAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULOCAttributeSet_Statics::ClassParams = {
		&ULOCAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULOCAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULOCAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULOCAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULOCAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULOCAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULOCAttributeSet, 2874793758);
	template<> LOC_API UClass* StaticClass<ULOCAttributeSet>()
	{
		return ULOCAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULOCAttributeSet(Z_Construct_UClass_ULOCAttributeSet, &ULOCAttributeSet::StaticClass, TEXT("/Script/LOC"), TEXT("ULOCAttributeSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULOCAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
