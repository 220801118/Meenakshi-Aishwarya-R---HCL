#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swapPointers(char **p1, char **p2) {
    char *temp=*p1;
    *p1=*p2;
    *p2=temp;
}

int main() {
    char *str1, *str2;

    str1=(char *)malloc(50 * sizeof(char));
    str2=(char *)malloc(50 * sizeof(char));

    if (str1==NULL || str2==NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    strcpy(str1, "Chennai");
    strcpy(str2, "Bangalore");
    printf("Before swapping:\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    swapPointers(&str1, &str2);

    printf("\nAfter swapping:\n");
    printf("str1=%s\n", str1);
    printf("str2=%s\n", str2);
    free(str1);
    free(str2);

    return 0;
}