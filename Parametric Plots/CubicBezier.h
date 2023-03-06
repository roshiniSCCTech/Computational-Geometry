#pragma once
#include "Curve.h"
#include "Parabola.h"
#include "Line.h"

using namespace std;

class CubicBezier : public Curve
{
public:

    CubicBezier(Vector3D p, Vector3D q, Vector3D r, Vector3D s, int count = 20);

};

