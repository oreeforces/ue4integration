// Copyright (c), Firelight Technologies Pty, Ltd. 2012-2015.

#pragma once

#include "FMODOculusRoomParameters.generated.h"

USTRUCT(BlueprintType)
struct FFMODOculusRoomParameters
{
	GENERATED_USTRUCT_BODY()

	/** Default constructor */
	FFMODOculusRoomParameters();

	/** Room width in unreal units */
	UPROPERTY(EditAnywhere, Category=Room)
	float RoomWidth;

	/** Room height in unreal units */
	UPROPERTY(EditAnywhere, Category=Room)
	float RoomHeight;

	/** Room depth in unreal units */
	UPROPERTY(EditAnywhere, Category=Room)
	float RoomDepth;

	/** Left reflections (0.0 = fully anechoic, 1.0 = fully reflective, but we cap at 0.95) */
	UPROPERTY(EditAnywhere, Category=Reflections)
	float RefLeft;

	/** Right reflections (0.0 = fully anechoic, 1.0 = fully reflective, but we cap at 0.95) */
	UPROPERTY(EditAnywhere, Category=Reflections)
	float RefRight;

	/** Up reflections (0.0 = fully anechoic, 1.0 = fully reflective, but we cap at 0.95) */
	UPROPERTY(EditAnywhere, Category=Reflections)
	float RefUp;

	/** Down reflections (0.0 = fully anechoic, 1.0 = fully reflective, but we cap at 0.95) */
	UPROPERTY(EditAnywhere, Category=Reflections)
	float RefDown;

	/** Near reflections (0.0 = fully anechoic, 1.0 = fully reflective, but we cap at 0.95) */
	UPROPERTY(EditAnywhere, Category=Reflections)
	float RefNear;

	/** Far reflections (0.0 = fully anechoic, 1.0 = fully reflective, but we cap at 0.95) */
	UPROPERTY(EditAnywhere, Category=Reflections)
	float RefFar;

};