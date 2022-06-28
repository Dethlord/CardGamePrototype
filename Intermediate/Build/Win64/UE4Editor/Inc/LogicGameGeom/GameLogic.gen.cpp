// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LogicGameGeom/GameLogic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLogic() {}
// Cross Module References
	LOGICGAMEGEOM_API UClass* Z_Construct_UClass_AGameLogic_NoRegister();
	LOGICGAMEGEOM_API UClass* Z_Construct_UClass_AGameLogic();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LogicGameGeom();
	LOGICGAMEGEOM_API UClass* Z_Construct_UClass_ASpawner_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGameLogic::execValidateMove)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Card);
		P_GET_PROPERTY(FIntProperty,Z_Param_CardOnTable);
		P_GET_TARRAY(ASpawner*,Z_Param_PlayerHandCards);
		P_GET_PROPERTY(FIntProperty,Z_Param_TrampSuit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=AGameLogic::ValidateMove(Z_Param_Card,Z_Param_CardOnTable,Z_Param_PlayerHandCards,Z_Param_TrampSuit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLogic::execGetDebugSuitsAndValues)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=AGameLogic::GetDebugSuitsAndValues(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	void AGameLogic::StaticRegisterNativesAGameLogic()
	{
		UClass* Class = AGameLogic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDebugSuitsAndValues", &AGameLogic::execGetDebugSuitsAndValues },
			{ "ValidateMove", &AGameLogic::execValidateMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics
	{
		struct GameLogic_eventGetDebugSuitsAndValues_Parms
		{
			TArray<int32> Array;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGetDebugSuitsAndValues_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGetDebugSuitsAndValues_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::Function_MetaDataParams[] = {
		{ "Comment", "////??????? ?????? \"???? ????\"\n//UFUNCTION(BlueprintCallable)\n//\x09static void GetPowerHands(UPARAM(ref)TArray<int32>& Array, float& result);\n" },
		{ "ModuleRelativePath", "GameLogic.h" },
		{ "ToolTip", "/??????? ?????? \"???? ????\"\nUFUNCTION(BlueprintCallable)\n       static void GetPowerHands(UPARAM(ref)TArray<int32>& Array, float& result);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLogic, nullptr, "GetDebugSuitsAndValues", nullptr, nullptr, sizeof(GameLogic_eventGetDebugSuitsAndValues_Parms), Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLogic_ValidateMove_Statics
	{
		struct GameLogic_eventValidateMove_Parms
		{
			int32 Card;
			int32 CardOnTable;
			TArray<ASpawner*> PlayerHandCards;
			int32 TrampSuit;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Card;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CardOnTable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerHandCards_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerHandCards;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TrampSuit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_Card = { "Card", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventValidateMove_Parms, Card), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_CardOnTable = { "CardOnTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventValidateMove_Parms, CardOnTable), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_PlayerHandCards_Inner = { "PlayerHandCards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASpawner_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_PlayerHandCards = { "PlayerHandCards", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventValidateMove_Parms, PlayerHandCards), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_TrampSuit = { "TrampSuit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventValidateMove_Parms, TrampSuit), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLogic_eventValidateMove_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLogic_eventValidateMove_Parms), &Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_Card,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_CardOnTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_PlayerHandCards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_PlayerHandCards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_TrampSuit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//??????? ????????????? ????\n" },
		{ "CPP_Default_TrampSuit", "-1" },
		{ "ModuleRelativePath", "GameLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLogic, nullptr, "ValidateMove", nullptr, nullptr, sizeof(GameLogic_eventValidateMove_Parms), Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLogic_ValidateMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameLogic_NoRegister()
	{
		return AGameLogic::StaticClass();
	}
	struct Z_Construct_UClass_AGameLogic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LogicGameGeom,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameLogic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues, "GetDebugSuitsAndValues" }, // 2549896814
		{ &Z_Construct_UFunction_AGameLogic_ValidateMove, "ValidateMove" }, // 3657668280
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLogic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameLogic.h" },
		{ "ModuleRelativePath", "GameLogic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameLogic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameLogic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameLogic_Statics::ClassParams = {
		&AGameLogic::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGameLogic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameLogic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameLogic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameLogic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameLogic, 2697019932);
	template<> LOGICGAMEGEOM_API UClass* StaticClass<AGameLogic>()
	{
		return AGameLogic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameLogic(Z_Construct_UClass_AGameLogic, &AGameLogic::StaticClass, TEXT("/Script/LogicGameGeom"), TEXT("AGameLogic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameLogic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
