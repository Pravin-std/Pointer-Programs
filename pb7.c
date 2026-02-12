#include <stdio.h>
#include <string.h>

void palindrome(char *str)
{
    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end)
    {
        if (*start != *end)
        {
            printf("Not Palindrome");
            return;
        }

        start++;
        end--;
    }

    printf("Palindrome");
}

int main()
{
    char str[50];
    scanf("%s", str);
    palindrome(str);
    return 0;
}
