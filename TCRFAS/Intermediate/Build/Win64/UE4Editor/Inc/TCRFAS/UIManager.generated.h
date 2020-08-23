// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCRFAS_UIManager_generated_h
#error "UIManager.generated.h already included, missing '#pragma once' in UIManager.h"
#endif
#define TCRFAS_UIManager_generated_h

#define TCRFAS_Source_TCRFAS_UIManager_h_37_SPARSE_DATA
#define TCRFAS_Source_TCRFAS_UIManager_h_37_RPC_WRAPPERS
#define TCRFAS_Source_TCRFAS_UIManager_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define TCRFAS_Source_TCRFAS_UIManager_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUIManager(); \
	friend struct Z_Construct_UClass_AUIManager_Statics; \
public: \
	DECLARE_CLASS(AUIManager, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCRFAS"), NO_API) \
	DECLARE_SERIALIZER(AUIManager)


#define TCRFAS_Source_TCRFAS_UIManager_h_37_INCLASS \
private: \
	static void StaticRegisterNativesAUIManager(); \
	friend struct Z_Construct_UClass_AUIManager_Statics; \
public: \
	DECLARE_CLASS(AUIManager, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCRFAS"), NO_API) \
	DECLARE_SERIALIZER(AUIManager)


#define TCRFAS_Source_TCRFAS_UIManager_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUIManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUIManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUIManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUIManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUIManager(AUIManager&&); \
	NO_API AUIManager(const AUIManager&); \
public:


#define TCRFAS_Source_TCRFAS_UIManager_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUIManager(AUIManager&&); \
	NO_API AUIManager(const AUIManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUIManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUIManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUIManager)


#define TCRFAS_Source_TCRFAS_UIManager_h_37_PRIVATE_PROPERTY_OFFSET
#define TCRFAS_Source_TCRFAS_UIManager_h_34_PROLOG
#define TCRFAS_Source_TCRFAS_UIManager_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCRFAS_Source_TCRFAS_UIManager_h_37_PRIVATE_PROPERTY_OFFSET \
	TCRFAS_Source_TCRFAS_UIManager_h_37_SPARSE_DATA \
	TCRFAS_Source_TCRFAS_UIManager_h_37_RPC_WRAPPERS \
	TCRFAS_Source_TCRFAS_UIManager_h_37_INCLASS \
	TCRFAS_Source_TCRFAS_UIManager_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TCRFAS_Source_TCRFAS_UIManager_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCRFAS_Source_TCRFAS_UIManager_h_37_PRIVATE_PROPERTY_OFFSET \
	TCRFAS_Source_TCRFAS_UIManager_h_37_SPARSE_DATA \
	TCRFAS_Source_TCRFAS_UIManager_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	TCRFAS_Source_TCRFAS_UIManager_h_37_INCLASS_NO_PURE_DECLS \
	TCRFAS_Source_TCRFAS_UIManager_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCRFAS_API UClass* StaticClass<class AUIManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TCRFAS_Source_TCRFAS_UIManager_h


#define FOREACH_ENUM_SCREEN(op) \
	op(CommandBoard) \
	op(SkillBoard) \
	op(ArenaMenu) \
	op(DomainBoard) \
	op(DomainClash) \
	op(Memoria) \
	op(PartyMenu) \
	op(TurnIndicator) \
	op(EndCombatMenu) \
	op(Notifcation) \
	op(PartyStats) \
	op(Dialogue) \
	op(_NumberOfScreens) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
