// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapBone;
#ifdef LEAPMOTION_LeapFinger_generated_h
#error "LeapFinger.generated.h already included, missing '#pragma once' in LeapFinger.h"
#endif
#define LEAPMOTION_LeapFinger_generated_h

#define RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBone) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_type); \
		P_FINISH; \
		*(ULeapBone**)Z_Param__Result=this->Bone(LeapBoneType(Z_Param_type)); \
	}


#define RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBone) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_type); \
		P_FINISH; \
		*(ULeapBone**)Z_Param__Result=this->Bone(LeapBoneType(Z_Param_type)); \
	}


#define RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULeapFinger(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapFinger(); \
	public: \
	DECLARE_CLASS(ULeapFinger, ULeapPointable, COMPILED_IN_FLAGS(0), 0, LeapMotion, NO_API) \
	DECLARE_SERIALIZER(ULeapFinger) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULeapFinger*>(this); }


#define RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesULeapFinger(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapFinger(); \
	public: \
	DECLARE_CLASS(ULeapFinger, ULeapPointable, COMPILED_IN_FLAGS(0), 0, LeapMotion, NO_API) \
	DECLARE_SERIALIZER(ULeapFinger) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULeapFinger*>(this); }


#define RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapFinger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapFinger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapFinger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapFinger); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULeapFinger(const ULeapFinger& InCopy); \
public:


#define RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapFinger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULeapFinger(const ULeapFinger& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapFinger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapFinger); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapFinger)


#define RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_7_PROLOG
#define RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_10_RPC_WRAPPERS \
	RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_10_INCLASS \
	RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_10_INCLASS_NO_PURE_DECLS \
	RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LeapFinger."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RushTheMusic_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFinger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
