// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Ballom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallom() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABallom();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABallom_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoCharacter();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABallom
void ABallom::StaticRegisterNativesABallom()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABallom);
UClass* Z_Construct_UClass_ABallom_NoRegister()
{
	return ABallom::StaticClass();
}
struct Z_Construct_UClass_ABallom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Ballom.h" },
		{ "ModuleRelativePath", "Ballom.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABallom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABallom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigoCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABallom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABallom_Statics::ClassParams = {
	&ABallom::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABallom_Statics::Class_MetaDataParams), Z_Construct_UClass_ABallom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABallom()
{
	if (!Z_Registration_Info_UClass_ABallom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABallom.OuterSingleton, Z_Construct_UClass_ABallom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABallom.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABallom>()
{
	return ABallom::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABallom);
ABallom::~ABallom() {}
// End Class ABallom

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Ballom_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABallom, ABallom::StaticClass, TEXT("ABallom"), &Z_Registration_Info_UClass_ABallom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABallom), 402443631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Ballom_h_2901518816(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Ballom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Ballom_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
