#include <iostream>
#include <string>
using namespace std;

typedef struct {
    int roll;
    string name;
    float marks;
} Student;

int main() {
    Student s1;
    cout << "Enter roll number: ";
    cin >> s1.roll;
    cin.ignore();
    cout << "Enter name: ";
    getline(cin, s1.name);
    cout << "Enter marks: ";
    cin >> s1.marks;
    cout << "\n--- Student Details ---\n";
    cout << "Roll  : " << s1.roll << endl;
    cout << "Name  : " << s1.name << endl;
    cout << "Marks : " << s1.marks << endl;

    return 0;
}