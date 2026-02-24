#include <stdio.h>
int main()
{
    int N,i;
    int a=0,b=1,c;
    scanf("%d",&N);
    if (N<=0)
    {
        printf("Please enter a positive number\n");
    }
    else if (N==1)
    {
        printf("0\n");
    }
    else
    {
        printf("0 1 ");
        for (i = 3; i <= N; i++)
        {
            c=a+b;
            printf("%d ",c);
            a=b;
            b=c;
        }
        printf("\n");
    }
    return 0;
}