#include <iostream>
using namespace std;

class Test {
private:
    const int value;

public:
    Test(int v) : value(v) {}

    void setValue(int v) {

        int* ptr = const_cast<int*>(&value);
        *ptr = v;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Test t(10);
    t.display();

    t.setValue(50);
    t.display();

    return 0;
}