#include<stdio.h>
void maxnum(int *p, int a,int b);
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
    printf("Enter two numbers from which you have to find the max num");
    scanf("%d%d",&a,&b);
    maxnum(arr,a,b);
}
void maxnum(int *p,int a,int b)
{
    int max=0;
    for(int i=a;p[i]!=b;i++)
    {
        if(p[i]>max)
        {
            max=p[i];
        }
    }
    printf("the maximum number is %d",max);
}