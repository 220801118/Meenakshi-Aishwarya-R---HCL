#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    void setData(int i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student* s = new Student[n];

    for (int i = 0; i < n; i++) {
        int id;
        string name;

        cout << "Enter ID and Name for student " << i + 1 << ": ";
        cin >> id >> name;

        s[i].setData(id, name);
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++) {
        s[i].display();
    }

    delete[] s;

    return 0;
}