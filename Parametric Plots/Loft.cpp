#include "Loft.h"

Loft::Loft(Curve c1, Curve c2, int count) {
    double step = 1.0 / count;

    for (double u = 0; u <= 1; u += step)
    {
        Curve c = (c1 * (1 - u)) + (c2 * u);
        surface.push_back(c);
    }

}

