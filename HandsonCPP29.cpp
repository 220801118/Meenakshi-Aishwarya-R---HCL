#include <iostream>
#include <cmath>
using namespace std;


class MathOps {
public:
    static int pow(int base, int exp) {
        cout << "Using int pow()\n";
        int result = 1;
        for (int i = 0; i < exp; i++)
            result *= base;
        return result;
    }

    static double pow(double base, double exp) {
        cout << "Using double pow()\n";
        return std::pow(base, exp);
    }
};


class Function {
public:
    virtual double evaluate(double x) {
        return x;
    }

    virtual ~Function() {}
};

class Square : public Function {
public:
    double evaluate(double x) override {
        return x * x;
    }
};

class Cube : public Function {
public:
    double evaluate(double x) override {
        return x * x * x;
    }
};

int main() {

    cout << "Compile-time polymorphism:\n";
    cout << MathOps::pow(2, 3) << endl;       
    cout << MathOps::pow(2.5, 2.0) << endl;   


    cout << "\nRuntime polymorphism:\n";
    Function* f;

    Square s;
    Cube c;

    f = &s;
    cout << "Square: " << f->evaluate(3) << endl;

    f = &c;
    cout << "Cube: " << f->evaluate(3) << endl;

    return 0;
}