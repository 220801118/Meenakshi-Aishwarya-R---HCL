#include <iostream>
using namespace std;

namespace Data {
    struct Student {
        int id;
        string name;
    };
}

int main() {
    Data::Student s = {1, "Ram"};

    cout << s.id << " " << s.name << endl;

    return 0;
}