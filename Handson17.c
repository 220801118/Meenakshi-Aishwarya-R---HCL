#include <stdio.h>
void safe_strcpy(char *dest, const char *src, int destSize)
{
    int i=0;
    while (src[i]!='\0' && i<destSize-1)
    {
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
}
int main()
{
    char src[100];
    char dest[10];   
    fgets(src, sizeof(src), stdin);
    for (int i=0;src[i]!='\0';i++)
    {
        if (src[i]=='\n')
        {
            src[i]='\0';
            break;
        }
    }
    safe_strcpy(dest, src, sizeof(dest));
    printf("Source: %s\n", src);
    printf("Destination (safely copied): %s\n", dest);
    return 0;
}