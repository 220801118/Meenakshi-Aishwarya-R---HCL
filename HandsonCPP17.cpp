#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    double salary;

public:
    void setEmployee(const string& n, double s) {
        name=n;
        salary=s;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    void setManager(const string& n, double s, const string& d) {
        setEmployee(n, s);
        department=d;
    }

    void display() const {
        cout << "Name       : " << name << endl;
        cout << "Salary     : " << salary << endl;
        cout << "Department : " << department << endl;
    }
};

int main() {
    Manager m;
    m.setManager("Aishwarya", 75000, "Engineering");

    cout << "--- Manager Details ---\n";
    m.display();

    return 0;
}