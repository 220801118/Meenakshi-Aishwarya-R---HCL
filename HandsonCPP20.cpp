#include <iostream>
using namespace std;

class Device {
public:
    void showDevice() {
        cout << "This is a Device\n";
    }
};

class Phone : virtual public Device {
public:
    void call() {
        cout << "Making a call\n";
    }
};

class Camera : virtual public Device {
public:
    void click() {
        cout << "Taking a photo\n";
    }
};

class SmartPhone : public Phone, public Camera {
public:
    void features() {
        cout << "SmartPhone has phone and camera features\n";
    }
};

int main() {
    SmartPhone s;

    s.showDevice();  
    s.call();
    s.click();
    s.features();

    return 0;
}