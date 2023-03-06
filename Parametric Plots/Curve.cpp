#include "Curve.h"

Curve::Curve() {
    vector<Vector3D> p;
    points = p;
}

Curve operator * (double a, Curve c1) {
    Curve c;

    for (int i = 0; i < c1.points.size(); i++) {
        c.points.push_back(a * c1.points[i]);
    }

    return c;
}

Curve Curve::operator * (double a) {
    Curve c;

    for (int i = 0; i < points.size(); i++) {
        c.points.push_back(a * points[i]);
    }

    return c;
}

Curve Curve::operator + (Curve c1) {
    Curve c2;

    for (int i = 0; i < points.size(); i++) {
        c2.points.push_back(points[i] + c1.points[i]);
    }

    return c2;
}

Curve operator * (vector<double> a, Curve c1) {
    Curve c;

    for (int i = 0; i < c1.points.size(); i++) {
        c.points.push_back(a[i] * c1.points[i]);
    }

    return c;
}

