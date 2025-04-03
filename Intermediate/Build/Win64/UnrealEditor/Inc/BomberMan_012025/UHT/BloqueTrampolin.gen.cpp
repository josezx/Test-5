// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BloqueTrampolin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueTrampolin() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueTrampolin();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueTrampolin_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloqueTrampolin
void ABloqueTrampolin::StaticRegisterNativesABloqueTrampolin()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueTrampolin);
UClass* Z_Construct_UClass_ABloqueTrampolin_NoRegister()
{
	return ABloqueTrampolin::StaticClass();
}
struct Z_Construct_UClass_ABloqueTrampolin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueTrampolin.h" },
		{ "ModuleRelativePath", "BloqueTrampolin.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueTrampolin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueTrampolin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueTrampolin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueTrampolin_Statics::ClassParams = {
	&ABloqueTrampolin::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueTrampolin_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueTrampolin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueTrampolin()
{
	if (!Z_Registration_Info_UClass_ABloqueTrampolin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueTrampolin.OuterSingleton, Z_Construct_UClass_ABloqueTrampolin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueTrampolin.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueTrampolin>()
{
	return ABloqueTrampolin::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueTrampolin);
ABloqueTrampolin::~ABloqueTrampolin() {}
// End Class ABloqueTrampolin

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_BloqueTrampolin_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueTrampolin, ABloqueTrampolin::StaticClass, TEXT("ABloqueTrampolin"), &Z_Registration_Info_UClass_ABloqueTrampolin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueTrampolin), 2572728120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_BloqueTrampolin_h_3136105892(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_BloqueTrampolin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_BloqueTrampolin_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
