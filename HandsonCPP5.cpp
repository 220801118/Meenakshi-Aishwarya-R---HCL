#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "\nGiven a = " << a << ", b = " << b << endl;

    cout << "a & b  = " << (a & b) << endl;
    cout << "a | b  = " << (a | b) << endl;
    cout << "a ^ b  = " << (a ^ b) << endl;

    cout << "a << 1 = " << (a << 1) << endl;
    cout << "b << 1 = " << (b << 1) << endl;

    cout << "a >> 1 = " << (a >> 1) << endl;
    cout << "b >> 1 = " << (b >> 1) << endl;

    return 0;
}