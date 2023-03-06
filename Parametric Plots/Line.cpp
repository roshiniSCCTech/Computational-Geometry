#include "Line.h"

Line::Line(Vector3D p, Vector3D q, int count) {

	double step = 1.0 / count;

    for (double u = 0; u < 1; u += step)
    {
        if (points.size() == count - 1) {
            break;
        }
        points.push_back((p * (1 - u)) + (q * u));
    }

    points.push_back(q);
}

Line::Line(vector<Vector3D> _points) {
    points = _points;
}

Line::Line() {
    vector<Vector3D> p;
    points = p;
}
