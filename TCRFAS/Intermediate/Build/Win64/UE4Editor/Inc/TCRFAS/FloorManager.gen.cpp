// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCRFAS/FloorManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorManager() {}
// Cross Module References
	TCRFAS_API UClass* Z_Construct_UClass_AFloorManager_NoRegister();
	TCRFAS_API UClass* Z_Construct_UClass_AFloorManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TCRFAS();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TCRFAS_API UClass* Z_Construct_UClass_AFloorNode_NoRegister();
	TCRFAS_API UClass* Z_Construct_UClass_UFloor_Base_NoRegister();
// End Cross Module References
	void AFloorManager::StaticRegisterNativesAFloorManager()
	{
	}
	UClass* Z_Construct_UClass_AFloorManager_NoRegister()
	{
		return AFloorManager::StaticClass();
	}
	struct Z_Construct_UClass_AFloorManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorNodeReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FloorNodeReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_FloorNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_FloorNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_FloorNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Floors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_Floors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Floors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TCRFAS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloorManager.h" },
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_FloorNodeReference_MetaData[] = {
		{ "Category", "FloorManager" },
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_FloorNodeReference = { "FloorNodeReference", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorManager, FloorNodeReference), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFloorManager_Statics::NewProp_FloorNodeReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_FloorNodeReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_m_FloorNodes_MetaData[] = {
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_m_FloorNodes = { "m_FloorNodes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorManager, m_FloorNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFloorManager_Statics::NewProp_m_FloorNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_m_FloorNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_m_FloorNodes_Inner = { "m_FloorNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFloorNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorManager_Statics::NewProp_m_Floors_MetaData[] = {
		{ "ModuleRelativePath", "FloorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_m_Floors = { "m_Floors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorManager, m_Floors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFloorManager_Statics::NewProp_m_Floors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::NewProp_m_Floors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorManager_Statics::NewProp_m_Floors_Inner = { "m_Floors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFloor_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_FloorNodeReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_m_FloorNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_m_FloorNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_m_Floors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorManager_Statics::NewProp_m_Floors_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloorManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFloorManager_Statics::ClassParams = {
		&AFloorManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFloorManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFloorManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloorManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFloorManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloorManager, 625975692);
	template<> TCRFAS_API UClass* StaticClass<AFloorManager>()
	{
		return AFloorManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloorManager(Z_Construct_UClass_AFloorManager, &AFloorManager::StaticClass, TEXT("/Script/TCRFAS"), TEXT("AFloorManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
