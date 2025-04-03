// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Bomba.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomba() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomba();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomba_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABomba
void ABomba::StaticRegisterNativesABomba()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomba);
UClass* Z_Construct_UClass_ABomba_NoRegister()
{
	return ABomba::StaticClass();
}
struct Z_Construct_UClass_ABomba_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Bomba.h" },
		{ "ModuleRelativePath", "Bomba.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Bomba" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bomba.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mecha_MetaData[] = {
		{ "Category", "Bomba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\xa7\xb1 Componentes visuales\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bomba.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\xa7\xb1 Componentes visuales" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TiempoParaExplotar_MetaData[] = {
		{ "Category", "Bomba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mecha encima\n" },
#endif
		{ "ModuleRelativePath", "Bomba.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mecha encima" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangoExplosion_MetaData[] = {
		{ "Category", "Explosi\xc3\xb3n" },
		{ "ModuleRelativePath", "Bomba.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanciaEntreBloques_MetaData[] = {
		{ "Category", "Explosi\xc3\xb3n" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cu\xc3\xa1ntos bloques alcanza la explosi\xc3\xb3n (en cada direcci\xc3\xb3n)\n" },
#endif
		{ "ModuleRelativePath", "Bomba.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cu\xc3\xa1ntos bloques alcanza la explosi\xc3\xb3n (en cada direcci\xc3\xb3n)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mecha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TiempoParaExplotar;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangoExplosion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanciaEntreBloques;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomba>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomba_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomba, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomba_Statics::NewProp_Mecha = { "Mecha", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomba, Mecha), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mecha_MetaData), NewProp_Mecha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABomba_Statics::NewProp_TiempoParaExplotar = { "TiempoParaExplotar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomba, TiempoParaExplotar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TiempoParaExplotar_MetaData), NewProp_TiempoParaExplotar_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABomba_Statics::NewProp_RangoExplosion = { "RangoExplosion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomba, RangoExplosion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangoExplosion_MetaData), NewProp_RangoExplosion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABomba_Statics::NewProp_DistanciaEntreBloques = { "DistanciaEntreBloques", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomba, DistanciaEntreBloques), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanciaEntreBloques_MetaData), NewProp_DistanciaEntreBloques_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomba_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomba_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomba_Statics::NewProp_Mecha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomba_Statics::NewProp_TiempoParaExplotar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomba_Statics::NewProp_RangoExplosion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomba_Statics::NewProp_DistanciaEntreBloques,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomba_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABomba_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomba_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomba_Statics::ClassParams = {
	&ABomba::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABomba_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABomba_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomba_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomba_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomba()
{
	if (!Z_Registration_Info_UClass_ABomba.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomba.OuterSingleton, Z_Construct_UClass_ABomba_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomba.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABomba>()
{
	return ABomba::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomba);
ABomba::~ABomba() {}
// End Class ABomba

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Bomba_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomba, ABomba::StaticClass, TEXT("ABomba"), &Z_Registration_Info_UClass_ABomba, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomba), 541564074U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Bomba_h_3168990194(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Bomba_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Bomba_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
