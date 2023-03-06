#pragma once
#include "Surface.h"
#define _USE_MATH_DEFINES
#include <math.h>

class Torus : public Surface
{
public: 
	Torus(Vector3D c, double R, double r, int count = 20, Vector3D n = *(new Vector3D(0, 0, 1)));
};

