// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCRFAS/UiScreen_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUiScreen_Base() {}
// Cross Module References
	TCRFAS_API UClass* Z_Construct_UClass_AUiScreen_Base_NoRegister();
	TCRFAS_API UClass* Z_Construct_UClass_AUiScreen_Base();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TCRFAS();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AUiScreen_Base::StaticRegisterNativesAUiScreen_Base()
	{
	}
	UClass* Z_Construct_UClass_AUiScreen_Base_NoRegister()
	{
		return AUiScreen_Base::StaticClass();
	}
	struct Z_Construct_UClass_AUiScreen_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_UserWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_UserWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUiScreen_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TCRFAS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUiScreen_Base_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UiScreen_Base.h" },
		{ "ModuleRelativePath", "UiScreen_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUiScreen_Base_Statics::NewProp_m_UserWidget_MetaData[] = {
		{ "Category", "UiScreen_Base" },
		{ "Comment", "/**\n\x09 * \\brief This is the main Widget the screen uses\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UiScreen_Base.h" },
		{ "ToolTip", "\\brief This is the main Widget the screen uses" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUiScreen_Base_Statics::NewProp_m_UserWidget = { "m_UserWidget", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUiScreen_Base, m_UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUiScreen_Base_Statics::NewProp_m_UserWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUiScreen_Base_Statics::NewProp_m_UserWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUiScreen_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUiScreen_Base_Statics::NewProp_m_UserWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUiScreen_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUiScreen_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUiScreen_Base_Statics::ClassParams = {
		&AUiScreen_Base::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUiScreen_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUiScreen_Base_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUiScreen_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUiScreen_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUiScreen_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUiScreen_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUiScreen_Base, 3404717214);
	template<> TCRFAS_API UClass* StaticClass<AUiScreen_Base>()
	{
		return AUiScreen_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUiScreen_Base(Z_Construct_UClass_AUiScreen_Base, &AUiScreen_Base::StaticClass, TEXT("/Script/TCRFAS"), TEXT("AUiScreen_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUiScreen_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
