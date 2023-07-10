#include<stdio.h>
void lengthstring(char *p);
int main()
{
    char string[20];
    printf("Enter the string : ");
    gets(string);
    lengthstring(string);
}
void lengthstring(char *p)
{
    int i;
    for(i=0;p[i]!='\0';i++);
    printf("The length of string is %d",i);
}