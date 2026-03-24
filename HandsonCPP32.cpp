#include <iostream>
using namespace std;

double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero\n";
        return 0;
    }
    return a / b;
}

int main() {
    int choice;
    double x, y;

    double (*operation)(double, double) = nullptr;

    cout << "Menu:\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    switch (choice) {
        case 1: operation = add; break;
        case 2: operation = sub; break;
        case 3: operation = mul; break;
        case 4: operation = divide; break;
        default:
            cout << "Invalid choice\n";
            return 0;
    }

    cout << "Result: " << operation(x, y) << endl;

    return 0;
}