#include "Circle.h"

// c is center, rad is radius, n is vector normal to circle
Circle::Circle(Vector3D c, double rad, int count, Vector3D n) {
    double step = 2 * M_PI / (count - 2);

    Vector3D v1 = n.normal().unit();
    Vector3D v2 = (v1 * n).unit();

    Vector3D p;
    for (double t = 0; t < 2 * M_PI; t += step)
    {
        p = c + (rad * cos(t) * v1) + (rad * sin(t) * v2);

        points.push_back(p);
    }

    points.push_back(points[0]);
}