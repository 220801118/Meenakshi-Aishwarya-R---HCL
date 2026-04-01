#include <iostream>
using namespace std;

template <typename T>
class Box {
    T value;

public:
    Box(T v) : value(v) {}

    T get() {
        return value;
    }
};

template <typename T>
class Box<T*> {
    T* ptr;

public:
    Box(T* p = nullptr) : ptr(p) {}

    T* get() {
        return ptr;
    }

    void reset(T* p = nullptr) {
        ptr = p;
    }
};

int main() {

    Box<int> b1(10);
    cout << b1.get() << endl;

    int x = 50;
    Box<int*> b2(&x);

    cout << *(b2.get()) << endl;

    b2.reset(nullptr);
}