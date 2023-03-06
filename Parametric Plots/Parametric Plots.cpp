// Parametric Plots.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Parametric Plots.h"

bool plot(vector<string> dataFiles) {

    ofstream outfile;

    outfile.open("plot.plt", ios::out | ios::trunc);

    outfile << "set view equal xyz" << endl;
    outfile << "set view ,,,.3" << endl;
    outfile << "set hidden3d" << endl;
    outfile << "splot ";

    for (int i = 0; i < dataFiles.size(); i++)
    {
        outfile << "'C:\\Users\\Roshini S\\Documents\\" << dataFiles[i] << "' with lines";
        if (i < (dataFiles.size() - 1))
            outfile << ",";
    }

    outfile << endl << "pause -1" << endl;
    outfile.close();
    system("wgnuplot.exe plot.plt");
    
    return true;
}

int main()
{
    vector<string> files;

    Vector3D p(4, 8, 13);
    Vector3D q(4, 8, 5);
    Vector3D r(9, 12, 3);
    Vector3D s(-6, 6, -2);

    /*Torus t(q, 10, 3, 50, p);
    t.generateDataFile("torusData.gnu");
    files.push_back("torusData.gnu");*/

    Circle c1(p, 10);
    Circle c2(q, 4);

    Loft l(c1, c2);
    l.generateDataFile("loftData.gnu");
    files.push_back("loftData.gnu");

    plot(files);
}

