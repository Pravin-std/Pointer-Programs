#include <stdio.h>

void reverse(int *p,int size)
{
    int *start = p;
    int *end = p+size-1;
    while(start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    for(int i=0;i<size;i++)
    {
        printf("%d",p[i]);
    }

}

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,size);
    return 0;
}