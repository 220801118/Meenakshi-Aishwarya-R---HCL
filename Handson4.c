#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    ((year%400==0)||(year%4==0 && year%100!=0))?printf("Leap Year\n"):printf("Not a Leap Year\n");
    return 0;
}