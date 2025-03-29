// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/EnemigoCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoCharacter() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoCharacter();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoCharacter_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AEnemigoCharacter
void AEnemigoCharacter::StaticRegisterNativesAEnemigoCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoCharacter);
UClass* Z_Construct_UClass_AEnemigoCharacter_NoRegister()
{
	return AEnemigoCharacter::StaticClass();
}
struct Z_Construct_UClass_AEnemigoCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoCharacter.h" },
		{ "ModuleRelativePath", "EnemigoCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movimiento" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movimiento\n" },
#endif
		{ "ModuleRelativePath", "EnemigoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movimiento" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDirection_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "EnemigoCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigoCharacter_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoCharacter, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemigoCharacter_Statics::NewProp_MoveDirection = { "MoveDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoCharacter, MoveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDirection_MetaData), NewProp_MoveDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigoCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoCharacter_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoCharacter_Statics::NewProp_MoveDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemigoCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoCharacter_Statics::ClassParams = {
	&AEnemigoCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemigoCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoCharacter()
{
	if (!Z_Registration_Info_UClass_AEnemigoCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoCharacter.OuterSingleton, Z_Construct_UClass_AEnemigoCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoCharacter.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AEnemigoCharacter>()
{
	return AEnemigoCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoCharacter);
AEnemigoCharacter::~AEnemigoCharacter() {}
// End Class AEnemigoCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_EnemigoCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoCharacter, AEnemigoCharacter::StaticClass, TEXT("AEnemigoCharacter"), &Z_Registration_Info_UClass_AEnemigoCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoCharacter), 178081364U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_EnemigoCharacter_h_2020380663(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_EnemigoCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_EnemigoCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
