#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    int arr[100];
    int foundDuplicate=0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Duplicate elements are: ";

    for (i=0; i<n; i++) {
        int alreadyPrinted=0;

        for (j=0; j<i; j++) {
            if (arr[i]==arr[j]) {
                alreadyPrinted=1;
                break;
            }
        }

        if (alreadyPrinted)
            continue;

        int count=0;
        for (j=0; j<n; j++) {
            if (arr[i]==arr[j]) {
                count++;
            }
        }

        if (count>1) {
            cout << arr[i] << " ";
            foundDuplicate=1;
        }
    }

    if (!foundDuplicate) {
        cout << "None";
    }

    cout << endl;
    return 0;
}