#include <stdio.h>
int main()
{
    int n,m;
    int a[100], b[100], c[200];
    int i=0,j=0,k=0;
    scanf("%d %d", &n, &m);
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for (j=0;j<m;j++)
    {
        scanf("%d", &b[j]);
    }
    i = 0; 
    j = 0;
    while (i<n && j<m)
    {
        if (a[i]<=b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
        k++;
    }
    while (i<n)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while (j<m)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    printf("Merged array: ");
    for (i=0;i<n+m;i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
    return 0;
}