#pragma once
#include "GeometricEntity.h"
#include "Curve.h"

class Surface : public GeometricEntity
{
public:
	vector<Curve> surface;

	void generateDataFile(string fileName = "fileData.gnu");

	friend Surface operator * (double a, Surface p);

	Surface operator * (double a);

	Surface operator + (Surface c1);

	friend Surface operator * (vector<double> a, Surface c1);
};
