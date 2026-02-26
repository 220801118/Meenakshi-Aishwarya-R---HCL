#include <iostream>
#include <string>
using namespace std;

class Device {
protected:
    string brand;

public:
    void setBrand(const string& b) {
        brand=b;
    }
};

class Mobile : public Device {
protected:
    int battery;

public:
    void setBattery(int b) {
        battery=b;
    }
};

class Smartphone : public Mobile {
private:
    string os;

public:
    void setOS(const string& o) {
        os=o;
    }

    void display() const {
        cout << "Brand   : " << brand << endl;
        cout << "Battery : " << battery << " mAh" << endl;
        cout << "OS      : " << os << endl;
    }
};

int main() {
    Smartphone phone;

    phone.setBrand("Samsung");
    phone.setBattery(5000);
    phone.setOS("Android");

    cout << "--- Smartphone Details ---\n";
    phone.display();

    return 0;
}