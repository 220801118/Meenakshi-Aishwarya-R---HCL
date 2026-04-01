#include <iostream>
using namespace std;

int checksum(int arr[], int n) {
    int result = 0;

    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }

    return result;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = 4;

    cout << "Checksum: " << checksum(arr, n) << endl;

    return 0;
}