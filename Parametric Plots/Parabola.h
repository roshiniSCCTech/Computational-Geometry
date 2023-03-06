#pragma once
#include "Curve.h"
#include "Line.h"

using namespace std;

class Parabola : public Curve
{
public:

    Parabola(Vector3D p, Vector3D q, Vector3D r, int count = 20);

};

