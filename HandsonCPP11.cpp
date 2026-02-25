#include <iostream>
using namespace std;

long long factorialRecursive(int n) {
    if (n==0 || n==1)
        return 1;
    return n*factorialRecursive(n-1);
}

long long factorialIterative(int n) {
    long long result=1;
    for (int i=1; i<=n; i++) {
        result*=i;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n<0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }

    long long rec=factorialRecursive(n);
    long long itr=factorialIterative(n);

    cout << "Factorial using recursion  = " << rec << endl;
    cout << "Factorial using iteration  = " << itr << endl;

    return 0;
}