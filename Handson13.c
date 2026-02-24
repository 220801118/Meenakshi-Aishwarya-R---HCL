#include <stdio.h>
#include <ctype.h>   
int main()
{
    char str[300];
    int left=0,right=0;
    fgets(str,sizeof(str),stdin);
    while (str[right]!='\0')
    {
        right++;
    }
    right--;  
    while (left<right)
    {
        if (!isalnum((unsigned char)str[left]))
        {
            left++;
            continue;
        }
        if (!isalnum((unsigned char)str[right]))
        {
            right--;
            continue;
        }
        if (tolower((unsigned char)str[left]) != tolower((unsigned char)str[right]))
        {
            printf("Not a Palindrome\n");
            return 0;
        }
        left++;
        right--;
    }
    printf("Palindrome\n");
    return 0;
}