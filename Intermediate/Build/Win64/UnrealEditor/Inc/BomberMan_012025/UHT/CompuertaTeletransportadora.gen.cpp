// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/CompuertaTeletransportadora.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompuertaTeletransportadora() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberMan_012025GameMode_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ACompuertaTeletransportadora();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ACompuertaTeletransportadora_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ACompuertaTeletransportadora Function OnOverlapBegin
struct Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics
{
	struct CompuertaTeletransportadora_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Evento de colisi\xef\xbf\xbdn\n" },
#endif
		{ "ModuleRelativePath", "CompuertaTeletransportadora.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evento de colisi\xef\xbf\xbdn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompuertaTeletransportadora_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompuertaTeletransportadora_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompuertaTeletransportadora_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompuertaTeletransportadora_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((CompuertaTeletransportadora_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CompuertaTeletransportadora_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompuertaTeletransportadora_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompuertaTeletransportadora, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::CompuertaTeletransportadora_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::CompuertaTeletransportadora_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACompuertaTeletransportadora::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ACompuertaTeletransportadora Function OnOverlapBegin

// Begin Class ACompuertaTeletransportadora
void ACompuertaTeletransportadora::StaticRegisterNativesACompuertaTeletransportadora()
{
	UClass* Class = ACompuertaTeletransportadora::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapBegin", &ACompuertaTeletransportadora::execOnOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACompuertaTeletransportadora);
UClass* Z_Construct_UClass_ACompuertaTeletransportadora_NoRegister()
{
	return ACompuertaTeletransportadora::StaticClass();
}
struct Z_Construct_UClass_ACompuertaTeletransportadora_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CompuertaTeletransportadora.h" },
		{ "ModuleRelativePath", "CompuertaTeletransportadora.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Componente visual\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CompuertaTeletransportadora.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Componente visual" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompuertaDestino_MetaData[] = {
		{ "Category", "Teletransporte" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Compuerta de destino\n" },
#endif
		{ "ModuleRelativePath", "CompuertaTeletransportadora.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compuerta de destino" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameModeRef_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Referencia al GameMode\n" },
#endif
		{ "ModuleRelativePath", "CompuertaTeletransportadora.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referencia al GameMode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TiempoEsperaTeletransporte_MetaData[] = {
		{ "Category", "Teletransporte" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tiempo m\xef\xbf\xbdnimo entre teletransportes del mismo actor\n" },
#endif
		{ "ModuleRelativePath", "CompuertaTeletransportadora.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tiempo m\xef\xbf\xbdnimo entre teletransportes del mismo actor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompuertaDestino;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameModeRef;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TiempoEsperaTeletransporte;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACompuertaTeletransportadora_OnOverlapBegin, "OnOverlapBegin" }, // 3506785610
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACompuertaTeletransportadora>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompuertaTeletransportadora_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompuertaTeletransportadora, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompuertaTeletransportadora_Statics::NewProp_CompuertaDestino = { "CompuertaDestino", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompuertaTeletransportadora, CompuertaDestino), Z_Construct_UClass_ACompuertaTeletransportadora_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompuertaDestino_MetaData), NewProp_CompuertaDestino_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompuertaTeletransportadora_Statics::NewProp_GameModeRef = { "GameModeRef", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompuertaTeletransportadora, GameModeRef), Z_Construct_UClass_ABomberMan_012025GameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameModeRef_MetaData), NewProp_GameModeRef_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACompuertaTeletransportadora_Statics::NewProp_TiempoEsperaTeletransporte = { "TiempoEsperaTeletransporte", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompuertaTeletransportadora, TiempoEsperaTeletransporte), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TiempoEsperaTeletransporte_MetaData), NewProp_TiempoEsperaTeletransporte_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACompuertaTeletransportadora_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompuertaTeletransportadora_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompuertaTeletransportadora_Statics::NewProp_CompuertaDestino,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompuertaTeletransportadora_Statics::NewProp_GameModeRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompuertaTeletransportadora_Statics::NewProp_TiempoEsperaTeletransporte,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACompuertaTeletransportadora_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACompuertaTeletransportadora_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACompuertaTeletransportadora_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACompuertaTeletransportadora_Statics::ClassParams = {
	&ACompuertaTeletransportadora::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACompuertaTeletransportadora_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACompuertaTeletransportadora_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACompuertaTeletransportadora_Statics::Class_MetaDataParams), Z_Construct_UClass_ACompuertaTeletransportadora_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACompuertaTeletransportadora()
{
	if (!Z_Registration_Info_UClass_ACompuertaTeletransportadora.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACompuertaTeletransportadora.OuterSingleton, Z_Construct_UClass_ACompuertaTeletransportadora_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACompuertaTeletransportadora.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ACompuertaTeletransportadora>()
{
	return ACompuertaTeletransportadora::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACompuertaTeletransportadora);
ACompuertaTeletransportadora::~ACompuertaTeletransportadora() {}
// End Class ACompuertaTeletransportadora

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_CompuertaTeletransportadora_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACompuertaTeletransportadora, ACompuertaTeletransportadora::StaticClass, TEXT("ACompuertaTeletransportadora"), &Z_Registration_Info_UClass_ACompuertaTeletransportadora, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACompuertaTeletransportadora), 260598462U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_CompuertaTeletransportadora_h_1968073886(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_CompuertaTeletransportadora_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_CompuertaTeletransportadora_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
