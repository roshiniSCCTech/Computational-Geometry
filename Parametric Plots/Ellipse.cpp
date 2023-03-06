#include "Ellipse.h"

// c is center, rad is radius, n is vector normal to circle
Ellipse::Ellipse(Vector3D c, double rad1, double rad2, int count, Vector3D n) {
    double step = 2 * M_PI / (count - 2);

    Vector3D v1 = n.normal();
    Vector3D v2 = (v1 * n).unit();

    Vector3D p;
    for (double t = 0; t < 2 * M_PI; t += step)
    {
        p = c + (rad1 * cos(t) * v1) + (rad2 * sin(t) * v2);

        points.push_back(p);
    }

    points.push_back(points[0]);
}