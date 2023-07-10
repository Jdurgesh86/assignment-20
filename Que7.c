#include<stdio.h>
void cvcal(char *p);
int main()
{
    char string[20];
    printf("Enter the string : ");
    gets(string);
    cvcal(string);
}
void cvcal(char *p)
{
    int i,vcount=0,ccount=0;
    for(i=0;p[i]!='\0';i++);
    for(int j=0;j<i;j++)
    {
        if(p[j]=='a'||p[j]=='A'||p[j]=='e'||p[j]=='E'||p[j]=='i'||p[j]=='I'||p[j]=='o'||p[j]=='O'||p[j]=='u'||p[j]=='U')
            vcount++;
        else   
            ccount++;
    }
    printf("The number of vowels in the string is %d and consolants is %d",vcount,ccount);
}