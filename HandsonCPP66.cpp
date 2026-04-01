#include <iostream>
#include <regex>
using namespace std;

int main() {
    string num = "1234567890";

    string formatted = regex_replace(num,
        regex("(\\d{3})(\\d{3})(\\d{4})"),
        "($1) $2-$3");

    cout << formatted << endl;

    return 0;
}