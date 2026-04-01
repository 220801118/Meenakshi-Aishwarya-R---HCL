#include <iostream>
#include <regex>
using namespace std;

int main() {
    string s = "APPLE";

    if (regex_match(s, regex("apple", regex_constants::icase)))
        cout << "Matched\n";
    else
        cout << "Not matched\n";

    return 0;
}