// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCRFAS/UiScreen_Commandboard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUiScreen_Commandboard() {}
// Cross Module References
	TCRFAS_API UClass* Z_Construct_UClass_AUiScreen_Commandboard_NoRegister();
	TCRFAS_API UClass* Z_Construct_UClass_AUiScreen_Commandboard();
	TCRFAS_API UClass* Z_Construct_UClass_AUiScreen_Base();
	UPackage* Z_Construct_UPackage__Script_TCRFAS();
// End Cross Module References
	void AUiScreen_Commandboard::StaticRegisterNativesAUiScreen_Commandboard()
	{
	}
	UClass* Z_Construct_UClass_AUiScreen_Commandboard_NoRegister()
	{
		return AUiScreen_Commandboard::StaticClass();
	}
	struct Z_Construct_UClass_AUiScreen_Commandboard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUiScreen_Commandboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUiScreen_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_TCRFAS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUiScreen_Commandboard_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UiScreen_Commandboard.h" },
		{ "ModuleRelativePath", "UiScreen_Commandboard.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUiScreen_Commandboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUiScreen_Commandboard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUiScreen_Commandboard_Statics::ClassParams = {
		&AUiScreen_Commandboard::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUiScreen_Commandboard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUiScreen_Commandboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUiScreen_Commandboard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUiScreen_Commandboard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUiScreen_Commandboard, 641937889);
	template<> TCRFAS_API UClass* StaticClass<AUiScreen_Commandboard>()
	{
		return AUiScreen_Commandboard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUiScreen_Commandboard(Z_Construct_UClass_AUiScreen_Commandboard, &AUiScreen_Commandboard::StaticClass, TEXT("/Script/TCRFAS"), TEXT("AUiScreen_Commandboard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUiScreen_Commandboard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
