#pragma once
#include "GeometricEntity.h"
#include "Curve.h"

class Curve : public GeometricEntity
{
public:
	Curve();

	friend Curve operator * (double a, Curve p);

	Curve operator * (double a);

	Curve operator + (Curve c1);

	friend Curve operator * (vector<double> a, Curve c1);
};
