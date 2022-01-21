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
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UGAGreystoneMakeWay::StaticRegisterNativesUGAGreystoneMakeWay()
	{
	}
	UClass* Z_Construct_UClass_UGAGreystoneMakeWay_NoRegister()
	{
		return UGAGreystoneMakeWay::StaticClass();
	}
	struct Z_Construct_UClass_UGAGreystoneMakeWay_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GEforTaget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GEforTaget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GELevelforTaget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GELevelforTaget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAGreystoneMakeWay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGASelfCastBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LOC,
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_TotalHitCount = { "TotalHitCount", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGreystoneMakeWay, TotalHitCount), METADATA_PARAMS(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_TotalHitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_TotalHitCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_GEforTaget_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_GEforTaget = { "GEforTaget", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGreystoneMakeWay, GEforTaget), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_GEforTaget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_GEforTaget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_GELevelforTaget_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_GELevelforTaget = { "GELevelforTaget", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGreystoneMakeWay, GELevelforTaget), METADATA_PARAMS(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_GELevelforTaget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_GELevelforTaget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_SkillMontage_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_SkillMontage = { "SkillMontage", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAGreystoneMakeWay, SkillMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_SkillMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_SkillMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAGreystoneMakeWay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_CurrentHitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_TotalHitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_GEforTaget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_GELevelforTaget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGreystoneMakeWay_Statics::NewProp_SkillMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAGreystoneMakeWay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAGreystoneMakeWay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAGreystoneMakeWay_Statics::ClassParams = {
		&UGAGreystoneMakeWay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGAGreystoneMakeWay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(UGAGreystoneMakeWay, 3181716166);
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
