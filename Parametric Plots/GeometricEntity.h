#pragma once
#include <vector>
#include <fstream>
#include "Vector3D.h"

class GeometricEntity
{
public:
	vector<Vector3D> points;

	void generateDataFile(string fileName = "fileData.gnu");
};