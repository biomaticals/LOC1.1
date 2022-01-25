// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/GameplayAbilitySystem/GameplayEffect/Public/GEMakewayCooldown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGEMakewayCooldown() {}
// Cross Module References
	LOC_API UClass* Z_Construct_UClass_UGEMakewayCooldown_NoRegister();
	LOC_API UClass* Z_Construct_UClass_UGEMakewayCooldown();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
	UPackage* Z_Construct_UPackage__Script_LOC();
// End Cross Module References
	void UGEMakewayCooldown::StaticRegisterNativesUGEMakewayCooldown()
	{
	}
	UClass* Z_Construct_UClass_UGEMakewayCooldown_NoRegister()
	{
		return UGEMakewayCooldown::StaticClass();
	}
	struct Z_Construct_UClass_UGEMakewayCooldown_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGEMakewayCooldown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_LOC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGEMakewayCooldown_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameplayAbilitySystem/GameplayEffect/Public/GEMakewayCooldown.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayEffect/Public/GEMakewayCooldown.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGEMakewayCooldown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGEMakewayCooldown>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGEMakewayCooldown_Statics::ClassParams = {
		&UGEMakewayCooldown::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGEMakewayCooldown_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGEMakewayCooldown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGEMakewayCooldown()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGEMakewayCooldown_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGEMakewayCooldown, 2264697459);
	template<> LOC_API UClass* StaticClass<UGEMakewayCooldown>()
	{
		return UGEMakewayCooldown::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGEMakewayCooldown(Z_Construct_UClass_UGEMakewayCooldown, &UGEMakewayCooldown::StaticClass, TEXT("/Script/LOC"), TEXT("UGEMakewayCooldown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGEMakewayCooldown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
