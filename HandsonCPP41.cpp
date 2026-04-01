#include <iostream>
#include <stdexcept>
using namespace std;

int toInt(string s) {
    for (char c : s) {
        if (!isdigit(c))
            throw invalid_argument("Not a number");
    }
    return stoi(s);
}

int main() {
    try {
        cout << toInt("123") << endl;
        cout << toInt("12a") << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Exception: " << e.what() << endl;
    }
}