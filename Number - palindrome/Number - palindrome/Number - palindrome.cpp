#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

string itos(int n, int z) 
{
    string a = "";            
    while (n > 0) {
        a = char(n % z) + a;
        n = n / z;
    }
    return a;
}

bool palin(string s)
{ 
    bool k = 1;
    for (int z = 0; z < s.length() / 2; z++)
        k = k && s[z] == s[s.length() - 1 - z];
    return k;
}

int main() {
    ifstream fin;
    fin.open("input.txt");
    ofstream fout;
    fout.open("output.txt");

    string s;
    int n;
    cin >> n;
    vector <int> k;
    for (int z = 2; z < 37; z++) { 
        s = itos(n, z);
        if (palin(s)) k.push_back(z);
    }
    if (k.size() == 0) { cout << "none"; return 0; }
    if (k.size() == 1) { cout << "unique" << endl << k[0]; return 0; }
    cout << "multiple" << endl;
    for (int z = 0; z < k.size(); z++) cout << k[z] << " ";
    return 0;
}
