#include <iostream>
using namespace std;

char toUpper(char c) {
    return c & ~32; 
}

int main() {
    char ch = 'a';
    cout << toUpper(ch); 
}