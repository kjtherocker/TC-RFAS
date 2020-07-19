// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCRFAS_CameraManager_generated_h
#error "CameraManager.generated.h already included, missing '#pragma once' in CameraManager.h"
#endif
#define TCRFAS_CameraManager_generated_h

#define TCRFAS_Source_TCRFAS_CameraManager_h_15_SPARSE_DATA
#define TCRFAS_Source_TCRFAS_CameraManager_h_15_RPC_WRAPPERS
#define TCRFAS_Source_TCRFAS_CameraManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TCRFAS_Source_TCRFAS_CameraManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraManager(); \
	friend struct Z_Construct_UClass_ACameraManager_Statics; \
public: \
	DECLARE_CLASS(ACameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCRFAS"), NO_API) \
	DECLARE_SERIALIZER(ACameraManager)


#define TCRFAS_Source_TCRFAS_CameraManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACameraManager(); \
	friend struct Z_Construct_UClass_ACameraManager_Statics; \
public: \
	DECLARE_CLASS(ACameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCRFAS"), NO_API) \
	DECLARE_SERIALIZER(ACameraManager)


#define TCRFAS_Source_TCRFAS_CameraManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACameraManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraManager(ACameraManager&&); \
	NO_API ACameraManager(const ACameraManager&); \
public:


#define TCRFAS_Source_TCRFAS_CameraManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACameraManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraManager(ACameraManager&&); \
	NO_API ACameraManager(const ACameraManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraManager)


#define TCRFAS_Source_TCRFAS_CameraManager_h_15_PRIVATE_PROPERTY_OFFSET
#define TCRFAS_Source_TCRFAS_CameraManager_h_12_PROLOG
#define TCRFAS_Source_TCRFAS_CameraManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCRFAS_Source_TCRFAS_CameraManager_h_15_PRIVATE_PROPERTY_OFFSET \
	TCRFAS_Source_TCRFAS_CameraManager_h_15_SPARSE_DATA \
	TCRFAS_Source_TCRFAS_CameraManager_h_15_RPC_WRAPPERS \
	TCRFAS_Source_TCRFAS_CameraManager_h_15_INCLASS \
	TCRFAS_Source_TCRFAS_CameraManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TCRFAS_Source_TCRFAS_CameraManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCRFAS_Source_TCRFAS_CameraManager_h_15_PRIVATE_PROPERTY_OFFSET \
	TCRFAS_Source_TCRFAS_CameraManager_h_15_SPARSE_DATA \
	TCRFAS_Source_TCRFAS_CameraManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TCRFAS_Source_TCRFAS_CameraManager_h_15_INCLASS_NO_PURE_DECLS \
	TCRFAS_Source_TCRFAS_CameraManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCRFAS_API UClass* StaticClass<class ACameraManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TCRFAS_Source_TCRFAS_CameraManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
