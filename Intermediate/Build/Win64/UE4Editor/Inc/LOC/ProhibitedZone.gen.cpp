// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Zone/Public/ProhibitedZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProhibitedZone() {}
// Cross Module References
	LOC_API UClass* Z_Construct_UClass_AProhibitedZone_NoRegister();
	LOC_API UClass* Z_Construct_UClass_AProhibitedZone();
	LOC_API UClass* Z_Construct_UClass_AZone();
	UPackage* Z_Construct_UPackage__Script_LOC();
// End Cross Module References
	void AProhibitedZone::StaticRegisterNativesAProhibitedZone()
	{
	}
	UClass* Z_Construct_UClass_AProhibitedZone_NoRegister()
	{
		return AProhibitedZone::StaticClass();
	}
	struct Z_Construct_UClass_AProhibitedZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProhibitedZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AZone,
		(UObject* (*)())Z_Construct_UPackage__Script_LOC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProhibitedZone_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Zone/Public/ProhibitedZone.h" },
		{ "ModuleRelativePath", "Zone/Public/ProhibitedZone.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProhibitedZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProhibitedZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProhibitedZone_Statics::ClassParams = {
		&AProhibitedZone::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProhibitedZone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProhibitedZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProhibitedZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProhibitedZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProhibitedZone, 1052774250);
	template<> LOC_API UClass* StaticClass<AProhibitedZone>()
	{
		return AProhibitedZone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProhibitedZone(Z_Construct_UClass_AProhibitedZone, &AProhibitedZone::StaticClass, TEXT("/Script/LOC"), TEXT("AProhibitedZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProhibitedZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
