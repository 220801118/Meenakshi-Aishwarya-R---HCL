#include <iostream>
#include <regex>
using namespace std;

int main() {
    string ip = "192.168.1.1";

    regex pattern("^((25[0-5]|2[0-4][0-9]|1[0-9]{2}|[1-9]?[0-9])\\.){3}"
                  "(25[0-5]|2[0-4][0-9]|1[0-9]{2}|[1-9]?[0-9])$");

    if (regex_match(ip, pattern))
        cout << "Valid IP\n";
    else
        cout << "Invalid IP\n";

    return 0;
}