#include "Square.h"

Square::Square(Vector3D p, Vector3D q, Vector3D r, Vector3D s, int count) {
	int lineCount = count / 4;
	Line l(p, q, lineCount);
	Line m(q, r, lineCount);
	Line n(r, s, lineCount);
	Line o(s, p, lineCount);
	for (int i = 0; i < lineCount; i++) {
		points.push_back(l.points[i]);
	}
	for (int i = 0; i < lineCount; i++) {
		points.push_back(m.points[i]);
	}
	for (int i = 0; i < lineCount; i++) {
		points.push_back(n.points[i]);
	}
	for (int i = 0; i < lineCount; i++) {
		points.push_back(o.points[i]);
	}
}