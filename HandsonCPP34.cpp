#include <iostream>
using namespace std;

class Demo {
public:

    Demo() {
        cout << "Constructor called\n";
    }

    ~Demo() {
        cout << "Destructor called\n";
    }

    void show() {
        cout << "Inside show function\n";
    }
};

int main() {

    Demo* d = new Demo();  

    d->show();

    delete d;              

    return 0;
}