// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCRFAS_EnumConstants_generated_h
#error "EnumConstants.generated.h already included, missing '#pragma once' in EnumConstants.h"
#endif
#define TCRFAS_EnumConstants_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TCRFAS_Source_TCRFAS_EnumConstants_h


#define FOREACH_ENUM_CARDINALNODEDIRECTIONS(op) \
	op(CardinalNodeDirections::Empty) \
	op(CardinalNodeDirections::Up) \
	op(CardinalNodeDirections::Down) \
	op(CardinalNodeDirections::Left) \
	op(CardinalNodeDirections::Right) \
	op(CardinalNodeDirections::AllSidesOpen) \
	op(CardinalNodeDirections::UpDown) \
	op(CardinalNodeDirections::UpLeft) \
	op(CardinalNodeDirections::Upright) \
	op(CardinalNodeDirections::LeftDown) \
	op(CardinalNodeDirections::RightDown) \
	op(CardinalNodeDirections::LeftRight) \
	op(CardinalNodeDirections::UpLeftRight) \
	op(CardinalNodeDirections::UpLeftDown) \
	op(CardinalNodeDirections::UpRightDown) \
	op(CardinalNodeDirections::DownLeftRight) 

enum class CardinalNodeDirections : uint8;
template<> TCRFAS_API UEnum* StaticEnum<CardinalNodeDirections>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
