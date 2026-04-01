#include <iostream>
using namespace std;

int setThirdBit(int n) {
    return n | (1 << 2);
}

int main() {
    int n = 5; // 0101
    cout << setThirdBit(n);
}