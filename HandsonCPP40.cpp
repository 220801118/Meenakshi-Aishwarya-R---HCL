#include <iostream>
#include <fstream>
using namespace std;

void openFile() {
    ifstream fin("test.txt");

    if (!fin)
        throw string("File cannot be opened");

    cout << "File opened successfully\n";
}

int main() {
    try {
        openFile();
    }
    catch (string msg) {
        cout << msg << endl;
    }
}