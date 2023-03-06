#pragma once
#include "Curve.h"

using namespace std;

class Line : public Curve
{
public:

    Line(Vector3D p, Vector3D q, int count = 20);

	Line(vector<Vector3D> _points);

	Line();

};
