#include<stdio.h>
int main()
{
    int a,b;
    int sum,diff,prod,quot;
    scanf("%d %d", &a, &b);
    sum=a+b;
    diff=a-b;
    prod=a*b;
    printf("Sum=%d\n",sum);
    printf("Difference=%d\n",diff);
    printf("Product=%d\n",prod);
    if(b==0)
    {
        printf("Quotient=Division by zero is not allowed\n");
    }
    else
    {
        quot=a/b;
        printf("Quotient=%d\n",quot);
    }
    return 0;
}