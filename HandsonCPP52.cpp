#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
};

int main() {
    Student s = {1, "Ram"};

    Student* ptr = &s;

    cout << ptr->id << " " << ptr->name << endl;

    return 0;
}