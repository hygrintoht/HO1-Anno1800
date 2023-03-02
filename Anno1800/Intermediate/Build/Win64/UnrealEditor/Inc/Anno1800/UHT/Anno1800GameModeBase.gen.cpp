// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Anno1800/Anno1800GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnno1800GameModeBase() {}
// Cross Module References
	ANNO1800_API UClass* Z_Construct_UClass_AAnno1800GameModeBase();
	ANNO1800_API UClass* Z_Construct_UClass_AAnno1800GameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Anno1800();
// End Cross Module References
	void AAnno1800GameModeBase::StaticRegisterNativesAAnno1800GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAnno1800GameModeBase);
	UClass* Z_Construct_UClass_AAnno1800GameModeBase_NoRegister()
	{
		return AAnno1800GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAnno1800GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAnno1800GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Anno1800,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnno1800GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Anno1800GameModeBase.h" },
		{ "ModuleRelativePath", "Anno1800GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAnno1800GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnno1800GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAnno1800GameModeBase_Statics::ClassParams = {
		&AAnno1800GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAnno1800GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAnno1800GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAnno1800GameModeBase()
	{
		if (!Z_Registration_Info_UClass_AAnno1800GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnno1800GameModeBase.OuterSingleton, Z_Construct_UClass_AAnno1800GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAnno1800GameModeBase.OuterSingleton;
	}
	template<> ANNO1800_API UClass* StaticClass<AAnno1800GameModeBase>()
	{
		return AAnno1800GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAnno1800GameModeBase);
	AAnno1800GameModeBase::~AAnno1800GameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_Anno1800GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_Anno1800GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAnno1800GameModeBase, AAnno1800GameModeBase::StaticClass, TEXT("AAnno1800GameModeBase"), &Z_Registration_Info_UClass_AAnno1800GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnno1800GameModeBase), 3402188256U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_Anno1800GameModeBase_h_3794001889(TEXT("/Script/Anno1800"),
		Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_Anno1800GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_Anno1800GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
