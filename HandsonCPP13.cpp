#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w, int h) {
        setWidth(w);
        setHeight(h);
    }
    void setWidth(int w) {
        if (w>0) {
            width=w;
        } else {
            cout << "Invalid width! Clamping to 1.\n";
            width=1;
        }
    }
    void setHeight(int h) {
        if (h>0) {
            height=h;
        } else {
            cout << "Invalid height! Clamping to 1.\n";
            height=1;
        }
    }

    int getWidth() const {
        return width;
    }

    int getHeight() const {
        return height;
    }

    void display() const {
        cout << "Rectangle: width = " << width
             << ", height = " << height << endl;
    }
};

int main() {
    cout << "Creating rectangle with width=10, height=5\n";
    Rectangle r(10, 5);
    r.display();

    cout << "\nTrying to set width = -3\n";
    r.setWidth(-3);
    r.display();

    cout << "\nTrying to set height = 0\n";
    r.setHeight(0);
    r.display();

    cout << "\nSetting width = 7 and height = 4\n";
    r.setWidth(7);
    r.setHeight(4);
    r.display();

    return 0;
}