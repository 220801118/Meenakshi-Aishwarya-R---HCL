#include <iostream>
using namespace std;

class Meters {
public:
    double value;
    explicit Meters(double v) : value(v) {}
};

class Seconds {
public:
    double value;
    explicit Seconds(double v) : value(v) {}
};

class MetersPerSecond {
public:
    double value;
    explicit MetersPerSecond(double v) : value(v) {}
};

MetersPerSecond operator/(const Meters& m, const Seconds& s) {
    return MetersPerSecond(m.value / s.value);
}

int main() {
    Meters distance(100);    
    Seconds time(20);        

    MetersPerSecond speed = distance / time;

    cout << "Speed: " << speed.value << " m/s" << endl;

    return 0;
}