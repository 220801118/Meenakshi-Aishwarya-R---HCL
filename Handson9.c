#include <stdio.h>
#include <limits.h>
int main()
{
    int n,rev = 0;
    int digit;
    scanf("%d",&n);
    while (n!=0)
    {
        digit=n%10;        
        if (rev>INT_MAX/10 || rev<INT_MIN/10)
        {
            printf("Overflow occurred while reversing the number\n");
            return 0;
        }
        rev=rev*10+digit;  
        n=n/10;             
    }
    printf("Reversed number = %d\n", rev);
    return 0;
}