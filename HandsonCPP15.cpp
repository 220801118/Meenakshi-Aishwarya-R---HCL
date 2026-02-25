#include <iostream>
#include <string>
using namespace std;

class CryptoBox {
private:
    string privateKey;
    int keyVersion;

public:
    CryptoBox(string key, int version)
        : privateKey(key), keyVersion(version) {}

    friend void dumpForAudit(const CryptoBox& box);
};

void dumpForAudit(const CryptoBox& box) {
    cout << "=== Audit Dump ===\n";
    cout << "Private Key : " << box.privateKey << endl;  // allowed
    cout << "Key Version : " << box.keyVersion << endl;  // allowed
}

void regularFunction(const CryptoBox& box) {
    cout << "Regular function cannot access private members directly.\n";
}

int main() {
    CryptoBox cb("SECRET-KEY-12345", 1);
    dumpForAudit(cb);
    regularFunction(cb);
    return 0;
}