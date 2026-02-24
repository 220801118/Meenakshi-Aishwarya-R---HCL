#include <stdio.h>
int main()
{
    char str[200];
    char ch;
    int i=0,j=0;
    fgets(str,sizeof(str),stdin);
    scanf(" %c",&ch);   
    while (str[i]!='\0')
    {
        if (str[i]!=ch && str[i]!='\n')
        {
            str[j]=str[i];
            j++;
        }
        i++;
    }
    str[j]='\0';
    printf("Modified string: %s\n", str);
    return 0;
}