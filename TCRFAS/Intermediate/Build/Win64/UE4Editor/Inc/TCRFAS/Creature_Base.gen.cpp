// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCRFAS/Creature_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreature_Base() {}
// Cross Module References
	TCRFAS_API UEnum* Z_Construct_UEnum_TCRFAS_Charactertype();
	UPackage* Z_Construct_UPackage__Script_TCRFAS();
	TCRFAS_API UEnum* Z_Construct_UEnum_TCRFAS_DomainStages();
	TCRFAS_API UEnum* Z_Construct_UEnum_TCRFAS_CreaturesAilment();
	TCRFAS_API UEnum* Z_Construct_UEnum_TCRFAS_ElementalTypes();
	TCRFAS_API UClass* Z_Construct_UClass_ACreature_Base_NoRegister();
	TCRFAS_API UClass* Z_Construct_UClass_ACreature_Base();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* Charactertype_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TCRFAS_Charactertype, Z_Construct_UPackage__Script_TCRFAS(), TEXT("Charactertype"));
		}
		return Singleton;
	}
	template<> TCRFAS_API UEnum* StaticEnum<Charactertype>()
	{
		return Charactertype_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Charactertype(Charactertype_StaticEnum, TEXT("/Script/TCRFAS"), TEXT("Charactertype"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TCRFAS_Charactertype_Hash() { return 950884559U; }
	UEnum* Z_Construct_UEnum_TCRFAS_Charactertype()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TCRFAS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Charactertype"), 0, Get_Z_Construct_UEnum_TCRFAS_Charactertype_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Undefined", (int64)Undefined },
				{ "Ally", (int64)Ally },
				{ "Enemy", (int64)Enemy },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ally.Name", "Ally" },
				{ "Enemy.Name", "Enemy" },
				{ "ModuleRelativePath", "Creature_Base.h" },
				{ "Undefined.Name", "Undefined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TCRFAS,
				nullptr,
				"Charactertype",
				"Charactertype",
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
	static UEnum* DomainStages_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TCRFAS_DomainStages, Z_Construct_UPackage__Script_TCRFAS(), TEXT("DomainStages"));
		}
		return Singleton;
	}
	template<> TCRFAS_API UEnum* StaticEnum<DomainStages>()
	{
		return DomainStages_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_DomainStages(DomainStages_StaticEnum, TEXT("/Script/TCRFAS"), TEXT("DomainStages"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TCRFAS_DomainStages_Hash() { return 2463082908U; }
	UEnum* Z_Construct_UEnum_TCRFAS_DomainStages()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TCRFAS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("DomainStages"), 0, Get_Z_Construct_UEnum_TCRFAS_DomainStages_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "NotActivated", (int64)NotActivated },
				{ "Encroaching", (int64)Encroaching },
				{ "Finished", (int64)Finished },
				{ "End", (int64)End },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Encroaching.Name", "Encroaching" },
				{ "End.Name", "End" },
				{ "Finished.Name", "Finished" },
				{ "ModuleRelativePath", "Creature_Base.h" },
				{ "NotActivated.Name", "NotActivated" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TCRFAS,
				nullptr,
				"DomainStages",
				"DomainStages",
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
	static UEnum* CreaturesAilment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TCRFAS_CreaturesAilment, Z_Construct_UPackage__Script_TCRFAS(), TEXT("CreaturesAilment"));
		}
		return Singleton;
	}
	template<> TCRFAS_API UEnum* StaticEnum<CreaturesAilment>()
	{
		return CreaturesAilment_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CreaturesAilment(CreaturesAilment_StaticEnum, TEXT("/Script/TCRFAS"), TEXT("CreaturesAilment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TCRFAS_CreaturesAilment_Hash() { return 3426694745U; }
	UEnum* Z_Construct_UEnum_TCRFAS_CreaturesAilment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TCRFAS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CreaturesAilment"), 0, Get_Z_Construct_UEnum_TCRFAS_CreaturesAilment_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "None", (int64)None },
				{ "Poison", (int64)Poison },
				{ "Daze", (int64)Daze },
				{ "Sleep", (int64)Sleep },
				{ "Rage", (int64)Rage },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Daze.Name", "Daze" },
				{ "ModuleRelativePath", "Creature_Base.h" },
				{ "None.Name", "None" },
				{ "Poison.Name", "Poison" },
				{ "Rage.Name", "Rage" },
				{ "Sleep.Name", "Sleep" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TCRFAS,
				nullptr,
				"CreaturesAilment",
				"CreaturesAilment",
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
	static UEnum* ElementalTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TCRFAS_ElementalTypes, Z_Construct_UPackage__Script_TCRFAS(), TEXT("ElementalTypes"));
		}
		return Singleton;
	}
	template<> TCRFAS_API UEnum* StaticEnum<ElementalTypes>()
	{
		return ElementalTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ElementalTypes(ElementalTypes_StaticEnum, TEXT("/Script/TCRFAS"), TEXT("ElementalTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TCRFAS_ElementalTypes_Hash() { return 989022618U; }
	UEnum* Z_Construct_UEnum_TCRFAS_ElementalTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TCRFAS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ElementalTypes"), 0, Get_Z_Construct_UEnum_TCRFAS_ElementalTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Null", (int64)Null },
				{ "Fire", (int64)Fire },
				{ "Water", (int64)Water },
				{ "Wind", (int64)Wind },
				{ "Lighting", (int64)Lighting },
				{ "Shadow", (int64)Shadow },
				{ "Light", (int64)Light },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Fire.Name", "Fire" },
				{ "Light.Name", "Light" },
				{ "Lighting.Name", "Lighting" },
				{ "ModuleRelativePath", "Creature_Base.h" },
				{ "Null.Name", "Null" },
				{ "Shadow.Name", "Shadow" },
				{ "Water.Name", "Water" },
				{ "Wind.Name", "Wind" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TCRFAS,
				nullptr,
				"ElementalTypes",
				"ElementalTypes",
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
	void ACreature_Base::StaticRegisterNativesACreature_Base()
	{
	}
	UClass* Z_Construct_UClass_ACreature_Base_NoRegister()
	{
		return ACreature_Base::StaticClass();
	}
	struct Z_Construct_UClass_ACreature_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMana_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentMana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACreature_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TCRFAS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreature_Base_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Creature_Base.h" },
		{ "ModuleRelativePath", "Creature_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreature_Base_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Creature_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACreature_Base_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACreature_Base, Name), METADATA_PARAMS(Z_Construct_UClass_ACreature_Base_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreature_Base_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreature_Base_Statics::NewProp_CurrentMana_MetaData[] = {
		{ "ModuleRelativePath", "Creature_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACreature_Base_Statics::NewProp_CurrentMana = { "CurrentMana", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACreature_Base, CurrentMana), METADATA_PARAMS(Z_Construct_UClass_ACreature_Base_Statics::NewProp_CurrentMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreature_Base_Statics::NewProp_CurrentMana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreature_Base_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "ModuleRelativePath", "Creature_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACreature_Base_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACreature_Base, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_ACreature_Base_Statics::NewProp_CurrentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreature_Base_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreature_Base_Statics::NewProp_BaseMesh_MetaData[] = {
		{ "Category", "Creature_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Creature_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreature_Base_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACreature_Base, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACreature_Base_Statics::NewProp_BaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreature_Base_Statics::NewProp_BaseMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACreature_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreature_Base_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreature_Base_Statics::NewProp_CurrentMana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreature_Base_Statics::NewProp_CurrentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreature_Base_Statics::NewProp_BaseMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACreature_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreature_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACreature_Base_Statics::ClassParams = {
		&ACreature_Base::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACreature_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACreature_Base_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACreature_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACreature_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACreature_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACreature_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACreature_Base, 2929715843);
	template<> TCRFAS_API UClass* StaticClass<ACreature_Base>()
	{
		return ACreature_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACreature_Base(Z_Construct_UClass_ACreature_Base, &ACreature_Base::StaticClass, TEXT("/Script/TCRFAS"), TEXT("ACreature_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACreature_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
