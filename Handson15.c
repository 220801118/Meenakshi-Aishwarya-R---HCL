#include <stdio.h>
int main()
{
    int n;
    float sum=0,avg;
    float arr[100];
    float *p;
    scanf("%d",&n);
    p = arr;  
    for (int i=0;i<n;i++)
    {
        scanf("%f",p);  
        p++;           
    }
    p=arr;  
    for (int i=0;i<n;i++)
    {
        sum=sum+*p;  
        p++;         
    }
    avg=sum/n;
    printf("Average = %.2f\n", avg);
    return 0;
}