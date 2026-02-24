#include <stdio.h>
int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int mul(int a, int b)
{
    return a*b;
}
int divide(int a, int b)
{
    if (b==0)
    {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a / b; 
}
int main()
{
    int a, b;
    char op;
    int (*operation)(int, int);
    scanf("%d %d", &a, &b);
    scanf(" %c", &op); 
    switch (op)
    {
        case '+':
            operation=add;
            break;
        case '-':
            operation=sub;
            break;
        case '*':
            operation=mul;
            break;
        case '/':
            operation=divide;
            break;
        default:
            printf("Invalid operator\n");
            return 0;
    }
    int result = operation(a, b);
    printf("Result = %d\n", result);
    return 0;
}