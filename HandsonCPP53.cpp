#include <iostream>
using namespace std;

struct Date {
    int d, m, y;
};

Date createDate(int d, int m, int y) {
    if (d < 1 || d > 31 || m < 1 || m > 12 || y < 0) {
        cout << "Invalid date! Using default.\n";
        return {1, 1, 2000};
    }
    return {d, m, y};
}

int main() {
    Date dt = createDate(10, 5, 2024);

    cout << dt.d << "/" << dt.m << "/" << dt.y << endl;

    return 0;
}