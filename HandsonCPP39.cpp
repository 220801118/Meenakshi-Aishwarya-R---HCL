#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    try {
        if (n < 0)
            throw n;

        cout << "Valid number\n";
    }
    catch (int x) {
        cout << "Error: Negative number (" << x << ")\n";
    }

    return 0;
}