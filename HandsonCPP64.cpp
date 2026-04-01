#include <iostream>
#include <regex>
using namespace std;

int main() {
    string url = "https://example.com";

    regex pattern("^(http|https)://[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}(/.*)?$");

    if (regex_match(url, pattern))
        cout << "Valid URL\n";
    else
        cout << "Invalid URL\n";

    return 0;
}