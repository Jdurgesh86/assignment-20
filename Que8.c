#include<stdio.h>
void sumnum(int *p,int n);
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
    sumnum(arr,size);
}
void sumnum(int *p,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+p[i];
    }
    printf("sum of all elements in array is %d",sum);
}