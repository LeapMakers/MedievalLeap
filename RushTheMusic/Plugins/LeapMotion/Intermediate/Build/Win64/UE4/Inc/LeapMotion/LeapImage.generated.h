// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UTexture2D;
#ifdef LEAPMOTION_LeapImage_generated_h
#error "LeapImage.generated.h already included, missing '#pragma once' in LeapImage.h"
#endif
#define LEAPMOTION_LeapImage_generated_h

#define RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImage_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWarp) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_xy); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->Warp(Z_Param_xy); \
	} \
 \
	DECLARE_FUNCTION(execRectify) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_uv); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->Rectify(Z_Param_uv); \
	} \
 \
	DECLARE_FUNCTION(execDistortionUE) \
	{ \
		P_FINISH; \
		*(UTexture2D**)Z_Param__Result=this->DistortionUE(); \
	} \
 \
	DECLARE_FUNCTION(execDistortion) \
	{ \
		P_FINISH; \
		*(UTexture2D**)Z_Param__Result=this->Distortion(); \
	} \
 \
	DECLARE_FUNCTION(execR8Texture) \
	{ \
		P_FINISH; \
		*(UTexture2D**)Z_Param__Result=this->R8Texture(); \
	} \
 \
	DECLARE_FUNCTION(execTexture) \
	{ \
		P_FINISH; \
		*(UTexture2D**)Z_Param__Result=this->Texture(); \
	}


#define RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImage_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWarp) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_xy); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->Warp(Z_Param_xy); \
	} \
 \
	DECLARE_FUNCTION(execRectify) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_uv); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->Rectify(Z_Param_uv); \
	} \
 \
	DECLARE_FUNCTION(execDistortionUE) \
	{ \
		P_FINISH; \
		*(UTexture2D**)Z_Param__Result=this->DistortionUE(); \
	} \
 \
	DECLARE_FUNCTION(execDistortion) \
	{ \
		P_FINISH; \
		*(UTexture2D**)Z_Param__Result=this->Distortion(); \
	} \
 \
	DECLARE_FUNCTION(execR8Texture) \
	{ \
		P_FINISH; \
		*(UTexture2D**)Z_Param__Result=this->R8Texture(); \
	} \
 \
	DECLARE_FUNCTION(execTexture) \
	{ \
		P_FINISH; \
		*(UTexture2D**)Z_Param__Result=this->Texture(); \
	}


#define RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImage_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULeapImage(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapImage(); \
	public: \
	DECLARE_CLASS(ULeapImage, UObject, COMPILED_IN_FLAGS(0), 0, LeapMotion, NO_API) \
	DECLARE_SERIALIZER(ULeapImage) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<ULeapImage*>(this); }


#define RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImage_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesULeapImage(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapImage(); \
	public: \
	DECLARE_CLASS(ULeapImage, UObject, COMPILED_IN_FLAGS(0), 0, LeapMotion, NO_API) \
	DECLARE_SERIALIZER(ULeapImage) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<ULeapImage*>(this); }


#define RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImage_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapImage); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULeapImage(const ULeapImage& InCopy); \
public:


#define RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImage_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULeapImage(const ULeapImage& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapImage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapImage)


#define RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImage_h_7_PROLOG
#define RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImage_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImage_h_10_RPC_WRAPPERS \
	RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImage_h_10_INCLASS \
	RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImage_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImage_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImage_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImage_h_10_INCLASS_NO_PURE_DECLS \
	RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImage_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LeapImage."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapImage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
