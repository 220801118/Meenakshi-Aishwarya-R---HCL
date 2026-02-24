#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void updateMarksByPointer(struct Student *s, float newMarks) {
    s->marks=newMarks; 
}

void updateMarksByValue(struct Student s, float newMarks) {
    s.marks=newMarks;   
}

int main() {
    struct Student s1={101, "Aishwarya", 78.5};

    printf("Before update:\n");
    printf("Roll: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    updateMarksByValue(s1, 85.0);

    printf("\nAfter update by VALUE (no change expected):\n");
    printf("Roll: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    updateMarksByPointer(&s1, 92.0);

    printf("\nAfter update by POINTER (changed):\n");
    printf("Roll: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}