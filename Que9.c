#include<stdio.h>
void revnum(int *p,int n);
int main()
{
    int size;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    int arr[size],a,b;
    printf("Enter the array numbers: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    revnum(arr,size);
}
void revnum(int *p,int n)
{
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ", *(p + i));
    }
}