#include <stdio.h>


void sum(int p[], int size)
{
    int total = 0;
    for(int i= 0;i<size;i++)
    {
        total +=*(p+i);
    }
    printf("%d",total);
}





int main()
{
    int size;;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *p = arr;
    sum(p,size);
}