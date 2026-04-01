#include <iostream>
using namespace std;

struct Flags {
    unsigned int isAdmin : 1;
    unsigned int isActive : 1;
    unsigned int isVerified : 1;
};

int main() {
    Flags f;

    f.isAdmin = 1;
    f.isActive = 0;
    f.isVerified = 1;

    cout << "Admin: " << f.isAdmin << endl;
    cout << "Active: " << f.isActive << endl;
    cout << "Verified: " << f.isVerified << endl;

    return 0;
}