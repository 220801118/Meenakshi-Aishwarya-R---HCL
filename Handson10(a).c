#include <stdio.h>
int main()
{
    int n,i;
    int isPrime=1;  
    scanf("%d",&n);
    if (n<=1)
    {
        isPrime=0;
    }
    else
    {
        for (i=2;i<=n-1;i++)
        {
            if (n%i==0)
            {
                isPrime=0;  
                break;
            }
        }
    }
    if (isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");
    return 0;
}