#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("You enter the values as a= %d and b= %d",a,b);
    swap(&a,&b);
    printf("\nvalues after swap a= %d and b= %d",a,b);
}

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}