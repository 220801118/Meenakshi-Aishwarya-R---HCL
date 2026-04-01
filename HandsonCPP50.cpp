#include <iostream>
using namespace std;

class Shape {
public:
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle\n";
    }
};

int main() {
    Shape* s = new Circle();

    Circle* c = dynamic_cast<Circle*>(s);

    if (c) {
        c->draw();
    } else {
        cout << "Cast failed\n";
    }

    delete s;
    return 0;
}