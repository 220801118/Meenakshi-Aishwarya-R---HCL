#include <iostream>
#include <fstream>
using namespace std;

class Employee {
public:
    int id;
    char name[20];
    float salary;

    void input() {
        cout << "Enter ID, Name, Salary: ";
        cin >> id >> name >> salary;
    }

    void display() {
        cout << "ID: " << id 
             << ", Name: " << name 
             << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee e;

    ofstream fout("emp.dat", ios::binary);
    e.input();
    fout.write((char*)&e, sizeof(e));
    fout.close();

    ifstream fin("emp.dat", ios::binary);
    Employee e2;

    cout << "\nEmployee Data from File:\n";
    fin.read((char*)&e2, sizeof(e2));
    e2.display();

    fin.close();

    return 0;
}