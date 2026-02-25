#include <iostream>
using namespace std;

int main() {
    char str[100];
    int i=0, j=0, length=0;
    int isPalindrome=1;

    cout << "Enter a string: ";
    cin >> str;

    while (str[length]!='\0') {
        length++;
    }

    i=0;
    j=length-1;

    while (i<j) {
        if (str[i]!=str[j]) {
            isPalindrome=0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is NOT a palindrome." << endl;

    return 0;
}