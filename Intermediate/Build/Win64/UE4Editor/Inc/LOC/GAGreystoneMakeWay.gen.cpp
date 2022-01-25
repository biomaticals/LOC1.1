// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAGreystoneMakeWay() {}
// Cross Module References
	LOC_API UClass* Z_Construct_UClass_UGAGreystoneMakeWay_NoRegister();
	LOC_API UClass* Z_Construct_UClass_UGAGreystoneMakeWay();
	LOC_API UClass* Z_Construct_UClass_UGASelfCastBase();
	UPackage* Z_Construct_UPackage__Script_LOC();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGAGreystoneMakeWay::execOnHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGAGreystoneMakeWay::execOnHitStart)
	{
		P_GET_STRUCT(FGameplayEventData,Z_Param_Payload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHitStart(Z_Param_Payload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGAGreystoneMakeWay::execOnCancelled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCancelled();
		P_NATIVE_END;
	}
	void UGAGreystoneMakeWay::StaticRegisterNativesUGAGreystoneMakeWay()
	{
		UClass* Class = UGAGreystoneMakeWay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCancelled", &UGAGreystoneMakeWay::execOnCancelled },
			{ "OnHit", &UGAGreystoneMakeWay::execOnHit },
			{ "OnHitStart", &UGAGreystoneMakeWay::execOnHitStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGAGreystoneMakeWay_OnCancelled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAGreystoneMakeWay_OnCancelled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAGreystoneMakeWay_OnCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAGreystoneMakeWay, nullptr, "OnCancelled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAGreystoneMakeWay_OnCancelled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAGreystoneMakeWay_OnCancelled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAGreystoneMakeWay_OnCancelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAGreystoneMakeWay_OnCancelled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAGreystoneMakeWay_OnHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAGreystoneMakeWay_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAGreystoneMakeWay_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAGreystoneMakeWay, nullptr, "OnHit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAGreystoneMakeWay_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAGreystoneMakeWay_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAGreystoneMakeWay_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAGreystoneMakeWay_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAGreystoneMakeWay_OnHitStart_Statics
	{
		struct GAGreystoneMakeWay_eventOnHitStart_Parms
		{
			FGameplayEventData Payload;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAGreystoneMakeWay_OnHitStart_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAGreystoneMakeWay_OnHitStart_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAGreystoneMakeWay_eventOnHitStart_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(Z_Construct_UFunction_UGAGreystoneMakeWay_OnHitStart_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAGreystoneMakeWay_OnHitStart_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAGreystoneMakeWay_OnHitStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAGreystoneMakeWay_OnHitStart_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAGreystoneMakeWay_OnHitStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAGreystoneMakeWay_OnHitStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAGreystoneMakeWay, nullptr, "OnHitStart", nullptr, nullptr, sizeof(GAGreystoneMakeWay_eventOnHitStart_Parms), Z_Construct_UFunction_UGAGreystoneMakeWay_OnHitStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAGreystoneMakeWay_OnHitStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAGreystoneMakeWay_OnHitStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAGreystoneMakeWay_OnHitStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAGreystoneMakeWay_OnHitStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAGreystoneMakeWay_OnHitStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGAGreystoneMakeWay_NoRegister()
	{
		return UGAGreystoneMakeWay::StaticClass();
	}
	struct Z_Construct_UClass_UGAGreystoneMakeWay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentHitCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalHitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalHitCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsForHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondsForHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GEforTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GEforTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GELevelforTaget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GELevelforTaget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAGreystoneMakeWay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGASelfCastBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LOC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGAGreystoneMakeWay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAGreystoneMakeWay_OnCancelled, "OnCancelled" }, // 1672208024
		{ &Z_Construct_UFunction_UGAGreystoneMakeWay_OnHit, "OnHit" }, // 1935328702
		{ &Z_Construct_UFunction_UGAGreystoneMakeWay_OnHitStart, "OnHitStart" }, // 1487209512
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGreystoneMakeWay_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_CurrentHitCount_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_CurrentHitCount = { "CurrentHitCount", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGreystoneMakeWay, CurrentHitCount), METADATA_PARAMS(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_CurrentHitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_CurrentHitCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_TotalHitCount_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_TotalHitCount = { "TotalHitCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGreystoneMakeWay, TotalHitCount), METADATA_PARAMS(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_TotalHitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_TotalHitCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_SecondsForHit_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_SecondsForHit = { "SecondsForHit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGreystoneMakeWay, SecondsForHit), METADATA_PARAMS(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_SecondsForHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_SecondsForHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_DamageRange_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_DamageRange = { "DamageRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGreystoneMakeWay, DamageRange), METADATA_PARAMS(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_DamageRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_DamageRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_SkillMontage_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_SkillMontage = { "SkillMontage", nullptr, (EPropertyFlags)0x0010000000030001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGreystoneMakeWay, SkillMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_SkillMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_SkillMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_GEforTarget_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_GEforTarget = { "GEforTarget", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGreystoneMakeWay, GEforTarget), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_GEforTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_GEforTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_GELevelforTaget_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_GELevelforTaget = { "GELevelforTaget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGreystoneMakeWay, GELevelforTaget), METADATA_PARAMS(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_GELevelforTaget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_GELevelforTaget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGreystoneMakeWay, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAGreystoneMakeWay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_CurrentHitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_TotalHitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_SecondsForHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_DamageRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_SkillMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_GEforTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_GELevelforTaget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_ActorsToIgnore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAGreystoneMakeWay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAGreystoneMakeWay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAGreystoneMakeWay_Statics::ClassParams = {
		&UGAGreystoneMakeWay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGAGreystoneMakeWay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAGreystoneMakeWay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAGreystoneMakeWay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAGreystoneMakeWay, 3454483104);
	template<> LOC_API UClass* StaticClass<UGAGreystoneMakeWay>()
	{
		return UGAGreystoneMakeWay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAGreystoneMakeWay(Z_Construct_UClass_UGAGreystoneMakeWay, &UGAGreystoneMakeWay::StaticClass, TEXT("/Script/LOC"), TEXT("UGAGreystoneMakeWay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAGreystoneMakeWay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
