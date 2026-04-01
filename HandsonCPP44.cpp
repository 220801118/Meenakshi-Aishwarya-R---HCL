#include <iostream>
using namespace std;

#define SQR_BAD(x) x * x
#define SQR_GOOD(x) ((x) * (x))


inline int sqr_func(int x) {
    return x * x;
}

int main() {
    int a = 2, b = 3;

    cout << "Bad Macro: " << SQR_BAD(a + b) << endl;
    cout << "Good Macro: " << SQR_GOOD(a + b) << endl;
    cout << "Inline Function: " << sqr_func(a + b) << endl;

    return 0;
}