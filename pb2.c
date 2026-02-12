#include <stdio.h>

void max(int arr[],int size)
{
    int *p = arr;
    int max = *p;
    for(int j = 0;j<size;j++)
    {
        if(*p > max)
        {
            max = *p;
        }
        p++;
    }
    printf("%d",max);
}




int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i =0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    max(arr,size);
}