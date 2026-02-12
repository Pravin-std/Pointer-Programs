#include <stdio.h>
#include <string.h>
void space(char *p)
{
    int len = *p + strlen(p)-1;
    int count = 1;
    int i = 0;
    while(*p !='\0')
    {
        if(*p==' ')
        {
            count++;
        }
        p++;
    }
    printf("%d",count);
}

int main()
{
    char str[100];
    fgets(str, 100, stdin);
    space(str);
    return 0;
}