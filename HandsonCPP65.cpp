#include <iostream>
#include <regex>
using namespace std;

int main() {
    string text = "Loving #Cplusplus and #AI #coding";

    regex pattern("#\\w+");
    smatch match;

    while (regex_search(text, match, pattern)) {
        cout << match.str() << endl;
        text = match.suffix();
    }

    return 0;
}