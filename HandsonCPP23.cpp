#include <iostream>
#include <vector>
using namespace std;

void printDiag(int x) {
    cout << "Integer: " << x << endl;
}

void printDiag(double x) {
    cout << "Double: " << x << endl;
}

void printDiag(string s) {
    cout << "String: " << s << endl;
}

void printDiag(vector<int> v) {
    cout << "Vector<int>: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}


template <typename T>
void printDiag(T x) {
    cout << "Generic: " << x << endl;
}

int main() {
    printDiag(10);       
    printDiag(3.14);         
    printDiag("Hello");       
    printDiag(string("Hi"));   
    printDiag(vector<int>{1,2,3}); 

    return 0;
}