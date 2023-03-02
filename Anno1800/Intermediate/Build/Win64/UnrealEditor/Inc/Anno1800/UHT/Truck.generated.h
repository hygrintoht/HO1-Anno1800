// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Truck.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANNO1800_Truck_generated_h
#error "Truck.generated.h already included, missing '#pragma once' in Truck.h"
#endif
#define ANNO1800_Truck_generated_h

#define FID_Anno1800_Source_Anno1800_Truck_h_14_SPARSE_DATA
#define FID_Anno1800_Source_Anno1800_Truck_h_14_RPC_WRAPPERS
#define FID_Anno1800_Source_Anno1800_Truck_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Anno1800_Source_Anno1800_Truck_h_14_ACCESSORS
#define FID_Anno1800_Source_Anno1800_Truck_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATruck(); \
	friend struct Z_Construct_UClass_ATruck_Statics; \
public: \
	DECLARE_CLASS(ATruck, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Anno1800"), NO_API) \
	DECLARE_SERIALIZER(ATruck)


#define FID_Anno1800_Source_Anno1800_Truck_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATruck(); \
	friend struct Z_Construct_UClass_ATruck_Statics; \
public: \
	DECLARE_CLASS(ATruck, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Anno1800"), NO_API) \
	DECLARE_SERIALIZER(ATruck)


#define FID_Anno1800_Source_Anno1800_Truck_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATruck(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATruck) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATruck); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATruck); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATruck(ATruck&&); \
	NO_API ATruck(const ATruck&); \
public: \
	NO_API virtual ~ATruck();


#define FID_Anno1800_Source_Anno1800_Truck_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATruck(ATruck&&); \
	NO_API ATruck(const ATruck&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATruck); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATruck); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATruck) \
	NO_API virtual ~ATruck();


#define FID_Anno1800_Source_Anno1800_Truck_h_11_PROLOG
#define FID_Anno1800_Source_Anno1800_Truck_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Anno1800_Source_Anno1800_Truck_h_14_SPARSE_DATA \
	FID_Anno1800_Source_Anno1800_Truck_h_14_RPC_WRAPPERS \
	FID_Anno1800_Source_Anno1800_Truck_h_14_ACCESSORS \
	FID_Anno1800_Source_Anno1800_Truck_h_14_INCLASS \
	FID_Anno1800_Source_Anno1800_Truck_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Anno1800_Source_Anno1800_Truck_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Anno1800_Source_Anno1800_Truck_h_14_SPARSE_DATA \
	FID_Anno1800_Source_Anno1800_Truck_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Anno1800_Source_Anno1800_Truck_h_14_ACCESSORS \
	FID_Anno1800_Source_Anno1800_Truck_h_14_INCLASS_NO_PURE_DECLS \
	FID_Anno1800_Source_Anno1800_Truck_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANNO1800_API UClass* StaticClass<class ATruck>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Anno1800_Source_Anno1800_Truck_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
