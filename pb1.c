#include <stdio.h>

void swap(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After swap %d %d",*a,*b);
}





int main()
{
    int num1, num2;
    scanf("%d %d",&num1, &num2);
    printf("Before swap : %d %d",num1, num2);
    swap(&num1, &num2);
}