// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Muro.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuro() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMuro();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMuro_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AMuro Function AjustarTamanoMuro
struct Z_Construct_UFunction_AMuro_AjustarTamanoMuro_Statics
{
	struct Muro_eventAjustarTamanoMuro_Parms
	{
		FVector NuevoTamano;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Muro.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NuevoTamano;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMuro_AjustarTamanoMuro_Statics::NewProp_NuevoTamano = { "NuevoTamano", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Muro_eventAjustarTamanoMuro_Parms, NuevoTamano), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMuro_AjustarTamanoMuro_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMuro_AjustarTamanoMuro_Statics::NewProp_NuevoTamano,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMuro_AjustarTamanoMuro_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMuro_AjustarTamanoMuro_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMuro, nullptr, "AjustarTamanoMuro", nullptr, nullptr, Z_Construct_UFunction_AMuro_AjustarTamanoMuro_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMuro_AjustarTamanoMuro_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMuro_AjustarTamanoMuro_Statics::Muro_eventAjustarTamanoMuro_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMuro_AjustarTamanoMuro_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMuro_AjustarTamanoMuro_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMuro_AjustarTamanoMuro_Statics::Muro_eventAjustarTamanoMuro_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMuro_AjustarTamanoMuro()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMuro_AjustarTamanoMuro_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMuro::execAjustarTamanoMuro)
{
	P_GET_STRUCT(FVector,Z_Param_NuevoTamano);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AjustarTamanoMuro(Z_Param_NuevoTamano);
	P_NATIVE_END;
}
// End Class AMuro Function AjustarTamanoMuro

// Begin Class AMuro
void AMuro::StaticRegisterNativesAMuro()
{
	UClass* Class = AMuro::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AjustarTamanoMuro", &AMuro::execAjustarTamanoMuro },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMuro);
UClass* Z_Construct_UClass_AMuro_NoRegister()
{
	return AMuro::StaticClass();
}
struct Z_Construct_UClass_AMuro_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Muro.h" },
		{ "ModuleRelativePath", "Muro.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshMuro_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Muro.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshMuro;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMuro_AjustarTamanoMuro, "AjustarTamanoMuro" }, // 1087046436
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuro>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMuro_Statics::NewProp_MeshMuro = { "MeshMuro", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMuro, MeshMuro), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshMuro_MetaData), NewProp_MeshMuro_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMuro_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuro_Statics::NewProp_MeshMuro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMuro_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMuro_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMuro_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMuro_Statics::ClassParams = {
	&AMuro::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMuro_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMuro_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMuro_Statics::Class_MetaDataParams), Z_Construct_UClass_AMuro_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMuro()
{
	if (!Z_Registration_Info_UClass_AMuro.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMuro.OuterSingleton, Z_Construct_UClass_AMuro_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMuro.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AMuro>()
{
	return AMuro::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMuro);
AMuro::~AMuro() {}
// End Class AMuro

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Muro_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMuro, AMuro::StaticClass, TEXT("AMuro"), &Z_Registration_Info_UClass_AMuro, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMuro), 1230101432U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Muro_h_288454575(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Muro_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Muro_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
