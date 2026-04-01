#include <iostream>
using namespace std;

class Test {
    string name;
public:
    Test(string n) : name(n) {
        cout << name << " constructed\n";
    }
    ~Test() {
        cout << name << " destroyed\n";
    }
};

int main() {
    try {
        Test t1("Object1");

        {
            Test t2("Object2");
            Test t3("Object3");

            throw "Error occurred";
        }
    }
    catch (const char* msg) {
        cout << "Caught: " << msg << endl;
    }

    return 0;
}