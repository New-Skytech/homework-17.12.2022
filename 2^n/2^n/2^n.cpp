#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("input.txt");
    ofstream fout;
    fout.open("output.txt");
    
    int n;

    fin >> n;
    cout << pow(2, n);

    fin.close();
    fout.close();
}