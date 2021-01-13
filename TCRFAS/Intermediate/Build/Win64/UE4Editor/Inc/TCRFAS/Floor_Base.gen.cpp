// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCRFAS/Floor_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloor_Base() {}
// Cross Module References
	TCRFAS_API UClass* Z_Construct_UClass_UFloor_Base_NoRegister();
	TCRFAS_API UClass* Z_Construct_UClass_UFloor_Base();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TCRFAS();
// End Cross Module References
	void UFloor_Base::StaticRegisterNativesUFloor_Base()
	{
	}
	UClass* Z_Construct_UClass_UFloor_Base_NoRegister()
	{
		return UFloor_Base::StaticClass();
	}
	struct Z_Construct_UClass_UFloor_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloor_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TCRFAS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloor_Base_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Floor_Base.h" },
		{ "ModuleRelativePath", "Floor_Base.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloor_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloor_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFloor_Base_Statics::ClassParams = {
		&UFloor_Base::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFloor_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFloor_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloor_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFloor_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFloor_Base, 3924291540);
	template<> TCRFAS_API UClass* StaticClass<UFloor_Base>()
	{
		return UFloor_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFloor_Base(Z_Construct_UClass_UFloor_Base, &UFloor_Base::StaticClass, TEXT("/Script/TCRFAS"), TEXT("UFloor_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloor_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
