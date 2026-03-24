#include <iostream>
#include <stdexcept>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:

    Rectangle(double w, double h) {
        setWidth(w);
        setHeight(h);
    }

    // Setter for width
    void setWidth(double w) {
        if (w <= 0)
            throw invalid_argument("Width must be > 0");
        width = w;
    }

    // Setter for height
    void setHeight(double h) {
        if (h <= 0)
            throw invalid_argument("Height must be > 0");
        height = h;
    }

    double area() const {
        return width * height;
    }
};

int main() {
    try {
        Rectangle r(5, 10);
        cout << "Area: " << r.area() << endl;

        r.setWidth(-3);  
    }
    catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

  

    return 0;
}