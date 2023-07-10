#include<stdio.h>
#include<string.h>
void swap(char *a,char *b);
int main()
{
    char str1[20],str2[20];
    printf("Enter two strings :");
    scanf("%s%s",str1,str2);
    swap(str1,str2);
    printf("After swap %s and %s",str1,str2);
}

void swap(char *str1, char *str2)
{
    char temp[20];
    for(int i=0;i<strlen(str1);i++)
    {
        temp[i]=str1[i];
    }
    for(int i=0;i<strlen(str2);i++)
    {
        str1[i]=str2[i];
    }
    for(int i=0;i<strlen(str1);i++)
    {
        str2[i]=temp[i];
    }
}