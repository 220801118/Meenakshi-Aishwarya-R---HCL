#include <iostream>
#include <regex>
using namespace std;

int main() {
    string text = "this is the the test";

    regex pattern("\\b(\\w+)\\s+\\1\\b");

    if (regex_search(text, pattern))
        cout << "Repeated word found\n";
    else
        cout << "No repetition\n";

    return 0;
}