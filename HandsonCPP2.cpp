#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int i=0, length=0;

    cout << "Enter a string: ";
    getline(cin, str);

    while (length<str.size() && str[length]!='\n') {
        length++;
    }

    cout << "Length of string = " << length << endl;

    for (i=0; i<length; i++) {
        if (str[i]>='a' && str[i]<='z') {
            str[i]=str[i]-32;
        }
    }

    cout << "String in uppercase: " << str << endl;

    return 0;
}