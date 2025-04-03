// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BloqueToxico.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueToxico() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueToxico();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueToxico_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloqueToxico
void ABloqueToxico::StaticRegisterNativesABloqueToxico()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueToxico);
UClass* Z_Construct_UClass_ABloqueToxico_NoRegister()
{
	return ABloqueToxico::StaticClass();
}
struct Z_Construct_UClass_ABloqueToxico_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueToxico.h" },
		{ "ModuleRelativePath", "BloqueToxico.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueToxico>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueToxico_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueToxico_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueToxico_Statics::ClassParams = {
	&ABloqueToxico::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueToxico_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueToxico_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueToxico()
{
	if (!Z_Registration_Info_UClass_ABloqueToxico.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueToxico.OuterSingleton, Z_Construct_UClass_ABloqueToxico_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueToxico.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueToxico>()
{
	return ABloqueToxico::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueToxico);
ABloqueToxico::~ABloqueToxico() {}
// End Class ABloqueToxico

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_BloqueToxico_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueToxico, ABloqueToxico::StaticClass, TEXT("ABloqueToxico"), &Z_Registration_Info_UClass_ABloqueToxico, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueToxico), 758997293U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_BloqueToxico_h_1548486045(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_BloqueToxico_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_BloqueToxico_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
