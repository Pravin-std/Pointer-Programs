#include <stdio.h>


char isvowel(char *p)
{
   return ((*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u') ||
    (*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'));
    
}



int main()
{
    char str[100];
    fgets(str, 100, stdin);
    int count = 0;
    char *p = str;
    while(*p !='\0')
    {
        if(isvowel(p))
        {
            count++;
        }
        *p++;
    }
    printf("%d", count);
}