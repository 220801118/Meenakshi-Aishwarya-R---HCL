#include <iostream>
#include <regex>
using namespace std;

int main() {
    string s = "12345";

    if (regex_match(s, regex("^[0-9]+$")))
        cout << "Only digits\n";
    else
        cout << "Invalid\n";

    return 0;
}