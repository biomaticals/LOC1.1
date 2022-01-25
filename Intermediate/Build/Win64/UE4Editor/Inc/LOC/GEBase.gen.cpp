// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/GameplayAbilitySystem/GameplayEffect/GEBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGEBase() {}
// Cross Module References
	LOC_API UClass* Z_Construct_UClass_UGEBase_NoRegister();
	LOC_API UClass* Z_Construct_UClass_UGEBase();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
	UPackage* Z_Construct_UPackage__Script_LOC();
// End Cross Module References
	void UGEBase::StaticRegisterNativesUGEBase()
	{
	}
	UClass* Z_Construct_UClass_UGEBase_NoRegister()
	{
		return UGEBase::StaticClass();
	}
	struct Z_Construct_UClass_UGEBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGEBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_LOC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGEBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayAbilitySystem/GameplayEffect/GEBase.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayEffect/GEBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGEBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGEBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGEBase_Statics::ClassParams = {
		&UGEBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGEBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGEBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGEBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGEBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGEBase, 3657560298);
	template<> LOC_API UClass* StaticClass<UGEBase>()
	{
		return UGEBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGEBase(Z_Construct_UClass_UGEBase, &UGEBase::StaticClass, TEXT("/Script/LOC"), TEXT("UGEBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGEBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
