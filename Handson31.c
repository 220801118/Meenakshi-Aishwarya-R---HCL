#include <stdio.h>

typedef struct {
    int roll;
    char name[30];
    float marks;
} Student;

int main() {
    Student s1, s2;  

    printf("Enter roll, name, marks for student 1: ");
    scanf("%d %s %f", &s1.roll, s1.name, &s1.marks);

    printf("Enter roll, name, marks for student 2: ");
    scanf("%d %s %f", &s2.roll, s2.name, &s2.marks);

    printf("\nStudent 1: Roll=%d, Name=%s, Marks=%.2f\n", s1.roll, s1.name, s1.marks);
    printf("Student 2: Roll=%d, Name=%s, Marks=%.2f\n", s2.roll, s2.name, s2.marks);

    return 0;
}