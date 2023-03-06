#pragma once
#include "Curve.h"
#define _USE_MATH_DEFINES
#include <math.h>


using namespace std;

class Circle : public Curve
{
public:

	Circle(Vector3D c, double rad, int count = 20, Vector3D n = *(new Vector3D(0, 0, 1)));

};

