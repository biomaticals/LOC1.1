// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Zone/Public/DangerZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDangerZone() {}
// Cross Module References
	LOC_API UClass* Z_Construct_UClass_ADangerZone_NoRegister();
	LOC_API UClass* Z_Construct_UClass_ADangerZone();
	LOC_API UClass* Z_Construct_UClass_AZone();
	UPackage* Z_Construct_UPackage__Script_LOC();
// End Cross Module References
	void ADangerZone::StaticRegisterNativesADangerZone()
	{
	}
	UClass* Z_Construct_UClass_ADangerZone_NoRegister()
	{
		return ADangerZone::StaticClass();
	}
	struct Z_Construct_UClass_ADangerZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADangerZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AZone,
		(UObject* (*)())Z_Construct_UPackage__Script_LOC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADangerZone_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Zone/Public/DangerZone.h" },
		{ "ModuleRelativePath", "Zone/Public/DangerZone.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADangerZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADangerZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADangerZone_Statics::ClassParams = {
		&ADangerZone::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADangerZone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADangerZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADangerZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADangerZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADangerZone, 2713106895);
	template<> LOC_API UClass* StaticClass<ADangerZone>()
	{
		return ADangerZone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADangerZone(Z_Construct_UClass_ADangerZone, &ADangerZone::StaticClass, TEXT("/Script/LOC"), TEXT("ADangerZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADangerZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
