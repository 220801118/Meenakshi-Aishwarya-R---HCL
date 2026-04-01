#include <iostream>
#include <fstream>
using namespace std;

int main() {
    try {
        ifstream fin("data.txt");

        if (!fin)
            throw "File error";

        int a, b;
        fin >> a >> b;

        if (b == 0)
            throw "Division by zero";

        cout << "Result: " << a / b << endl;

        fin.close();
    }
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}