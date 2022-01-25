// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeway.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAGreystoneMakeway() {}
// Cross Module References
	LOC_API UClass* Z_Construct_UClass_UGAGreystoneMakeway_NoRegister();
	LOC_API UClass* Z_Construct_UClass_UGAGreystoneMakeway();
	LOC_API UClass* Z_Construct_UClass_UGASelfCastBase();
	UPackage* Z_Construct_UPackage__Script_LOC();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LOC_API UClass* Z_Construct_UClass_UGEMakewayTargetEffect_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(UGAGreystoneMakeway::execOnHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGAGreystoneMakeway::execTimerFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimerFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGAGreystoneMakeway::execOnHitStart)
	{
		P_GET_STRUCT(FGameplayEventData,Z_Param_Payload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHitStart(Z_Param_Payload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGAGreystoneMakeway::execOnCancelled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCancelled();
		P_NATIVE_END;
	}
	void UGAGreystoneMakeway::StaticRegisterNativesUGAGreystoneMakeway()
	{
		UClass* Class = UGAGreystoneMakeway::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCancelled", &UGAGreystoneMakeway::execOnCancelled },
			{ "OnHit", &UGAGreystoneMakeway::execOnHit },
			{ "OnHitStart", &UGAGreystoneMakeway::execOnHitStart },
			{ "TimerFunction", &UGAGreystoneMakeway::execTimerFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGAGreystoneMakeway_OnCancelled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAGreystoneMakeway_OnCancelled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAGreystoneMakeway_OnCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAGreystoneMakeway, nullptr, "OnCancelled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAGreystoneMakeway_OnCancelled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAGreystoneMakeway_OnCancelled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAGreystoneMakeway_OnCancelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAGreystoneMakeway_OnCancelled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAGreystoneMakeway_OnHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAGreystoneMakeway_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAGreystoneMakeway_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAGreystoneMakeway, nullptr, "OnHit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAGreystoneMakeway_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAGreystoneMakeway_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAGreystoneMakeway_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAGreystoneMakeway_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAGreystoneMakeway_OnHitStart_Statics
	{
		struct GAGreystoneMakeway_eventOnHitStart_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAGreystoneMakeway_OnHitStart_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAGreystoneMakeway_OnHitStart_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAGreystoneMakeway_eventOnHitStart_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(Z_Construct_UFunction_UGAGreystoneMakeway_OnHitStart_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAGreystoneMakeway_OnHitStart_Statics::NewProp_Payload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAGreystoneMakeway_OnHitStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAGreystoneMakeway_OnHitStart_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAGreystoneMakeway_OnHitStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAGreystoneMakeway_OnHitStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAGreystoneMakeway, nullptr, "OnHitStart", nullptr, nullptr, sizeof(GAGreystoneMakeway_eventOnHitStart_Parms), Z_Construct_UFunction_UGAGreystoneMakeway_OnHitStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAGreystoneMakeway_OnHitStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAGreystoneMakeway_OnHitStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAGreystoneMakeway_OnHitStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAGreystoneMakeway_OnHitStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAGreystoneMakeway_OnHitStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAGreystoneMakeway_TimerFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAGreystoneMakeway_TimerFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeway.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAGreystoneMakeway_TimerFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAGreystoneMakeway, nullptr, "TimerFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAGreystoneMakeway_TimerFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAGreystoneMakeway_TimerFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAGreystoneMakeway_TimerFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAGreystoneMakeway_TimerFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGAGreystoneMakeway_NoRegister()
	{
		return UGAGreystoneMakeway::StaticClass();
	}
	struct Z_Construct_UClass_UGAGreystoneMakeway_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GELevelforTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GELevelforTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimerHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAGreystoneMakeway_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGASelfCastBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LOC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGAGreystoneMakeway_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAGreystoneMakeway_OnCancelled, "OnCancelled" }, // 1077915137
		{ &Z_Construct_UFunction_UGAGreystoneMakeway_OnHit, "OnHit" }, // 3502685536
		{ &Z_Construct_UFunction_UGAGreystoneMakeway_OnHitStart, "OnHitStart" }, // 2936878692
		{ &Z_Construct_UFunction_UGAGreystoneMakeway_TimerFunction, "TimerFunction" }, // 1108546134
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGreystoneMakeway_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Greystone?? Makeway ??\xc5\xb3 \n */" },
		{ "IncludePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeway.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeway.h" },
		{ "ToolTip", "Greystone?? Makeway ??\xc5\xb3" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_TotalHitCount_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "// ?? \xc5\xb8?? \xc8\xbd??\n" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeway.h" },
		{ "ToolTip", "?? \xc5\xb8?? \xc8\xbd??" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_TotalHitCount = { "TotalHitCount", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGreystoneMakeway, TotalHitCount), METADATA_PARAMS(Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_TotalHitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_TotalHitCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_SecondsForHit_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "// ?\xd1\xb9??? \xc5\xb8?\xdd\xbf? ?\xc9\xb8??? ?\xc3\xb0?\n" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeway.h" },
		{ "ToolTip", "?\xd1\xb9??? \xc5\xb8?\xdd\xbf? ?\xc9\xb8??? ?\xc3\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_SecondsForHit = { "SecondsForHit", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGreystoneMakeway, SecondsForHit), METADATA_PARAMS(Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_SecondsForHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_SecondsForHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_DamageRange_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "// ??\xc5\xb3 \xc5\xb8?? ????\n" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeway.h" },
		{ "ToolTip", "??\xc5\xb3 \xc5\xb8?? ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_DamageRange = { "DamageRange", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGreystoneMakeway, DamageRange), METADATA_PARAMS(Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_DamageRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_DamageRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_SkillMontage_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "// ??\xc5\xb3 ??\xc5\xb8??\n" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeway.h" },
		{ "ToolTip", "??\xc5\xb3 ??\xc5\xb8??" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_SkillMontage = { "SkillMontage", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGreystoneMakeway, SkillMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_SkillMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_SkillMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_GEforTarget_MetaData[] = {
		{ "Category", "Skill" },
		{ "Comment", "// \xc5\xb8?? ?????? ?????? GameplayEffect\n" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeway.h" },
		{ "ToolTip", "\xc5\xb8?? ?????? ?????? GameplayEffect" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_GEforTarget = { "GEforTarget", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGreystoneMakeway, GEforTarget), Z_Construct_UClass_UGEMakewayTargetEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_GEforTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_GEforTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_GELevelforTarget_MetaData[] = {
		{ "Category", "Skill" },
		{ "Comment", "// \xc5\xb8?? ?????? ?????? GameplayEffect?? ????\n" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeway.h" },
		{ "ToolTip", "\xc5\xb8?? ?????? ?????? GameplayEffect?? ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_GELevelforTarget = { "GELevelforTarget", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGreystoneMakeway, GELevelforTarget), METADATA_PARAMS(Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_GELevelforTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_GELevelforTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_TimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeway.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_TimerHandle = { "TimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGreystoneMakeway, TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_TimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_TimerHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAGreystoneMakeway_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_TotalHitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_SecondsForHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_DamageRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_SkillMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_GEforTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_GELevelforTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGreystoneMakeway_Statics::NewProp_TimerHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAGreystoneMakeway_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAGreystoneMakeway>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAGreystoneMakeway_Statics::ClassParams = {
		&UGAGreystoneMakeway::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGAGreystoneMakeway_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeway_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAGreystoneMakeway_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeway_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAGreystoneMakeway()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAGreystoneMakeway_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAGreystoneMakeway, 2452946766);
	template<> LOC_API UClass* StaticClass<UGAGreystoneMakeway>()
	{
		return UGAGreystoneMakeway::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAGreystoneMakeway(Z_Construct_UClass_UGAGreystoneMakeway, &UGAGreystoneMakeway::StaticClass, TEXT("/Script/LOC"), TEXT("UGAGreystoneMakeway"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAGreystoneMakeway);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
