// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCRFAS_Creature_Base_generated_h
#error "Creature_Base.generated.h already included, missing '#pragma once' in Creature_Base.h"
#endif
#define TCRFAS_Creature_Base_generated_h

#define TCRFAS_Source_TCRFAS_Creature_Base_h_54_SPARSE_DATA
#define TCRFAS_Source_TCRFAS_Creature_Base_h_54_RPC_WRAPPERS
#define TCRFAS_Source_TCRFAS_Creature_Base_h_54_RPC_WRAPPERS_NO_PURE_DECLS
#define TCRFAS_Source_TCRFAS_Creature_Base_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACreature_Base(); \
	friend struct Z_Construct_UClass_ACreature_Base_Statics; \
public: \
	DECLARE_CLASS(ACreature_Base, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCRFAS"), NO_API) \
	DECLARE_SERIALIZER(ACreature_Base)


#define TCRFAS_Source_TCRFAS_Creature_Base_h_54_INCLASS \
private: \
	static void StaticRegisterNativesACreature_Base(); \
	friend struct Z_Construct_UClass_ACreature_Base_Statics; \
public: \
	DECLARE_CLASS(ACreature_Base, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCRFAS"), NO_API) \
	DECLARE_SERIALIZER(ACreature_Base)


#define TCRFAS_Source_TCRFAS_Creature_Base_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACreature_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACreature_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACreature_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACreature_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACreature_Base(ACreature_Base&&); \
	NO_API ACreature_Base(const ACreature_Base&); \
public:


#define TCRFAS_Source_TCRFAS_Creature_Base_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACreature_Base(ACreature_Base&&); \
	NO_API ACreature_Base(const ACreature_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACreature_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACreature_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACreature_Base)


#define TCRFAS_Source_TCRFAS_Creature_Base_h_54_PRIVATE_PROPERTY_OFFSET
#define TCRFAS_Source_TCRFAS_Creature_Base_h_51_PROLOG
#define TCRFAS_Source_TCRFAS_Creature_Base_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCRFAS_Source_TCRFAS_Creature_Base_h_54_PRIVATE_PROPERTY_OFFSET \
	TCRFAS_Source_TCRFAS_Creature_Base_h_54_SPARSE_DATA \
	TCRFAS_Source_TCRFAS_Creature_Base_h_54_RPC_WRAPPERS \
	TCRFAS_Source_TCRFAS_Creature_Base_h_54_INCLASS \
	TCRFAS_Source_TCRFAS_Creature_Base_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TCRFAS_Source_TCRFAS_Creature_Base_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCRFAS_Source_TCRFAS_Creature_Base_h_54_PRIVATE_PROPERTY_OFFSET \
	TCRFAS_Source_TCRFAS_Creature_Base_h_54_SPARSE_DATA \
	TCRFAS_Source_TCRFAS_Creature_Base_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	TCRFAS_Source_TCRFAS_Creature_Base_h_54_INCLASS_NO_PURE_DECLS \
	TCRFAS_Source_TCRFAS_Creature_Base_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCRFAS_API UClass* StaticClass<class ACreature_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TCRFAS_Source_TCRFAS_Creature_Base_h


#define FOREACH_ENUM_CHARACTERTYPE(op) \
	op(Undefined) \
	op(Ally) \
	op(Enemy) 
#define FOREACH_ENUM_DOMAINSTAGES(op) \
	op(NotActivated) \
	op(Encroaching) \
	op(Finished) \
	op(End) 
#define FOREACH_ENUM_AILMENT(op) \
	op(None) \
	op(Poison) \
	op(Daze) \
	op(Sleep) \
	op(Rage) 
#define FOREACH_ENUM_ELEMENTALTYPES(op) \
	op(Null) \
	op(Fire) \
	op(Water) \
	op(Wind) \
	op(Lighting) \
	op(Shadow) \
	op(Light) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
