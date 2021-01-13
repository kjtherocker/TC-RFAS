// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCRFAS/SpawnManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnManager() {}
// Cross Module References
	TCRFAS_API UClass* Z_Construct_UClass_ASpawnManager_NoRegister();
	TCRFAS_API UClass* Z_Construct_UClass_ASpawnManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TCRFAS();
// End Cross Module References
	void ASpawnManager::StaticRegisterNativesASpawnManager()
	{
	}
	UClass* Z_Construct_UClass_ASpawnManager_NoRegister()
	{
		return ASpawnManager::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TCRFAS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnManager.h" },
		{ "ModuleRelativePath", "SpawnManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawnManager_Statics::ClassParams = {
		&ASpawnManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASpawnManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawnManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnManager, 1360704038);
	template<> TCRFAS_API UClass* StaticClass<ASpawnManager>()
	{
		return ASpawnManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnManager(Z_Construct_UClass_ASpawnManager, &ASpawnManager::StaticClass, TEXT("/Script/TCRFAS"), TEXT("ASpawnManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
