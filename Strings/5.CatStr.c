#include<stdio.h>
#include<string.h>
void main()
{
    char a[30],b[20];
    int i,len;
    printf("enter string");
    gets(a);
    printf("enter string two");
    gets(b);
    len=strlen(b);
    for(i=0;b[i]!='\0';i++)
    {
        a[i+len]=b[i];
    }
    a[i+len]='\0';//character by character
    puts(a);
    //using function
    strcat(a,b);
    puts(a);
}