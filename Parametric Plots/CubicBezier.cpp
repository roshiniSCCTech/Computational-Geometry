#include "CubicBezier.h"

CubicBezier::CubicBezier(Vector3D p, Vector3D q, Vector3D r, Vector3D s, int count) {

    double step = 1.0 / count;

    Parabola para1(p, q, r, count);

    Parabola para2(q, r, s, count);

    for (int i = 0; i < count; i++) {
        Line n(para1.points[i], para2.points[i]);
        points.push_back(n.points[i]);
    }
}
