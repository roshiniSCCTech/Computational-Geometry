#pragma once
#include "Curve.h"
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

class Ellipse : public Curve
{
public:

	Ellipse(Vector3D c, double rad, double rad2, int count = 20, Vector3D n = *(new Vector3D(0, 0, 1)));

};

