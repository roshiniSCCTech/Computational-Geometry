#include "Torus.h"
#include "Circle.h"

Torus::Torus(Vector3D c, double R, double r, int count, Vector3D n) {

    double step = 2 * M_PI / (count - 2);

    n = n.unit();
    Vector3D v1 = n.normal().unit();
    Vector3D v2 = (v1 * n).unit();

    
    for (double theta = 0; theta < 2 * M_PI; theta += step)
    {
        Curve curve;
        for (double phi = 0; phi < 2 * M_PI; phi += step)
        {
            curve.points.push_back(c + ((R + r + (r * cos(phi))) * cos(theta) * v1) + ((R + r + (r * cos(phi))) * sin(theta) * v2) + (r * sin(phi) * n));
        }
        curve.points.push_back(curve.points[0]);
        surface.push_back(curve);
    }
    surface.push_back(surface[0]);
}
