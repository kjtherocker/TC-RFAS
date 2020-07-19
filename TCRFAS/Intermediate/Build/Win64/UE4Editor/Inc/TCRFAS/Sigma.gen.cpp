// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCRFAS/Sigma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSigma() {}
// Cross Module References
	TCRFAS_API UClass* Z_Construct_UClass_ASigma_NoRegister();
	TCRFAS_API UClass* Z_Construct_UClass_ASigma();
	TCRFAS_API UClass* Z_Construct_UClass_ACreature_Base();
	UPackage* Z_Construct_UPackage__Script_TCRFAS();
// End Cross Module References
	void ASigma::StaticRegisterNativesASigma()
	{
	}
	UClass* Z_Construct_UClass_ASigma_NoRegister()
	{
		return ASigma::StaticClass();
	}
	struct Z_Construct_UClass_ASigma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASigma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACreature_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_TCRFAS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASigma_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Sigma.h" },
		{ "ModuleRelativePath", "Sigma.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASigma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASigma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASigma_Statics::ClassParams = {
		&ASigma::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASigma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASigma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASigma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASigma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASigma, 2262067592);
	template<> TCRFAS_API UClass* StaticClass<ASigma>()
	{
		return ASigma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASigma(Z_Construct_UClass_ASigma, &ASigma::StaticClass, TEXT("/Script/TCRFAS"), TEXT("ASigma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASigma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
