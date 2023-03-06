#pragma once
#include "Curve.h"
#include "Line.h"

using namespace std;

class Square : public Curve
{
public:

	// count shoult always be a multiple of 4
	Square(Vector3D p, Vector3D q, Vector3D r, Vector3D s, int count = 80);

};
