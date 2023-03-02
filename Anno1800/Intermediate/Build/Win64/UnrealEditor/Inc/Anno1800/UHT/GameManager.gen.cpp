// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Anno1800/GameManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameManager() {}
// Cross Module References
	ANNO1800_API UClass* Z_Construct_UClass_AGameManager();
	ANNO1800_API UClass* Z_Construct_UClass_AGameManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Anno1800();
// End Cross Module References
	void AGameManager::StaticRegisterNativesAGameManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameManager);
	UClass* Z_Construct_UClass_AGameManager_NoRegister()
	{
		return AGameManager::StaticClass();
	}
	struct Z_Construct_UClass_AGameManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Anno1800,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameManager.h" },
		{ "ModuleRelativePath", "GameManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameManager_Statics::ClassParams = {
		&AGameManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameManager()
	{
		if (!Z_Registration_Info_UClass_AGameManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameManager.OuterSingleton, Z_Construct_UClass_AGameManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameManager.OuterSingleton;
	}
	template<> ANNO1800_API UClass* StaticClass<AGameManager>()
	{
		return AGameManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameManager);
	AGameManager::~AGameManager() {}
	struct Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_GameManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_GameManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameManager, AGameManager::StaticClass, TEXT("AGameManager"), &Z_Registration_Info_UClass_AGameManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameManager), 2694103962U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_GameManager_h_1649090127(TEXT("/Script/Anno1800"),
		Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_GameManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_GameManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
