#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream g("INPUT.txt");
    ofstream h("OUTPUT.txt");
    int a, z, x;
    z = 1;
    g >> a;
    while (z != 0) {
        if (a == 1) break;
        if (a % 2 != 0) { z = 0; }
        else {
            a = a / 2;
            z++;
        }
    }
    while (a % 5 == 0) {

        a = a / 5;
        ++z;
        if (a % 5 != 0) { z = 0; break; }
        if (a == 1) break;

    }
    while (a % 2 == 0) {
        if (a % 2 != 0) { z = 0; break; }
        else {
            a = a / 2;
            ++z;
            if (a % 5 != 0) { z = 0; break; }
            if (a == 1) break;
        }
    }
    if (z > 0) h << "No";
    else h << "YES";
    return 0;
}