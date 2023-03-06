#pragma once
#include "Surface.h"
#include "Curve.h"

class Loft : public Surface
{
public:
	Loft(Curve c1, Curve c2, int count = 30);
};

