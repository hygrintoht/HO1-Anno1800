// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANNO1800_GameManager_generated_h
#error "GameManager.generated.h already included, missing '#pragma once' in GameManager.h"
#endif
#define ANNO1800_GameManager_generated_h

#define FID_Anno1800_Source_Anno1800_GameManager_h_11_SPARSE_DATA
#define FID_Anno1800_Source_Anno1800_GameManager_h_11_RPC_WRAPPERS
#define FID_Anno1800_Source_Anno1800_GameManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Anno1800_Source_Anno1800_GameManager_h_11_ACCESSORS
#define FID_Anno1800_Source_Anno1800_GameManager_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameManager(); \
	friend struct Z_Construct_UClass_AGameManager_Statics; \
public: \
	DECLARE_CLASS(AGameManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Anno1800"), NO_API) \
	DECLARE_SERIALIZER(AGameManager)


#define FID_Anno1800_Source_Anno1800_GameManager_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAGameManager(); \
	friend struct Z_Construct_UClass_AGameManager_Statics; \
public: \
	DECLARE_CLASS(AGameManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Anno1800"), NO_API) \
	DECLARE_SERIALIZER(AGameManager)


#define FID_Anno1800_Source_Anno1800_GameManager_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameManager(AGameManager&&); \
	NO_API AGameManager(const AGameManager&); \
public: \
	NO_API virtual ~AGameManager();


#define FID_Anno1800_Source_Anno1800_GameManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameManager(AGameManager&&); \
	NO_API AGameManager(const AGameManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameManager) \
	NO_API virtual ~AGameManager();


#define FID_Anno1800_Source_Anno1800_GameManager_h_8_PROLOG
#define FID_Anno1800_Source_Anno1800_GameManager_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Anno1800_Source_Anno1800_GameManager_h_11_SPARSE_DATA \
	FID_Anno1800_Source_Anno1800_GameManager_h_11_RPC_WRAPPERS \
	FID_Anno1800_Source_Anno1800_GameManager_h_11_ACCESSORS \
	FID_Anno1800_Source_Anno1800_GameManager_h_11_INCLASS \
	FID_Anno1800_Source_Anno1800_GameManager_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Anno1800_Source_Anno1800_GameManager_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Anno1800_Source_Anno1800_GameManager_h_11_SPARSE_DATA \
	FID_Anno1800_Source_Anno1800_GameManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Anno1800_Source_Anno1800_GameManager_h_11_ACCESSORS \
	FID_Anno1800_Source_Anno1800_GameManager_h_11_INCLASS_NO_PURE_DECLS \
	FID_Anno1800_Source_Anno1800_GameManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANNO1800_API UClass* StaticClass<class AGameManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Anno1800_Source_Anno1800_GameManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
