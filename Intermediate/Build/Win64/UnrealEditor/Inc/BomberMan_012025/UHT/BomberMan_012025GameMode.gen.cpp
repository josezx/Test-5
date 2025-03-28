// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BomberMan_012025GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan_012025GameMode() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberMan_012025GameMode();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberMan_012025GameMode_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ACompuertaTeletransportadora_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABomberMan_012025GameMode
void ABomberMan_012025GameMode::StaticRegisterNativesABomberMan_012025GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberMan_012025GameMode);
UClass* Z_Construct_UClass_ABomberMan_012025GameMode_NoRegister()
{
	return ABomberMan_012025GameMode::StaticClass();
}
struct Z_Construct_UClass_ABomberMan_012025GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BomberMan_012025GameMode.h" },
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloquesA_MetaData[] = {
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActoresTeletransportados_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//portal para abajo\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "portal para abajo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Compuerta1_MetaData[] = {
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Compuerta3_MetaData[] = {
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloquesA_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BloquesA;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActoresTeletransportados_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActoresTeletransportados_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActoresTeletransportados;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Compuerta1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Compuerta3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan_012025GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_BloquesA_Inner = { "BloquesA", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_BloquesA = { "BloquesA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025GameMode, BloquesA), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloquesA_MetaData), NewProp_BloquesA_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_ActoresTeletransportados_ValueProp = { "ActoresTeletransportados", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_ActoresTeletransportados_Key_KeyProp = { "ActoresTeletransportados_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_ActoresTeletransportados = { "ActoresTeletransportados", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025GameMode, ActoresTeletransportados), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActoresTeletransportados_MetaData), NewProp_ActoresTeletransportados_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_Compuerta1 = { "Compuerta1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025GameMode, Compuerta1), Z_Construct_UClass_ACompuertaTeletransportadora_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Compuerta1_MetaData), NewProp_Compuerta1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_Compuerta3 = { "Compuerta3", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025GameMode, Compuerta3), Z_Construct_UClass_ACompuertaTeletransportadora_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Compuerta3_MetaData), NewProp_Compuerta3_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberMan_012025GameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_BloquesA_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_BloquesA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_ActoresTeletransportados_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_ActoresTeletransportados_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_ActoresTeletransportados,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_Compuerta1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_Compuerta3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025GameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABomberMan_012025GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::ClassParams = {
	&ABomberMan_012025GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABomberMan_012025GameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025GameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberMan_012025GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberMan_012025GameMode()
{
	if (!Z_Registration_Info_UClass_ABomberMan_012025GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberMan_012025GameMode.OuterSingleton, Z_Construct_UClass_ABomberMan_012025GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberMan_012025GameMode.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABomberMan_012025GameMode>()
{
	return ABomberMan_012025GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberMan_012025GameMode);
ABomberMan_012025GameMode::~ABomberMan_012025GameMode() {}
// End Class ABomberMan_012025GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_BomberMan_012025GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberMan_012025GameMode, ABomberMan_012025GameMode::StaticClass, TEXT("ABomberMan_012025GameMode"), &Z_Registration_Info_UClass_ABomberMan_012025GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberMan_012025GameMode), 1988805219U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_BomberMan_012025GameMode_h_2675843633(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_BomberMan_012025GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_BomberMan_012025GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
