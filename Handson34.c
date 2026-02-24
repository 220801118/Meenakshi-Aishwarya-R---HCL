#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

struct DataStruct {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data u;
    struct DataStruct s;

    printf("Size of union Data      = %zu bytes\n", sizeof(u));
    printf("Size of struct DataStruct = %zu bytes\n\n", sizeof(s));

    printf("=== Using Union ===\n");
    u.i=10;
    printf("u.i = %d\n", u.i);

    u.f=3.14f;
    printf("u.f = %.2f\n", u.f);

    strcpy(u.str, "Hello");
    printf("u.str = %s\n", u.str);

    printf("\n=== Using Structure ===\n");
    s.i=10;
    s.f=3.14f;
    strcpy(s.str, "Hello");

    printf("s.i = %d\n", s.i);
    printf("s.f = %.2f\n", s.f);
    printf("s.str = %s\n", s.str);

    return 0;
}