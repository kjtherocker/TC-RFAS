// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCRFAS/UIManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIManager() {}
// Cross Module References
	TCRFAS_API UClass* Z_Construct_UClass_AUIManager_NoRegister();
	TCRFAS_API UClass* Z_Construct_UClass_AUIManager();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TCRFAS();
// End Cross Module References
	void AUIManager::StaticRegisterNativesAUIManager()
	{
	}
	UClass* Z_Construct_UClass_AUIManager_NoRegister()
	{
		return AUIManager::StaticClass();
	}
	struct Z_Construct_UClass_AUIManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUIManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TCRFAS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIManager_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UIManager.h" },
		{ "ModuleRelativePath", "UIManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUIManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUIManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUIManager_Statics::ClassParams = {
		&AUIManager::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AUIManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUIManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUIManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUIManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUIManager, 1023269170);
	template<> TCRFAS_API UClass* StaticClass<AUIManager>()
	{
		return AUIManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUIManager(Z_Construct_UClass_AUIManager, &AUIManager::StaticClass, TEXT("/Script/TCRFAS"), TEXT("AUIManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUIManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
