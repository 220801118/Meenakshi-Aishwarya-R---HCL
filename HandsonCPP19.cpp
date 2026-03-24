#include <iostream>
using namespace std;

class Teacher {
public:
    void work() {
        cout << "Teaching students\n";
    }
};

class Researcher {
public:
    void work() {
        cout << "Doing research\n";
    }
};

class Professor : public Teacher, public Researcher {
public:
 
    void work() {
        cout << "Professor teaches and does research\n";
    }
};

int main() {
    Professor p;

    p.work();

    p.Teacher::work();
    p.Researcher::work();

    return 0;
}