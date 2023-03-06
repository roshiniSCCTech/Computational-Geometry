#include "Vector3D.h"
#include <math.h>

Vector3D::Vector3D() {
	point[0] = 0.0;
	point[1] = 0.0;
	point[2] = 0.0;
}

Vector3D::Vector3D(double x, double y, double z) {
	point[0] = x;
	point[1] = y;
	point[2] = z;
}

Vector3D::Vector3D(const Vector3D& other) {
	point[0] = other.point[0];
	point[1] = other.point[1];
	point[2] = other.point[2];
}

Vector3D Vector3D::operator + (Vector3D q) {
	Vector3D r;
	r.point[0] = point[0] + q.point[0];
	r.point[1] = point[1] + q.point[1];
	r.point[2] = point[2] + q.point[2];

	return r;
}

Vector3D Vector3D::operator - (Vector3D q) {
	Vector3D r;
	r = *this + (-1 * q);
	return r;
}

Vector3D operator * (double a, Vector3D p) {
	Vector3D r;
	r.point[0] = a * p.point[0];
	r.point[1] = a * p.point[1];
	r.point[2] = a * p.point[2];

	return r;
}

Vector3D Vector3D::operator * (double a) {
	Vector3D r;
	r.point[0] = a * point[0];
	r.point[1] = a * point[1];
	r.point[2] = a * point[2];

	return r;
}

void Vector3D::operator *= (double a) {
	*this = *this * a;
}

Vector3D operator + (double a, Vector3D p) {
	Vector3D r;
	r.point[0] = a + p.point[0];
	r.point[1] = a + p.point[1];
	r.point[2] = a + p.point[2];

	return r;
}

Vector3D Vector3D::operator + (double a) {
	Vector3D r;
	r.point[0] = a + point[0];
	r.point[1] = a + point[1];
	r.point[2] = a + point[2];

	return r;
}

void Vector3D::operator += (double a) {
	*this = *this + a;
}


ostream& operator<<(ostream& os, Vector3D p) {
	os << p.point[0] << " " << p.point[1] << " " << p.point[2] << endl;

	return os;
}

double Vector3D::magnitude() {
	return sqrt(*this ^ *this);
}

//unit vector 
Vector3D Vector3D::unit() {
	return *this * (1 / (this->magnitude()));
}

// dot product 
double Vector3D::operator ^ (Vector3D p) {
	double d = 0;
	for (int i = 0; i < 3; i++) {
		d += (point[i] * p.point[i]);
	}
	return d;
}

// cross product
Vector3D Vector3D::operator * (Vector3D q) {
	Vector3D v;
	v.point[0] = (point[1] * q.point[2]) - (point[2] * q.point[1]);
	v.point[1] = (point[2] * q.point[0]) - (point[0] * q.point[2]);
	v.point[2] = (point[0] * q.point[1]) - (point[1] * q.point[0]);
	return v;
}

// normal vector
Vector3D Vector3D::normal() {
	Vector3D p;
	if (point[2] != 0) {
		p.point[0] = 0;
		p.point[1] = 1;
		p.point[2] = -point[1] / point[2];
	}
	else if (point[1] != 0) {
		p.point[0] = 0;
		p.point[1] = -point[2] / point[1];
		p.point[2] = 1;
	}
	else if (point[0] != 0) {
		p.point[0] = -point[2] / point[0];
		p.point[1] = 0;
		p.point[2] = 1;
	}
	else {
		p.point[0] = 0;
		p.point[1] = 0;
		p.point[2] = 0;
	}

	return p;
}
