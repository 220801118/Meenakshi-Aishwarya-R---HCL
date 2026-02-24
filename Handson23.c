#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sortCities(char **cities, int n) {
    char *temp;
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (strcmp(cities[i], cities[j])>0) {
                temp=cities[i];
                cities[i]=cities[j];
                cities[j]=temp;
            }
        }
    }
}

void freeCities(char **cities, int n) {
    for (int i=0; i<n; i++) {
        free(cities[i]);   
    }
    free(cities);          
}

int main() {
    int n;
    char buffer[100];
    printf("Enter number of cities: ");
    scanf("%d", &n);
    char **cities=(char **)malloc(n * sizeof(char *));
    if (cities==NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i=0; i<n; i++) {
        printf("Enter city %d: ", i+1);
        scanf("%s", buffer);  
        cities[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
        if (cities[i]==NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
        strcpy(cities[i], buffer); 
    }
    sortCities(cities, n);
    printf("\nCities in alphabetical order:\n");
    for (int i=0; i<n; i++) {
        printf("%s\n", cities[i]);
    }
    freeCities(cities, n);
    return 0;
}