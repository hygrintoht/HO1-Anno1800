// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Anno1800/Building.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilding() {}
// Cross Module References
	ANNO1800_API UClass* Z_Construct_UClass_ABuilding();
	ANNO1800_API UClass* Z_Construct_UClass_ABuilding_NoRegister();
	ANNO1800_API UEnum* Z_Construct_UEnum_Anno1800_ResourceType();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Anno1800();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ResourceType;
	static UEnum* ResourceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ResourceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ResourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Anno1800_ResourceType, Z_Construct_UPackage__Script_Anno1800(), TEXT("ResourceType"));
		}
		return Z_Registration_Info_UEnum_ResourceType.OuterSingleton;
	}
	template<> ANNO1800_API UEnum* StaticEnum<ResourceType>()
	{
		return ResourceType_StaticEnum();
	}
	struct Z_Construct_UEnum_Anno1800_ResourceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Anno1800_ResourceType_Statics::Enumerators[] = {
		{ "none", (int64)none },
		{ "iron", (int64)iron },
		{ "coal", (int64)coal },
		{ "wood", (int64)wood },
		{ "steel", (int64)steel },
		{ "sewing_machine", (int64)sewing_machine },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Anno1800_ResourceType_Statics::Enum_MetaDataParams[] = {
		{ "coal.Name", "coal" },
		{ "iron.Name", "iron" },
		{ "ModuleRelativePath", "Building.h" },
		{ "none.Name", "none" },
		{ "sewing_machine.Name", "sewing_machine" },
		{ "steel.Name", "steel" },
		{ "wood.Name", "wood" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Anno1800_ResourceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Anno1800,
		nullptr,
		"ResourceType",
		"ResourceType",
		Z_Construct_UEnum_Anno1800_ResourceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Anno1800_ResourceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Anno1800_ResourceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Anno1800_ResourceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Anno1800_ResourceType()
	{
		if (!Z_Registration_Info_UEnum_ResourceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ResourceType.InnerSingleton, Z_Construct_UEnum_Anno1800_ResourceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ResourceType.InnerSingleton;
	}
	void ABuilding::StaticRegisterNativesABuilding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuilding);
	UClass* Z_Construct_UClass_ABuilding_NoRegister()
	{
		return ABuilding::StaticClass();
	}
	struct Z_Construct_UClass_ABuilding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_productionResourceType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_productionResourceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_productionTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_productionTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ingredientA_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ingredientA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ingredientB_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ingredientB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deliverTo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_deliverTo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuilding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Anno1800,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Building.h" },
		{ "ModuleRelativePath", "Building.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_productionResourceType_MetaData[] = {
		{ "Category", "Building" },
		{ "Comment", "//UPROPERTY(EditAnywhere) AGameManager* gameManager;\n" },
		{ "ModuleRelativePath", "Building.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere) AGameManager* gameManager;" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_productionResourceType = { "productionResourceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuilding, productionResourceType), Z_Construct_UEnum_Anno1800_ResourceType, METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::NewProp_productionResourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_productionResourceType_MetaData)) }; // 2151515004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_productionTime_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Building.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_productionTime = { "productionTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuilding, productionTime), METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::NewProp_productionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_productionTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_ingredientA_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Building.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_ingredientA = { "ingredientA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuilding, ingredientA), Z_Construct_UEnum_Anno1800_ResourceType, METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::NewProp_ingredientA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_ingredientA_MetaData)) }; // 2151515004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_ingredientB_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Building.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_ingredientB = { "ingredientB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuilding, ingredientB), Z_Construct_UEnum_Anno1800_ResourceType, METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::NewProp_ingredientB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_ingredientB_MetaData)) }; // 2151515004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_deliverTo_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Building.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_deliverTo = { "deliverTo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuilding, deliverTo), Z_Construct_UClass_ABuilding_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::NewProp_deliverTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_deliverTo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuilding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_productionResourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_productionTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_ingredientA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_ingredientB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_deliverTo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuilding_Statics::ClassParams = {
		&ABuilding::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABuilding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuilding()
	{
		if (!Z_Registration_Info_UClass_ABuilding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuilding.OuterSingleton, Z_Construct_UClass_ABuilding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABuilding.OuterSingleton;
	}
	template<> ANNO1800_API UClass* StaticClass<ABuilding>()
	{
		return ABuilding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilding);
	ABuilding::~ABuilding() {}
	struct Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_Building_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_Building_h_Statics::EnumInfo[] = {
		{ ResourceType_StaticEnum, TEXT("ResourceType"), &Z_Registration_Info_UEnum_ResourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2151515004U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_Building_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABuilding, ABuilding::StaticClass, TEXT("ABuilding"), &Z_Registration_Info_UClass_ABuilding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuilding), 3507577784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_Building_h_2092409124(TEXT("/Script/Anno1800"),
		Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_Building_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_Building_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_Building_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Anno1800_Source_Anno1800_Building_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
