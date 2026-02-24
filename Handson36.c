#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int n) {
    int i, j, temp;
    for (i=0; i<n-1; i++) {
        for (j=0; j<n-i-1; j++) {
            if (arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main() {
    FILE *fin, *fout;
    int arr[1000];
    int n=0;

    fin=fopen("input.txt", "r");
    if (fin==NULL) {
        printf("Cannot open input file!\n");
        return 1;
    }

    while (fscanf(fin, "%d", &arr[n])==1) {
        n++;
    }

    fclose(fin);

    sort(arr, n);

    fout=fopen("output.txt", "w");
    if (fout==NULL) {
        printf("Cannot open output file!\n");
        return 1;
    }

    for (int i=0; i<n; i++) {
        fprintf(fout, "%d ", arr[i]);
    }

    fclose(fout);

    printf("Sorting complete. Check output.txt for results.\n");
    return 0;
}