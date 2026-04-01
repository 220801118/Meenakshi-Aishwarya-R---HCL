#include <iostream>
using namespace std;

int toggleFourthBit(int n) {
    return n ^ (1 << 3);
}

int main() {
    int n = 8; // 1000
    cout << toggleFourthBit(n);
}