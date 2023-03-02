// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Anno1800/Truck.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTruck() {}
// Cross Module References
	ANNO1800_API UClass* Z_Construct_UClass_ATruck();
	ANNO1800_API UClass* Z_Construct_UClass_ATruck_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Anno1800();
// End Cross Module References
	void ATruck::StaticRegisterNativesATruck()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATruck);
	UClass* Z_Construct_UClass_ATruck_NoRegister()
	{
		return ATruck::StaticClass();
	}
	struct Z_Construct_UClass_ATruck_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATruck_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Anno1800,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATruck_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Truck.h" },
		{ "ModuleRelativePath", "Truck.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATruck_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATruck>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATruck_Statics::ClassParams = {
		&ATruck::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATruck_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATruck_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATruck()
	{
		if (!Z_Registration_Info_UClass_ATruck.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATruck.OuterSingleton, Z_Construct_UClass_ATruck_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATruck.OuterSingleton;
	}
	template<> ANNO1800_API UClass* StaticClass<ATruck>()
	{
		return ATruck::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATruck);
	ATruck::~ATruck() {}
	struct Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_Truck_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_Truck_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATruck, ATruck::StaticClass, TEXT("ATruck"), &Z_Registration_Info_UClass_ATruck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATruck), 1549026040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_Truck_h_3372517045(TEXT("/Script/Anno1800"),
		Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_Truck_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_Truck_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
