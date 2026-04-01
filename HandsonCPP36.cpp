#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("test.txt");
    string line;
    int count = 0;

    while (getline(fin, line)) {
        count++;
    }
    fin.close();

    ofstream fout("test.txt", ios::app);
    fout << "Total Lines: " << count << endl;
    fout.close();

    cout << "Total lines counted and appended!\n";

    return 0;
}