#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    ifstream fin;
    fin.open("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n;
    double t;
    fin >> n >> t;
    vector <double> x(n);
    vector <double> y(n);
    vector <double> r(n);
    for (int z = 0; z < n; z++) fin >> x[z] >> y[z] >> r[z];
    if (n == 1) {
        fout << fixed << setprecision(2) << t;
        return 0;
    }
    double minl = 200;
    for (int z = 0; z < n - 1; z++)
        for (int c = z + 1; c < n; c++) {
            double l = sqrt((x[z] - x[c]) * (x[z] - x[c]) + (y[z] - y[c]) * (y[z] - y[c]));
            l = l - r[z] - r[c];
            if (l <= 0) {
                fout << "0.00"; return 0;
            }
            if (l < minl) minl = l; 
        }
    if (minl / 2 > t) { fout << fixed << setprecision(2) << t; return 0; }
    else fout << fixed << setprecision(2) << minl / 2;
    return 0;

    fin.close();
    fout.close();
}
