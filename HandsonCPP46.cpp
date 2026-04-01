#include <iostream>
#include <cassert>
using namespace std;

int main() {

#ifdef __VERSION__
    cout << "Compiler Version: " << __VERSION__ << endl;
#else
    cout << "Compiler version not available\n";
#endif

    int x = 5;

    if (x < 0) {
        cout << "Error at " << __FILE__ << ":" << __LINE__ << endl;
    }

    assert(x > 0); // passes

    return 0;
}