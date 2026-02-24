#include<stdio.h>
int main()
{
    char ch;
    scanf(" %c",&ch);
    if(ch>='0' && ch<='9')
    {
        printf("Digit\n");
    }
    else if ((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
    {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
    }
    else
    {
        printf("Special Symbol\n");
    }
    return 0;
}