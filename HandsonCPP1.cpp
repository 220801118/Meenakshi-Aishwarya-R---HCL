#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;

    cout << "Enter password: ";
    cin >> password;

    if (password.length()>8) {
        cout << "Password length is greater than 8 characters." << endl;
    } else {
        cout << "Password length is NOT greater than 8 characters." << endl;
    }

    return 0;
}