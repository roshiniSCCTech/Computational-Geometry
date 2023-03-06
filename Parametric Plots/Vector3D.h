#pragma once
#include <iostream>
using namespace std;

class Vector3D
{
public:
	double point[3];

	Vector3D();

	Vector3D(double x, double y, double z);

	Vector3D(const Vector3D& other);

	// vector addition
	Vector3D operator + (Vector3D q);

	// vector subtraction
	Vector3D operator - (Vector3D q);

	// scalar multiplication 1
	friend Vector3D operator * (double a, Vector3D p);

	// scalar multiplication 2
	Vector3D operator * (double a);

	//scalar multiplication shorthand
	void operator *= (double a);

	// scalar addition
	friend Vector3D operator + (double a, Vector3D p);

	// constant vector addition 1
	Vector3D operator + (double a);

	// constant vector addition 2
	void operator += (double a);

	friend ostream& operator<<(ostream& os, Vector3D p);

	double magnitude();

	// unit vector
	Vector3D unit();

	// dot product
	double operator ^ (Vector3D q);

	// cross product
	Vector3D operator * (Vector3D q);

	// normal vector
	Vector3D normal();
};



