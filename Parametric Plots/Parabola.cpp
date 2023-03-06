#include "Parabola.h"

Parabola::Parabola(Vector3D p, Vector3D q, Vector3D r, int count) {

	double step = 1.0 / count;

    Line l(p, q, count);

    Line m(q, r, count);

    for (int i = 0; i < count; i++) {
        Line n(l.points[i], m.points[i]);
        points.push_back(n.points[i]);
    }
}