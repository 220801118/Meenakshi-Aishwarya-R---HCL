#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("test.txt");

    if (fout.is_open()) {
        fout << "Hello World\n";
        fout << "File handling in C++\n";
        fout.close();   // explicitly close
        cout << "Data written successfully\n";
    } else {
        cout << "File open failed\n";
        return 0;
    }

    ifstream fin("test.txt");
    string line;

    if (fin.is_open()) {
        cout << "\nFile Content:\n";
        while (getline(fin, line)) {
            cout << line << endl;
        }
        fin.close();
    }

    return 0;
}