#include <stdio.h>

float add(float a, float b) {
    return a+b;
}

float sub(float a, float b) {
    return a-b;
}

float mul(float a, float b) {
    return a*b;
}

float divide(float a, float b) {
    if (b==0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a/b;
}

int main() {

    float (*ops[4])(float, float) = { add, sub, mul, divide };

    int choice;
    float x, y, result;

    printf("Simple Calculator\n");
    printf("0. Add (+)\n");
    printf("1. Subtract (-)\n");
    printf("2. Multiply (*)\n");
    printf("3. Divide (/)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice<0 || choice>3) {
        printf("Invalid choice!\n");
        return 0;
    }

    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);

    result = ops[choice](x, y);

    printf("Result = %.2f\n", result);

    return 0;
}