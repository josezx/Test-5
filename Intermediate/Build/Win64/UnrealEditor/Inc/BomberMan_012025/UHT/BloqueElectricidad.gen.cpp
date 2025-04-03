// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BloqueElectricidad.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueElectricidad() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueElectricidad();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueElectricidad_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloqueElectricidad
void ABloqueElectricidad::StaticRegisterNativesABloqueElectricidad()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueElectricidad);
UClass* Z_Construct_UClass_ABloqueElectricidad_NoRegister()
{
	return ABloqueElectricidad::StaticClass();
}
struct Z_Construct_UClass_ABloqueElectricidad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueElectricidad.h" },
		{ "ModuleRelativePath", "BloqueElectricidad.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueElectricidad>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueElectricidad_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueElectricidad_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueElectricidad_Statics::ClassParams = {
	&ABloqueElectricidad::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueElectricidad_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueElectricidad_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueElectricidad()
{
	if (!Z_Registration_Info_UClass_ABloqueElectricidad.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueElectricidad.OuterSingleton, Z_Construct_UClass_ABloqueElectricidad_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueElectricidad.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueElectricidad>()
{
	return ABloqueElectricidad::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueElectricidad);
ABloqueElectricidad::~ABloqueElectricidad() {}
// End Class ABloqueElectricidad

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_BloqueElectricidad_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueElectricidad, ABloqueElectricidad::StaticClass, TEXT("ABloqueElectricidad"), &Z_Registration_Info_UClass_ABloqueElectricidad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueElectricidad), 823964631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_BloqueElectricidad_h_1387073174(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_BloqueElectricidad_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_BloqueElectricidad_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
