#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int id;
    char name[20];
};

int main() {
    Student s[2] = {{1, "Ram"}, {2, "Sam"}};

    ofstream fout("stu.dat", ios::binary);
    fout.write((char*)s, sizeof(s));
    fout.close();

    Student s2[2];
    ifstream fin("stu.dat", ios::binary);
    fin.read((char*)s2, sizeof(s2));
    fin.close();

    cout << "Data from file:\n";
    for (int i = 0; i < 2; i++) {
        cout << s2[i].id << " " << s2[i].name << endl;
    }

    return 0;
}