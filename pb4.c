#include <stdio.h>

void copy(char *str1,char *str2)
{
   int i =0;
   while(str1[i] !='\0')
   {
    str2[i] = str1[i];
    i++;
   }
   str2[i]='\0';
   
    for(int i=0;i<str2[i] !='\0';i++)
    {
        printf("%c",str2[i]);
    }
}



int main()
{
    char str1[50];
    scanf("%s",&str1);
    char str2[50];
    copy(str1,str2);
    return 0;
}