// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LogicGameGeom/MyCPPLogic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCPPLogic() {}
// Cross Module References
	LOGICGAMEGEOM_API UClass* Z_Construct_UClass_AMyCPPLogic_NoRegister();
	LOGICGAMEGEOM_API UClass* Z_Construct_UClass_AMyCPPLogic();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LogicGameGeom();
// End Cross Module References
	DEFINE_FUNCTION(AMyCPPLogic::execGetActiveCardColumn)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ActiveCard);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActiveCardColumn(Z_Param_ActiveCard,Z_Param_Out_result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCPPLogic::execGetTrumpColumn)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Trump);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTrumpColumn(Z_Param_Trump,Z_Param_Out_result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCPPLogic::execNormalization)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
		P_GET_TARRAY_REF(int32,Z_Param_Out_GeomsPlayerPow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Normalization(Z_Param_Out_Array,Z_Param_Out_GeomsPlayerPow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCPPLogic::execMainArray)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_row);
		P_GET_PROPERTY(FIntProperty,Z_Param_column);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MainArray(Z_Param_row,Z_Param_column,Z_Param_Out_result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCPPLogic::execGetLowPower)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Round);
		P_GET_PROPERTY(FIntProperty,Z_Param_Trump);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfGeoms);
		P_GET_UBOOL(Z_Param_isRightOfFirst);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLowPower(Z_Param_Round,Z_Param_Trump,Z_Param_NumberOfGeoms,Z_Param_isRightOfFirst,Z_Param_Out_result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCPPLogic::exectestFunctionAB)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_a);
		P_GET_PROPERTY(FIntProperty,Z_Param_b);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->testFunctionAB(Z_Param_a,Z_Param_b,Z_Param_Out_result);
		P_NATIVE_END;
	}
	void AMyCPPLogic::StaticRegisterNativesAMyCPPLogic()
	{
		UClass* Class = AMyCPPLogic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveCardColumn", &AMyCPPLogic::execGetActiveCardColumn },
			{ "GetLowPower", &AMyCPPLogic::execGetLowPower },
			{ "GetTrumpColumn", &AMyCPPLogic::execGetTrumpColumn },
			{ "MainArray", &AMyCPPLogic::execMainArray },
			{ "Normalization", &AMyCPPLogic::execNormalization },
			{ "testFunctionAB", &AMyCPPLogic::exectestFunctionAB },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyCPPLogic_GetActiveCardColumn_Statics
	{
		struct MyCPPLogic_eventGetActiveCardColumn_Parms
		{
			int32 ActiveCard;
			int32 result;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ActiveCard;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyCPPLogic_GetActiveCardColumn_Statics::NewProp_ActiveCard = { "ActiveCard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCPPLogic_eventGetActiveCardColumn_Parms, ActiveCard), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyCPPLogic_GetActiveCardColumn_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCPPLogic_eventGetActiveCardColumn_Parms, result), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCPPLogic_GetActiveCardColumn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCPPLogic_GetActiveCardColumn_Statics::NewProp_ActiveCard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCPPLogic_GetActiveCardColumn_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCPPLogic_GetActiveCardColumn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ? ????? ??????? ???????? ?????\n" },
		{ "ModuleRelativePath", "MyCPPLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCPPLogic_GetActiveCardColumn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCPPLogic, nullptr, "GetActiveCardColumn", nullptr, nullptr, sizeof(MyCPPLogic_eventGetActiveCardColumn_Parms), Z_Construct_UFunction_AMyCPPLogic_GetActiveCardColumn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCPPLogic_GetActiveCardColumn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCPPLogic_GetActiveCardColumn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCPPLogic_GetActiveCardColumn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCPPLogic_GetActiveCardColumn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCPPLogic_GetActiveCardColumn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCPPLogic_GetLowPower_Statics
	{
		struct MyCPPLogic_eventGetLowPower_Parms
		{
			int32 Round;
			int32 Trump;
			int32 NumberOfGeoms;
			bool isRightOfFirst;
			int32 result;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Round;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Trump;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfGeoms;
		static void NewProp_isRightOfFirst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRightOfFirst;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyCPPLogic_GetLowPower_Statics::NewProp_Round = { "Round", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCPPLogic_eventGetLowPower_Parms, Round), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyCPPLogic_GetLowPower_Statics::NewProp_Trump = { "Trump", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCPPLogic_eventGetLowPower_Parms, Trump), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyCPPLogic_GetLowPower_Statics::NewProp_NumberOfGeoms = { "NumberOfGeoms", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCPPLogic_eventGetLowPower_Parms, NumberOfGeoms), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMyCPPLogic_GetLowPower_Statics::NewProp_isRightOfFirst_SetBit(void* Obj)
	{
		((MyCPPLogic_eventGetLowPower_Parms*)Obj)->isRightOfFirst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyCPPLogic_GetLowPower_Statics::NewProp_isRightOfFirst = { "isRightOfFirst", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyCPPLogic_eventGetLowPower_Parms), &Z_Construct_UFunction_AMyCPPLogic_GetLowPower_Statics::NewProp_isRightOfFirst_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyCPPLogic_GetLowPower_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCPPLogic_eventGetLowPower_Parms, result), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCPPLogic_GetLowPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCPPLogic_GetLowPower_Statics::NewProp_Round,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCPPLogic_GetLowPower_Statics::NewProp_Trump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCPPLogic_GetLowPower_Statics::NewProp_NumberOfGeoms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCPPLogic_GetLowPower_Statics::NewProp_isRightOfFirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCPPLogic_GetLowPower_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCPPLogic_GetLowPower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCPPLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCPPLogic_GetLowPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCPPLogic, nullptr, "GetLowPower", nullptr, nullptr, sizeof(MyCPPLogic_eventGetLowPower_Parms), Z_Construct_UFunction_AMyCPPLogic_GetLowPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCPPLogic_GetLowPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCPPLogic_GetLowPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCPPLogic_GetLowPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCPPLogic_GetLowPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCPPLogic_GetLowPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCPPLogic_GetTrumpColumn_Statics
	{
		struct MyCPPLogic_eventGetTrumpColumn_Parms
		{
			int32 Trump;
			int32 result;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Trump;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyCPPLogic_GetTrumpColumn_Statics::NewProp_Trump = { "Trump", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCPPLogic_eventGetTrumpColumn_Parms, Trump), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyCPPLogic_GetTrumpColumn_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCPPLogic_eventGetTrumpColumn_Parms, result), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCPPLogic_GetTrumpColumn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCPPLogic_GetTrumpColumn_Statics::NewProp_Trump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCPPLogic_GetTrumpColumn_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCPPLogic_GetTrumpColumn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//? ????? ??????? ????????? ??????(1 ?? 4)\n" },
		{ "ModuleRelativePath", "MyCPPLogic.h" },
		{ "ToolTip", "? ????? ??????? ????????? ??????(1 ?? 4)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCPPLogic_GetTrumpColumn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCPPLogic, nullptr, "GetTrumpColumn", nullptr, nullptr, sizeof(MyCPPLogic_eventGetTrumpColumn_Parms), Z_Construct_UFunction_AMyCPPLogic_GetTrumpColumn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCPPLogic_GetTrumpColumn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCPPLogic_GetTrumpColumn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCPPLogic_GetTrumpColumn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCPPLogic_GetTrumpColumn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCPPLogic_GetTrumpColumn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCPPLogic_MainArray_Statics
	{
		struct MyCPPLogic_eventMainArray_Parms
		{
			int32 row;
			int32 column;
			int32 result;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_row;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_column;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyCPPLogic_MainArray_Statics::NewProp_row = { "row", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCPPLogic_eventMainArray_Parms, row), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyCPPLogic_MainArray_Statics::NewProp_column = { "column", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCPPLogic_eventMainArray_Parms, column), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyCPPLogic_MainArray_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCPPLogic_eventMainArray_Parms, result), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCPPLogic_MainArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCPPLogic_MainArray_Statics::NewProp_row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCPPLogic_MainArray_Statics::NewProp_column,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCPPLogic_MainArray_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCPPLogic_MainArray_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//'????????? ??????? ?????? \n" },
		{ "ModuleRelativePath", "MyCPPLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCPPLogic_MainArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCPPLogic, nullptr, "MainArray", nullptr, nullptr, sizeof(MyCPPLogic_eventMainArray_Parms), Z_Construct_UFunction_AMyCPPLogic_MainArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCPPLogic_MainArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCPPLogic_MainArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCPPLogic_MainArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCPPLogic_MainArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCPPLogic_MainArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCPPLogic_Normalization_Statics
	{
		struct MyCPPLogic_eventNormalization_Parms
		{
			TArray<int32> Array;
			TArray<int32> GeomsPlayerPow;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GeomsPlayerPow_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GeomsPlayerPow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyCPPLogic_Normalization_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMyCPPLogic_Normalization_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCPPLogic_eventNormalization_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyCPPLogic_Normalization_Statics::NewProp_GeomsPlayerPow_Inner = { "GeomsPlayerPow", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMyCPPLogic_Normalization_Statics::NewProp_GeomsPlayerPow = { "GeomsPlayerPow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCPPLogic_eventNormalization_Parms, GeomsPlayerPow), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCPPLogic_Normalization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCPPLogic_Normalization_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCPPLogic_Normalization_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCPPLogic_Normalization_Statics::NewProp_GeomsPlayerPow_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCPPLogic_Normalization_Statics::NewProp_GeomsPlayerPow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCPPLogic_Normalization_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//?????? ???????????? ???????? ????\n" },
		{ "ModuleRelativePath", "MyCPPLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCPPLogic_Normalization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCPPLogic, nullptr, "Normalization", nullptr, nullptr, sizeof(MyCPPLogic_eventNormalization_Parms), Z_Construct_UFunction_AMyCPPLogic_Normalization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCPPLogic_Normalization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCPPLogic_Normalization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCPPLogic_Normalization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCPPLogic_Normalization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCPPLogic_Normalization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCPPLogic_testFunctionAB_Statics
	{
		struct MyCPPLogic_eventtestFunctionAB_Parms
		{
			int32 a;
			int32 b;
			int32 result;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_a;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_b;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyCPPLogic_testFunctionAB_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCPPLogic_eventtestFunctionAB_Parms, a), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyCPPLogic_testFunctionAB_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCPPLogic_eventtestFunctionAB_Parms, b), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyCPPLogic_testFunctionAB_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCPPLogic_eventtestFunctionAB_Parms, result), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCPPLogic_testFunctionAB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCPPLogic_testFunctionAB_Statics::NewProp_a,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCPPLogic_testFunctionAB_Statics::NewProp_b,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCPPLogic_testFunctionAB_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCPPLogic_testFunctionAB_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCPPLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCPPLogic_testFunctionAB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCPPLogic, nullptr, "testFunctionAB", nullptr, nullptr, sizeof(MyCPPLogic_eventtestFunctionAB_Parms), Z_Construct_UFunction_AMyCPPLogic_testFunctionAB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCPPLogic_testFunctionAB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCPPLogic_testFunctionAB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCPPLogic_testFunctionAB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCPPLogic_testFunctionAB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCPPLogic_testFunctionAB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyCPPLogic_NoRegister()
	{
		return AMyCPPLogic::StaticClass();
	}
	struct Z_Construct_UClass_AMyCPPLogic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCPPLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LogicGameGeom,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyCPPLogic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCPPLogic_GetActiveCardColumn, "GetActiveCardColumn" }, // 226392297
		{ &Z_Construct_UFunction_AMyCPPLogic_GetLowPower, "GetLowPower" }, // 2745109207
		{ &Z_Construct_UFunction_AMyCPPLogic_GetTrumpColumn, "GetTrumpColumn" }, // 960257380
		{ &Z_Construct_UFunction_AMyCPPLogic_MainArray, "MainArray" }, // 1280351360
		{ &Z_Construct_UFunction_AMyCPPLogic_Normalization, "Normalization" }, // 3841297258
		{ &Z_Construct_UFunction_AMyCPPLogic_testFunctionAB, "testFunctionAB" }, // 2773867680
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCPPLogic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyCPPLogic.h" },
		{ "ModuleRelativePath", "MyCPPLogic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCPPLogic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCPPLogic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCPPLogic_Statics::ClassParams = {
		&AMyCPPLogic::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyCPPLogic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCPPLogic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCPPLogic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCPPLogic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCPPLogic, 3366007677);
	template<> LOGICGAMEGEOM_API UClass* StaticClass<AMyCPPLogic>()
	{
		return AMyCPPLogic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCPPLogic(Z_Construct_UClass_AMyCPPLogic, &AMyCPPLogic::StaticClass, TEXT("/Script/LogicGameGeom"), TEXT("AMyCPPLogic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCPPLogic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
