#include <stdio.h>
int fib(int n)
{
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    int N, i;
    scanf("%d",&N);
    if (N<=0)
    {
        printf("Please enter a positive number\n");
    }
    else
    {
        for (i=0;i<N;i++)
        {
            printf("%d ",fib(i));
        }
        printf("\n");
    }
    return 0;
}
