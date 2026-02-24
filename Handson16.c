#include <stdio.h>
int findSubstring(const char *text, const char *pattern)
{
    int i,j;
    for (i=0;text[i]!='\0';i++)
    {
        j=0;
        while (pattern[j]!='\0' && text[i + j]!='\0' &&
               text[i + j]==pattern[j])
        {
            j++;
        }
        if (pattern[j]=='\0')
        {
            return i;  
        }
    }
    return -1; 
}
int main()
{
    char text[200], pattern[100];
    fgets(text, sizeof(text), stdin);
    fgets(pattern, sizeof(pattern), stdin);
    for (int i=0; text[i]!='\0';i++)
        if (text[i]=='\n') { text[i]='\0'; break; }
    for (int i=0; pattern[i]!='\0'; i++)
        if (pattern[i]=='\n') { pattern[i]='\0'; break; }
    int index=findSubstring(text, pattern);
    if (index!=-1)
        printf("Substring found at index %d\n", index);
    else
        printf("Substring not found\n");
    return 0;
}