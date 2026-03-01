#include <stdio.h>

int findSubstring(char text[], char pattern[])
{
    int i, j;

    for (i = 0; text[i] != '\0'; i++)
    {
        for (j = 0; pattern[j] != '\0'; j++)
        {
            if (text[i + j] != pattern[j])
                break;
        }

        if (pattern[j] == '\0')   // full pattern matched
            return i;
    }

    return -1;
}

int main()
{
    char text[200], pattern[100];

    printf("Enter text: ");
    scanf("%s", text);

    printf("Enter pattern: ");
    scanf("%s", pattern);

    int index = findSubstring(text, pattern);

    if (index != -1)
        printf("Substring found at index %d\n", index);
    else
        printf("Substring not found\n");

    return 0;
}