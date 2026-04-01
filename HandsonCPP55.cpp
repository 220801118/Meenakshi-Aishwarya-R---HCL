#include <iostream>
using namespace std;

enum Role { USER = 1, ADMIN = 2 };

struct Permissions {
    unsigned int role : 2; 
    unsigned int read : 1;
    unsigned int write : 1;
};

int main() {
    Permissions p;

    p.role = ADMIN;
    p.read = 1;
    p.write = 0;

    cout << "Role: " << p.role << endl;
    cout << "Read: " << p.read << endl;
    cout << "Write: " << p.write << endl;

    return 0;
}