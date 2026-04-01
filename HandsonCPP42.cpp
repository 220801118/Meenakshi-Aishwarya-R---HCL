#include <iostream>
using namespace std;

class MyException {
public:
    const char* what() {
        return "Salary cannot be negative";
    }
};

int main() {
    double salary;
    cout << "Enter salary: ";
    cin >> salary;

    try {
        if (salary < 0)
            throw MyException();

        cout << "Valid salary\n";
    }
    catch (MyException e) {
        cout << e.what() << endl;
    }

    return 0;
}