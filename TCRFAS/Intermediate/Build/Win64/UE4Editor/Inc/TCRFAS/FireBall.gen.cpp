// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCRFAS/FireBall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireBall() {}
// Cross Module References
	TCRFAS_API UClass* Z_Construct_UClass_UFireBall_NoRegister();
	TCRFAS_API UClass* Z_Construct_UClass_UFireBall();
	TCRFAS_API UClass* Z_Construct_UClass_USkills_Base();
	UPackage* Z_Construct_UPackage__Script_TCRFAS();
// End Cross Module References
	void UFireBall::StaticRegisterNativesUFireBall()
	{
	}
	UClass* Z_Construct_UClass_UFireBall_NoRegister()
	{
		return UFireBall::StaticClass();
	}
	struct Z_Construct_UClass_UFireBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFireBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkills_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_TCRFAS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireBall_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FireBall.h" },
		{ "ModuleRelativePath", "FireBall.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFireBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFireBall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFireBall_Statics::ClassParams = {
		&UFireBall::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFireBall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFireBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFireBall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFireBall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFireBall, 3221125572);
	template<> TCRFAS_API UClass* StaticClass<UFireBall>()
	{
		return UFireBall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFireBall(Z_Construct_UClass_UFireBall, &UFireBall::StaticClass, TEXT("/Script/TCRFAS"), TEXT("UFireBall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFireBall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
