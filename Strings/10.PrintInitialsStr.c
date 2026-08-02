#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int i;
    printf("enter string");
    gets(a);
    if(a[0]!=' ')
    printf("%c",a[0]);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]==' ')&&(a[i+1]!=' '))
        printf("%c",a[i+1]);
    }
}