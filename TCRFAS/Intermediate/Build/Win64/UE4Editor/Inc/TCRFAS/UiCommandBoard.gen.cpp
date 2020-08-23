// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCRFAS/UiCommandBoard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUiCommandBoard() {}
// Cross Module References
	TCRFAS_API UClass* Z_Construct_UClass_AUiCommandBoard_NoRegister();
	TCRFAS_API UClass* Z_Construct_UClass_AUiCommandBoard();
	TCRFAS_API UClass* Z_Construct_UClass_AUiScreen_Base();
	UPackage* Z_Construct_UPackage__Script_TCRFAS();
// End Cross Module References
	void AUiCommandBoard::StaticRegisterNativesAUiCommandBoard()
	{
	}
	UClass* Z_Construct_UClass_AUiCommandBoard_NoRegister()
	{
		return AUiCommandBoard::StaticClass();
	}
	struct Z_Construct_UClass_AUiCommandBoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUiCommandBoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUiScreen_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_TCRFAS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUiCommandBoard_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UiCommandBoard.h" },
		{ "ModuleRelativePath", "UiCommandBoard.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUiCommandBoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUiCommandBoard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUiCommandBoard_Statics::ClassParams = {
		&AUiCommandBoard::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUiCommandBoard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUiCommandBoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUiCommandBoard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUiCommandBoard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUiCommandBoard, 1749769859);
	template<> TCRFAS_API UClass* StaticClass<AUiCommandBoard>()
	{
		return AUiCommandBoard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUiCommandBoard(Z_Construct_UClass_AUiCommandBoard, &AUiCommandBoard::StaticClass, TEXT("/Script/TCRFAS"), TEXT("AUiCommandBoard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUiCommandBoard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
