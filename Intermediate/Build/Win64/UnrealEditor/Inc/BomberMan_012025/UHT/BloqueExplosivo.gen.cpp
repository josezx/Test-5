// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BloqueExplosivo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueExplosivo() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueExplosivo();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueExplosivo_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloqueExplosivo Function Detonar
struct Z_Construct_UFunction_ABloqueExplosivo_Detonar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Funci\xef\xbf\xbdn que puedes llamar desde otro actor para explotar\n" },
#endif
		{ "ModuleRelativePath", "BloqueExplosivo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funci\xef\xbf\xbdn que puedes llamar desde otro actor para explotar" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloqueExplosivo_Detonar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloqueExplosivo, nullptr, "Detonar", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABloqueExplosivo_Detonar_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABloqueExplosivo_Detonar_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABloqueExplosivo_Detonar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABloqueExplosivo_Detonar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABloqueExplosivo::execDetonar)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Detonar();
	P_NATIVE_END;
}
// End Class ABloqueExplosivo Function Detonar

// Begin Class ABloqueExplosivo
void ABloqueExplosivo::StaticRegisterNativesABloqueExplosivo()
{
	UClass* Class = ABloqueExplosivo::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Detonar", &ABloqueExplosivo::execDetonar },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueExplosivo);
UClass* Z_Construct_UClass_ABloqueExplosivo_NoRegister()
{
	return ABloqueExplosivo::StaticClass();
}
struct Z_Construct_UClass_ABloqueExplosivo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueExplosivo.h" },
		{ "ModuleRelativePath", "BloqueExplosivo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABloqueExplosivo_Detonar, "Detonar" }, // 2383067518
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueExplosivo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueExplosivo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueExplosivo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueExplosivo_Statics::ClassParams = {
	&ABloqueExplosivo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueExplosivo_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueExplosivo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueExplosivo()
{
	if (!Z_Registration_Info_UClass_ABloqueExplosivo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueExplosivo.OuterSingleton, Z_Construct_UClass_ABloqueExplosivo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueExplosivo.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueExplosivo>()
{
	return ABloqueExplosivo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueExplosivo);
ABloqueExplosivo::~ABloqueExplosivo() {}
// End Class ABloqueExplosivo

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_BloqueExplosivo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueExplosivo, ABloqueExplosivo::StaticClass, TEXT("ABloqueExplosivo"), &Z_Registration_Info_UClass_ABloqueExplosivo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueExplosivo), 3260445886U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_BloqueExplosivo_h_1033575343(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_BloqueExplosivo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_BloqueExplosivo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
