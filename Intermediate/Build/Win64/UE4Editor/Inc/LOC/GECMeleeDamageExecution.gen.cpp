// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LOC/Public/GECMeleeDamageExecution.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGECMeleeDamageExecution() {}
// Cross Module References
	LOC_API UClass* Z_Construct_UClass_UGECMeleeDamageExecution_NoRegister();
	LOC_API UClass* Z_Construct_UClass_UGECMeleeDamageExecution();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	UPackage* Z_Construct_UPackage__Script_LOC();
// End Cross Module References
	void UGECMeleeDamageExecution::StaticRegisterNativesUGECMeleeDamageExecution()
	{
	}
	UClass* Z_Construct_UClass_UGECMeleeDamageExecution_NoRegister()
	{
		return UGECMeleeDamageExecution::StaticClass();
	}
	struct Z_Construct_UClass_UGECMeleeDamageExecution_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGECMeleeDamageExecution_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_LOC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGECMeleeDamageExecution_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  ???????? ???????? ?????\xd5\xb4\xcf\xb4?. Strength, Endurance, Weapon Damage?? ???? ?????\xcf\xb0? Health_Current?? ?????\xd5\xb4\xcf\xb4?.\n */" },
		{ "IncludePath", "GECMeleeDamageExecution.h" },
		{ "ModuleRelativePath", "Public/GECMeleeDamageExecution.h" },
		{ "ToolTip", "???????? ???????? ?????\xd5\xb4\xcf\xb4?. Strength, Endurance, Weapon Damage?? ???? ?????\xcf\xb0? Health_Current?? ?????\xd5\xb4\xcf\xb4?." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGECMeleeDamageExecution_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGECMeleeDamageExecution>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGECMeleeDamageExecution_Statics::ClassParams = {
		&UGECMeleeDamageExecution::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGECMeleeDamageExecution_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGECMeleeDamageExecution_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGECMeleeDamageExecution()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGECMeleeDamageExecution_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGECMeleeDamageExecution, 261466289);
	template<> LOC_API UClass* StaticClass<UGECMeleeDamageExecution>()
	{
		return UGECMeleeDamageExecution::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGECMeleeDamageExecution(Z_Construct_UClass_UGECMeleeDamageExecution, &UGECMeleeDamageExecution::StaticClass, TEXT("/Script/LOC"), TEXT("UGECMeleeDamageExecution"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGECMeleeDamageExecution);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
