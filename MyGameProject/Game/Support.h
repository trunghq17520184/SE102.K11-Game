#pragma once
#include <Windows.h>
#include "BoxCollider.h"
#include <math.h>
#include "GameConfig.h"
#include "Entity.h"

class Support {
public:
	static RECT BoxColliderToRect(BoxCollider col);
	static float Clamp(float x, float a, float b);
	static float Distance(float x1, float x2);
	static float Lerp(float a, float b, float t);
	

};