// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCRFAS/UIManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIManager() {}
// Cross Module References
	TCRFAS_API UEnum* Z_Construct_UEnum_TCRFAS_Screen();
	UPackage* Z_Construct_UPackage__Script_TCRFAS();
	TCRFAS_API UClass* Z_Construct_UClass_AUIManager_NoRegister();
	TCRFAS_API UClass* Z_Construct_UClass_AUIManager();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	static UEnum* Screen_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TCRFAS_Screen, Z_Construct_UPackage__Script_TCRFAS(), TEXT("Screen"));
		}
		return Singleton;
	}
	template<> TCRFAS_API UEnum* StaticEnum<Screen>()
	{
		return Screen_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Screen(Screen_StaticEnum, TEXT("/Script/TCRFAS"), TEXT("Screen"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TCRFAS_Screen_Hash() { return 883535262U; }
	UEnum* Z_Construct_UEnum_TCRFAS_Screen()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TCRFAS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Screen"), 0, Get_Z_Construct_UEnum_TCRFAS_Screen_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CommandBoard", (int64)CommandBoard },
				{ "SkillBoard", (int64)SkillBoard },
				{ "ArenaMenu", (int64)ArenaMenu },
				{ "DomainBoard", (int64)DomainBoard },
				{ "DomainClash", (int64)DomainClash },
				{ "Memoria", (int64)Memoria },
				{ "PartyMenu", (int64)PartyMenu },
				{ "TurnIndicator", (int64)TurnIndicator },
				{ "EndCombatMenu", (int64)EndCombatMenu },
				{ "Notifcation", (int64)Notifcation },
				{ "PartyStats", (int64)PartyStats },
				{ "Dialogue", (int64)Dialogue },
				{ "_NumberOfScreens", (int64)_NumberOfScreens },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "_NumberOfScreens.Name", "_NumberOfScreens" },
				{ "ArenaMenu.Name", "ArenaMenu" },
				{ "CommandBoard.Name", "CommandBoard" },
				{ "Dialogue.Name", "Dialogue" },
				{ "DomainBoard.Name", "DomainBoard" },
				{ "DomainClash.Name", "DomainClash" },
				{ "EndCombatMenu.Name", "EndCombatMenu" },
				{ "Memoria.Name", "Memoria" },
				{ "ModuleRelativePath", "UIManager.h" },
				{ "Notifcation.Name", "Notifcation" },
				{ "PartyMenu.Name", "PartyMenu" },
				{ "PartyStats.Name", "PartyStats" },
				{ "SkillBoard.Name", "SkillBoard" },
				{ "TurnIndicator.Name", "TurnIndicator" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TCRFAS,
				nullptr,
				"Screen",
				"Screen",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AUIManager::StaticRegisterNativesAUIManager()
	{
	}
	UClass* Z_Construct_UClass_AUIManager_NoRegister()
	{
		return AUIManager::StaticClass();
	}
	struct Z_Construct_UClass_AUIManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmptyMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUIManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TCRFAS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIManager_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UIManager.h" },
		{ "ModuleRelativePath", "UIManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIManager_Statics::NewProp_EmptyMesh_MetaData[] = {
		{ "ModuleRelativePath", "UIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIManager_Statics::NewProp_EmptyMesh = { "EmptyMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIManager, EmptyMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIManager_Statics::NewProp_EmptyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIManager_Statics::NewProp_EmptyMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUIManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIManager_Statics::NewProp_EmptyMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUIManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUIManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUIManager_Statics::ClassParams = {
		&AUIManager::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUIManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUIManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUIManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUIManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUIManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUIManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUIManager, 3079992606);
	template<> TCRFAS_API UClass* StaticClass<AUIManager>()
	{
		return AUIManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUIManager(Z_Construct_UClass_AUIManager, &AUIManager::StaticClass, TEXT("/Script/TCRFAS"), TEXT("AUIManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUIManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
