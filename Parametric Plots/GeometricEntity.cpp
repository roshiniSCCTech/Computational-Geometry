#include "GeometricEntity.h"

void GeometricEntity::generateDataFile(string fileName) {
	ofstream outfile;
	outfile.open("\\Users\\Roshini S\\Documents\\" + fileName, ios::out | ios::trunc);

	int size = points.size();

	for (int i = 0; i < size; i++) {
		outfile << points[i];
	}

	outfile.close();
}

