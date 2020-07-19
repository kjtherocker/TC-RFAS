// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCRFAS_Sigma_generated_h
#error "Sigma.generated.h already included, missing '#pragma once' in Sigma.h"
#endif
#define TCRFAS_Sigma_generated_h

#define TCRFAS_Source_TCRFAS_Sigma_h_13_SPARSE_DATA
#define TCRFAS_Source_TCRFAS_Sigma_h_13_RPC_WRAPPERS
#define TCRFAS_Source_TCRFAS_Sigma_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TCRFAS_Source_TCRFAS_Sigma_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASigma(); \
	friend struct Z_Construct_UClass_ASigma_Statics; \
public: \
	DECLARE_CLASS(ASigma, ACreature_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCRFAS"), NO_API) \
	DECLARE_SERIALIZER(ASigma)


#define TCRFAS_Source_TCRFAS_Sigma_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASigma(); \
	friend struct Z_Construct_UClass_ASigma_Statics; \
public: \
	DECLARE_CLASS(ASigma, ACreature_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCRFAS"), NO_API) \
	DECLARE_SERIALIZER(ASigma)


#define TCRFAS_Source_TCRFAS_Sigma_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASigma(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASigma) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASigma); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASigma); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASigma(ASigma&&); \
	NO_API ASigma(const ASigma&); \
public:


#define TCRFAS_Source_TCRFAS_Sigma_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASigma(ASigma&&); \
	NO_API ASigma(const ASigma&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASigma); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASigma); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASigma)


#define TCRFAS_Source_TCRFAS_Sigma_h_13_PRIVATE_PROPERTY_OFFSET
#define TCRFAS_Source_TCRFAS_Sigma_h_10_PROLOG
#define TCRFAS_Source_TCRFAS_Sigma_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCRFAS_Source_TCRFAS_Sigma_h_13_PRIVATE_PROPERTY_OFFSET \
	TCRFAS_Source_TCRFAS_Sigma_h_13_SPARSE_DATA \
	TCRFAS_Source_TCRFAS_Sigma_h_13_RPC_WRAPPERS \
	TCRFAS_Source_TCRFAS_Sigma_h_13_INCLASS \
	TCRFAS_Source_TCRFAS_Sigma_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TCRFAS_Source_TCRFAS_Sigma_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCRFAS_Source_TCRFAS_Sigma_h_13_PRIVATE_PROPERTY_OFFSET \
	TCRFAS_Source_TCRFAS_Sigma_h_13_SPARSE_DATA \
	TCRFAS_Source_TCRFAS_Sigma_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TCRFAS_Source_TCRFAS_Sigma_h_13_INCLASS_NO_PURE_DECLS \
	TCRFAS_Source_TCRFAS_Sigma_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCRFAS_API UClass* StaticClass<class ASigma>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TCRFAS_Source_TCRFAS_Sigma_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
