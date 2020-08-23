// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCRFAS/Commandboard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommandboard() {}
// Cross Module References
	TCRFAS_API UClass* Z_Construct_UClass_ACommandboard_NoRegister();
	TCRFAS_API UClass* Z_Construct_UClass_ACommandboard();
	TCRFAS_API UClass* Z_Construct_UClass_AUiScreen_Base();
	UPackage* Z_Construct_UPackage__Script_TCRFAS();
// End Cross Module References
	void ACommandboard::StaticRegisterNativesACommandboard()
	{
	}
	UClass* Z_Construct_UClass_ACommandboard_NoRegister()
	{
		return ACommandboard::StaticClass();
	}
	struct Z_Construct_UClass_ACommandboard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACommandboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUiScreen_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_TCRFAS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACommandboard_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Commandboard.h" },
		{ "ModuleRelativePath", "Commandboard.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACommandboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACommandboard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACommandboard_Statics::ClassParams = {
		&ACommandboard::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACommandboard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACommandboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACommandboard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACommandboard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACommandboard, 3738594909);
	template<> TCRFAS_API UClass* StaticClass<ACommandboard>()
	{
		return ACommandboard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACommandboard(Z_Construct_UClass_ACommandboard, &ACommandboard::StaticClass, TEXT("/Script/TCRFAS"), TEXT("ACommandboard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACommandboard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
