#include <iostream>
using namespace std;

namespace Company {
    namespace HR {
        void displayPolicy() {
            cout << "HR Policy: Work 9 to 5\n";
        }
    }
}

int main() {
    Company::HR::displayPolicy();

    return 0;
}