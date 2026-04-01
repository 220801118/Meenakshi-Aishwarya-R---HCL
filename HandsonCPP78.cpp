#include <iostream>
#include <type_traits>
using namespace std;

template <class T>
struct Vector2 {
    T x, y;

    static_assert(is_arithmetic<T>::value, 
                  "Vector2 only supports numeric types");


    Vector2(T x = 0, T y = 0) : x(x), y(y) {}


    Vector2 operator+(const Vector2& other) const {
        return Vector2(x + other.x, y + other.y);
    }

    // Subtraction
    Vector2 operator-(const Vector2& other) const {
        return Vector2(x - other.x, y - other.y);
    }

    // Scalar multiplication
    Vector2 operator*(T scalar) const {
        return Vector2(x * scalar, y * scalar);
    }

    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {

    Vector2<int> vi1(1, 2), vi2(3, 4);
    (vi1 + vi2).display(); 

    Vector2<float> vf1(1.5, 2.5), vf2(2.0, 3.0);
    (vf1 - vf2).display();

    Vector2<double> vd1(1.1, 2.2);
    (vd1 * 2.0).display();


    return 0;
}