#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main() {

    ifstream fin;
    fin.open("input.txt");
    ofstream fout;
    fout.open("output.txt");

    string n, n1 = "", m, alphbet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    fin >> n >> m;
    vector <string> str;
    for (int z = 0; z < 27; z++) {
        for (int x = 0; x < n.length(); x++)
            n1 = n1 + alphbet[(alphbet.find(n[x]) + z) % 26];
        if (n1.find(m) != -1) {
            str.push_back(n1);
        }
        n1 = "";
    }
    if (str.size() == 0) cout << "IMPOSSIBLE";
    else
        fout << str[str.size() - 1];
    
    fin.close();
    fout.close();
}