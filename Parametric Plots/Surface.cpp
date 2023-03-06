#include "Surface.h"

Surface operator * (double a, Surface c1) {
    Surface s;

    for (int i = 0; i < c1.points.size(); i++) {
        s.points.push_back(a * c1.points[i]);
    }

    return s;
}

Surface Surface::operator * (double a) {
    Surface s;

    for (int i = 0; i < points.size(); i++) {
        s.points.push_back(a * points[i]);
    }

    return s;
}

Surface Surface::operator + (Surface s1) {
    Surface s2;

    for (int i = 0; i < points.size(); i++) {
        s2.points.push_back(points[i] + s1.points[i]);
    }

    return s2;
}

Surface operator * (vector<double> a, Surface s1) {
    Surface s;

    for (int i = 0; i < s1.points.size(); i++) {
        s.points.push_back(a[i] * s1.points[i]);
    }

    return s;
}

void Surface::generateDataFile(string fileName) {
    ofstream outfile;
    outfile.open("\\Users\\Roshini S\\Documents\\" + fileName, ios::out | ios::trunc);

    int curveSize = surface.size();
    int pointSize = surface[0].points.size();
    for (int i = 0; i < curveSize; i++) {
        for (int j = 0; j < pointSize; j++) {
            outfile << surface[i].points[j];
        }
        outfile << endl;
    }

    outfile.close();
}
