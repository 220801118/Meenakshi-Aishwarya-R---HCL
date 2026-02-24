#include <stdio.h>

int main() {
    int n, i, target;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target value to search: ");
    scanf("%d", &target);

    for (i=0; i<n; i++) {
        if (arr[i]==target) {
            printf("Target found at position %d (index %d)\n", i+1, i);
            return 0;  
        }
    }

    printf("Target not found in the array.\n");

    return 0;
}