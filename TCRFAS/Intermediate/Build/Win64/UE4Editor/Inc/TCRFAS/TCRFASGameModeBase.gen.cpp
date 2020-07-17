// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCRFAS/TCRFASGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTCRFASGameModeBase() {}
// Cross Module References
	TCRFAS_API UClass* Z_Construct_UClass_ATCRFASGameModeBase_NoRegister();
	TCRFAS_API UClass* Z_Construct_UClass_ATCRFASGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TCRFAS();
// End Cross Module References
	void ATCRFASGameModeBase::StaticRegisterNativesATCRFASGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATCRFASGameModeBase_NoRegister()
	{
		return ATCRFASGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATCRFASGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATCRFASGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TCRFAS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCRFASGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TCRFASGameModeBase.h" },
		{ "ModuleRelativePath", "TCRFASGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATCRFASGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATCRFASGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATCRFASGameModeBase_Statics::ClassParams = {
		&ATCRFASGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATCRFASGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATCRFASGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATCRFASGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATCRFASGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATCRFASGameModeBase, 2495683713);
	template<> TCRFAS_API UClass* StaticClass<ATCRFASGameModeBase>()
	{
		return ATCRFASGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATCRFASGameModeBase(Z_Construct_UClass_ATCRFASGameModeBase, &ATCRFASGameModeBase::StaticClass, TEXT("/Script/TCRFAS"), TEXT("ATCRFASGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATCRFASGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
