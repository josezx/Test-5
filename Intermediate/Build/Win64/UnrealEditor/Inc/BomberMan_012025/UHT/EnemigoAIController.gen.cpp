// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/EnemigoAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoAIController();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AEnemigoAIController
void AEnemigoAIController::StaticRegisterNativesAEnemigoAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoAIController);
UClass* Z_Construct_UClass_AEnemigoAIController_NoRegister()
{
	return AEnemigoAIController::StaticClass();
}
struct Z_Construct_UClass_AEnemigoAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "EnemigoAIController.h" },
		{ "ModuleRelativePath", "EnemigoAIController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigoAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoAIController_Statics::ClassParams = {
	&AEnemigoAIController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoAIController()
{
	if (!Z_Registration_Info_UClass_AEnemigoAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoAIController.OuterSingleton, Z_Construct_UClass_AEnemigoAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoAIController.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AEnemigoAIController>()
{
	return AEnemigoAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoAIController);
AEnemigoAIController::~AEnemigoAIController() {}
// End Class AEnemigoAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_EnemigoAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoAIController, AEnemigoAIController::StaticClass, TEXT("AEnemigoAIController"), &Z_Registration_Info_UClass_AEnemigoAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoAIController), 3311786803U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_EnemigoAIController_h_2466358464(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_EnemigoAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_EnemigoAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
