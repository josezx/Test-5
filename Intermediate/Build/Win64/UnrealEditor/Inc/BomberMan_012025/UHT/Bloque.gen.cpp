// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Bloque.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloque Function AjustarTamano
struct Z_Construct_UFunction_ABloque_AjustarTamano_Statics
{
	struct Bloque_eventAjustarTamano_Parms
	{
		FVector NuevoTamano;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//funcion para cambiar el tama\xef\xbf\xbdo del bloque\n" },
#endif
		{ "ModuleRelativePath", "Bloque.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "funcion para cambiar el tama\xef\xbf\xbdo del bloque" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NuevoTamano;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABloque_AjustarTamano_Statics::NewProp_NuevoTamano = { "NuevoTamano", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bloque_eventAjustarTamano_Parms, NuevoTamano), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABloque_AjustarTamano_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloque_AjustarTamano_Statics::NewProp_NuevoTamano,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABloque_AjustarTamano_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloque_AjustarTamano_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloque, nullptr, "AjustarTamano", nullptr, nullptr, Z_Construct_UFunction_ABloque_AjustarTamano_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloque_AjustarTamano_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABloque_AjustarTamano_Statics::Bloque_eventAjustarTamano_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABloque_AjustarTamano_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABloque_AjustarTamano_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABloque_AjustarTamano_Statics::Bloque_eventAjustarTamano_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABloque_AjustarTamano()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABloque_AjustarTamano_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABloque::execAjustarTamano)
{
	P_GET_STRUCT(FVector,Z_Param_NuevoTamano);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AjustarTamano(Z_Param_NuevoTamano);
	P_NATIVE_END;
}
// End Class ABloque Function AjustarTamano

// Begin Class ABloque
void ABloque::StaticRegisterNativesABloque()
{
	UClass* Class = ABloque::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AjustarTamano", &ABloque::execAjustarTamano },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloque);
UClass* Z_Construct_UClass_ABloque_NoRegister()
{
	return ABloque::StaticClass();
}
struct Z_Construct_UClass_ABloque_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Bloque.h" },
		{ "ModuleRelativePath", "Bloque.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshBloque_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//malla del bloque\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bloque.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "malla del bloque" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestruible_MetaData[] = {
		{ "Category", "Bloque" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//float FloatSpeed;\n//float RotationSpeed;\n//bool bPuedeMoverse;\n" },
#endif
		{ "ModuleRelativePath", "Bloque.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "float FloatSpeed;\nfloat RotationSpeed;\nbool bPuedeMoverse;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshBloque;
	static void NewProp_bDestruible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestruible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABloque_AjustarTamano, "AjustarTamano" }, // 1721758213
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloque_Statics::NewProp_MeshBloque = { "MeshBloque", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloque, MeshBloque), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshBloque_MetaData), NewProp_MeshBloque_MetaData) };
void Z_Construct_UClass_ABloque_Statics::NewProp_bDestruible_SetBit(void* Obj)
{
	((ABloque*)Obj)->bDestruible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABloque_Statics::NewProp_bDestruible = { "bDestruible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABloque), &Z_Construct_UClass_ABloque_Statics::NewProp_bDestruible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestruible_MetaData), NewProp_bDestruible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloque_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_Statics::NewProp_MeshBloque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_Statics::NewProp_bDestruible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloque_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Statics::ClassParams = {
	&ABloque::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABloque_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloque_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloque()
{
	if (!Z_Registration_Info_UClass_ABloque.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloque.OuterSingleton, Z_Construct_UClass_ABloque_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloque.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloque>()
{
	return ABloque::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque);
ABloque::~ABloque() {}
// End Class ABloque

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Bloque_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloque, ABloque::StaticClass, TEXT("ABloque"), &Z_Registration_Info_UClass_ABloque, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloque), 2172809816U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Bloque_h_992868649(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Bloque_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Bloque_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
