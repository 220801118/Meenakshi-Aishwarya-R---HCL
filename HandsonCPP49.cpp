#include <iostream>
using namespace std;

int main() {
    int x = 100;

    uintptr_t addr = reinterpret_cast<uintptr_t>(&x);

    int* ptr = reinterpret_cast<int*>(addr);

    cout << "Value: " << *ptr << endl;

    return 0;
}