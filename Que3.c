//Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void sort(int *ptr,int size);
int main()
{
    int size;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    int arr[size];
    int *ptr=arr;
    printf("Enter the %d values :",size);
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    sort(ptr,size);
    printf("The sorted Array is \n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}

void sort(int *ptr,int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i;j<size;j++)
        {
            if(ptr[i]>ptr[j])
            {
                int temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
}