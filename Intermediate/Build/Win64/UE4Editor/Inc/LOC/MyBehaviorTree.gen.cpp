// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LOC/Public/MyBehaviorTree.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBehaviorTree() {}
// Cross Module References
	LOC_API UClass* Z_Construct_UClass_UMyBehaviorTree_NoRegister();
	LOC_API UClass* Z_Construct_UClass_UMyBehaviorTree();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree();
	UPackage* Z_Construct_UPackage__Script_LOC();
// End Cross Module References
	void UMyBehaviorTree::StaticRegisterNativesUMyBehaviorTree()
	{
	}
	UClass* Z_Construct_UClass_UMyBehaviorTree_NoRegister()
	{
		return UMyBehaviorTree::StaticClass();
	}
	struct Z_Construct_UClass_UMyBehaviorTree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyBehaviorTree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBehaviorTree,
		(UObject* (*)())Z_Construct_UPackage__Script_LOC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBehaviorTree_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyBehaviorTree.h" },
		{ "ModuleRelativePath", "Public/MyBehaviorTree.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyBehaviorTree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBehaviorTree>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyBehaviorTree_Statics::ClassParams = {
		&UMyBehaviorTree::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMyBehaviorTree_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyBehaviorTree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyBehaviorTree()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyBehaviorTree_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyBehaviorTree, 2254085884);
	template<> LOC_API UClass* StaticClass<UMyBehaviorTree>()
	{
		return UMyBehaviorTree::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyBehaviorTree(Z_Construct_UClass_UMyBehaviorTree, &UMyBehaviorTree::StaticClass, TEXT("/Script/LOC"), TEXT("UMyBehaviorTree"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBehaviorTree);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
