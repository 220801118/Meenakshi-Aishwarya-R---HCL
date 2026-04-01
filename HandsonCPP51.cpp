#include <iostream>
using namespace std;

struct Address {
    string city;
    int pincode;
};

struct Employee {
    int id;
    string name;
    Address addr;
};

int main() {
    Employee e;

    cout << "Enter ID, Name, City, Pincode: ";
    cin >> e.id >> e.name >> e.addr.city >> e.addr.pincode;

    cout << "\nEmployee Details:\n";
    cout << e.id << " " << e.name << " "
         << e.addr.city << " " << e.addr.pincode << endl;

    return 0;
}