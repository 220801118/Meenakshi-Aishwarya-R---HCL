#include <iostream>
#include <string>
using namespace std;

template <typename T>
string to_string_custom(T value) {
    return std::to_string(value);
}

template <>
string to_string_custom<string>(string value) {
    return "\"" + value + "\"";
}

int main() {
    cout << to_string_custom(10) << endl;
    cout << to_string_custom(3.14) << endl;
    cout << to_string_custom(string("Hello")) << endl;
}