#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ifstream fin;
    fin.open("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");

    int n;
    fin >> n;
    int m, i, k;
    m = n;
    k = 2;
    vector <int> f;
    f.push_back(2);
    f.push_back(3);
    i = 5;
    while (i <= m) {
        bool tail = 1;
        for (int j = 0; j < k; j++) {
            if (f[j] * f[j] > i) break;
            if (i % f[j] == 0) tail = 0;
        }

        if (tail) {
            f.push_back(i);
            k++;
        }
        i += 2;
    }
    for (int z = 0; z < f.size(); z++)
        for (int x = z; x < f.size(); x++)
            if (f[z] + f[x] == n) {
                fout << f[z] << " " << f[x];
                return 0;
            }
    return 0;
}
