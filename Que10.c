#include<stdio.h>
void revstring(char *p);
int main()
{
    char string[20];
    printf("Enter the string : ");
    gets(string);
    revstring(string);
}
void revstring(char *p)
{
    int length=0;
    for(length=0;p[length]!='\0';length++);
    for(int i=0;i<(length/2);i++)
    {
        char temp;
        temp=p[i];
        p[i]=p[length-i-1];
        p[length-i-1]=temp;
    }
    printf("The reverse string is %s",p);
}