#include <stdio.h>

void found(int *p, int size,int ele)
{
   
    for(int i = 0;i<size;i++)
    {
        if(*(p+i)==ele)
        {
            printf("%d",i+1);
            return;
        }
        
    }
    printf("-1");
}
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];

    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ele;
    scanf("%d",&ele);

    found(arr,size,ele);
}