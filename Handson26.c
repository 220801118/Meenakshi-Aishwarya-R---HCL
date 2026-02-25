#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    int i, topperIndex=0;

    for (i=0; i<5; i++) {
        printf("\nEnter details of student %d\n", i+1);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %49[^\n]", s[i].name);   

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    for (i=1; i<5; i++) {
        if (s[i].marks>s[topperIndex].marks) {
            topperIndex=i;
        }
    }

    printf("\n===== Topper Details =====\n");
    printf("Roll Number : %d\n", s[topperIndex].roll);
    printf("Name        : %s\n", s[topperIndex].name);
    printf("Marks       : %.2f\n", s[topperIndex].marks);

    return 0;
}