#include <iostream>
using namespace std;

namespace MyErrors {
    class MyException {
    public:
        const char* what() {
            return "Custom Exception Occurred";
        }
    };
}

int main() {
    try {
        throw MyErrors::MyException();
    }
    catch (MyErrors::MyException e) {
        cout << e.what() << endl;
    }

    return 0;
}