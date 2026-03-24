#include <iostream>
using namespace std;

class WalletAuditor;

class Wallet {
private:
    double balance;

public:
    Wallet(double b = 0) : balance(b) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Invalid deposit amount\n";
        }
    }


    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            cout << "Invalid withdrawal\n";
        }
    }

    friend class WalletAuditor;
};


class WalletAuditor {
public:
    void report(const Wallet& w) {

        cout << "Wallet balance: " << w.balance << endl;
    }
};

class Hacker {
public:
    void tryAccess(const Wallet& w) {

        cout << "Access denied! Cannot read private balance.\n";
    }
};

int main() {
    Wallet w(1000);

    w.deposit(500);
    w.withdraw(200);

    WalletAuditor auditor;
    auditor.report(w); 

    Hacker h;
    h.tryAccess(w);    

    return 0;
}