#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n, dif, maxdif = 0; 
    fin >> n;
    vector<int> bus(n);
    for (int i = 0; i < n; i++)
        fin >> bus[i];
    for (int i = 0; i < n; i++){
        for (int k = i; k < n; k++) {
            if (bus[i] == bus[k]) {
                dif = abs(i - k);
                if (dif > maxdif) {
                    maxdif = dif;
                    break;
                }
            }
        }

    }
    fout << maxdif;
    
    fout.close();
    fin.close();
}