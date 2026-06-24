#include <stdio.h>

int main()
{
    char str[100], longest[100];
    int i = 0, j = 0;
    int maxLen = 0, len = 0, start = 0;

    printf("Enter a sentence: ");
    gets(str);

    while(1)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            len++;
        }
        else
        {
            if(len > maxLen)
            {
                maxLen = len;
                start = i - len;
            }
            len = 0;
        }

        if(str[i] == '\0')
            break;

        i++;
    }

    for(i = start; i < start + maxLen; i++)
    {
        longest[j++] = str[i];
    }

    longest[j] = '\0';

    printf("Longest word = %s\n", longest);
    printf("Length = %d", maxLen);

    return 0;
}