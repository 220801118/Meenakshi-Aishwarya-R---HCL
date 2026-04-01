#include <iostream>
using namespace std;

#define LOG(msg) \
    cout << "[LOG] " << __FILE__ << ":" << __LINE__ \
         << " (" << __func__ << ") -> " << msg << endl;

void testFunction() {
    LOG("Inside testFunction");
}

int main() {
    LOG("Inside main");

    testFunction();

    return 0;
}