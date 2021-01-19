// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCRFAS/EnumConstants.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnumConstants() {}
// Cross Module References
	TCRFAS_API UEnum* Z_Construct_UEnum_TCRFAS_CardinalNodeDirections();
	UPackage* Z_Construct_UPackage__Script_TCRFAS();
// End Cross Module References
	static UEnum* CardinalNodeDirections_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TCRFAS_CardinalNodeDirections, Z_Construct_UPackage__Script_TCRFAS(), TEXT("CardinalNodeDirections"));
		}
		return Singleton;
	}
	template<> TCRFAS_API UEnum* StaticEnum<CardinalNodeDirections>()
	{
		return CardinalNodeDirections_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CardinalNodeDirections(CardinalNodeDirections_StaticEnum, TEXT("/Script/TCRFAS"), TEXT("CardinalNodeDirections"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TCRFAS_CardinalNodeDirections_Hash() { return 2488958449U; }
	UEnum* Z_Construct_UEnum_TCRFAS_CardinalNodeDirections()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TCRFAS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CardinalNodeDirections"), 0, Get_Z_Construct_UEnum_TCRFAS_CardinalNodeDirections_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CardinalNodeDirections::Empty", (int64)CardinalNodeDirections::Empty },
				{ "CardinalNodeDirections::Up", (int64)CardinalNodeDirections::Up },
				{ "CardinalNodeDirections::Down", (int64)CardinalNodeDirections::Down },
				{ "CardinalNodeDirections::Left", (int64)CardinalNodeDirections::Left },
				{ "CardinalNodeDirections::Right", (int64)CardinalNodeDirections::Right },
				{ "CardinalNodeDirections::AllSidesOpen", (int64)CardinalNodeDirections::AllSidesOpen },
				{ "CardinalNodeDirections::UpDown", (int64)CardinalNodeDirections::UpDown },
				{ "CardinalNodeDirections::UpLeft", (int64)CardinalNodeDirections::UpLeft },
				{ "CardinalNodeDirections::Upright", (int64)CardinalNodeDirections::Upright },
				{ "CardinalNodeDirections::LeftDown", (int64)CardinalNodeDirections::LeftDown },
				{ "CardinalNodeDirections::RightDown", (int64)CardinalNodeDirections::RightDown },
				{ "CardinalNodeDirections::LeftRight", (int64)CardinalNodeDirections::LeftRight },
				{ "CardinalNodeDirections::UpLeftRight", (int64)CardinalNodeDirections::UpLeftRight },
				{ "CardinalNodeDirections::UpLeftDown", (int64)CardinalNodeDirections::UpLeftDown },
				{ "CardinalNodeDirections::UpRightDown", (int64)CardinalNodeDirections::UpRightDown },
				{ "CardinalNodeDirections::DownLeftRight", (int64)CardinalNodeDirections::DownLeftRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllSidesOpen.Comment", "/**\n * \n */" },
				{ "AllSidesOpen.Name", "CardinalNodeDirections::AllSidesOpen" },
				{ "Comment", "/**\n * \n */" },
				{ "Down.Comment", "/**\n * \n */" },
				{ "Down.Name", "CardinalNodeDirections::Down" },
				{ "DownLeftRight.Comment", "/**\n * \n */" },
				{ "DownLeftRight.Name", "CardinalNodeDirections::DownLeftRight" },
				{ "Empty.Comment", "/**\n * \n */" },
				{ "Empty.Name", "CardinalNodeDirections::Empty" },
				{ "Left.Comment", "/**\n * \n */" },
				{ "Left.Name", "CardinalNodeDirections::Left" },
				{ "LeftDown.Comment", "/**\n * \n */" },
				{ "LeftDown.Name", "CardinalNodeDirections::LeftDown" },
				{ "LeftRight.Comment", "/**\n * \n */" },
				{ "LeftRight.Name", "CardinalNodeDirections::LeftRight" },
				{ "ModuleRelativePath", "EnumConstants.h" },
				{ "Right.Comment", "/**\n * \n */" },
				{ "Right.Name", "CardinalNodeDirections::Right" },
				{ "RightDown.Comment", "/**\n * \n */" },
				{ "RightDown.Name", "CardinalNodeDirections::RightDown" },
				{ "Up.Comment", "/**\n * \n */" },
				{ "Up.Name", "CardinalNodeDirections::Up" },
				{ "UpDown.Comment", "/**\n * \n */" },
				{ "UpDown.Name", "CardinalNodeDirections::UpDown" },
				{ "UpLeft.Comment", "/**\n * \n */" },
				{ "UpLeft.Name", "CardinalNodeDirections::UpLeft" },
				{ "UpLeftDown.Comment", "/**\n * \n */" },
				{ "UpLeftDown.Name", "CardinalNodeDirections::UpLeftDown" },
				{ "UpLeftRight.Comment", "/**\n * \n */" },
				{ "UpLeftRight.Name", "CardinalNodeDirections::UpLeftRight" },
				{ "Upright.Comment", "/**\n * \n */" },
				{ "Upright.Name", "CardinalNodeDirections::Upright" },
				{ "UpRightDown.Comment", "/**\n * \n */" },
				{ "UpRightDown.Name", "CardinalNodeDirections::UpRightDown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TCRFAS,
				nullptr,
				"CardinalNodeDirections",
				"CardinalNodeDirections",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
