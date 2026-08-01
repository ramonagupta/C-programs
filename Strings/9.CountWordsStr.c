#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int i,c;
    printf("enter string");
    gets(a);
    if(a[0]==' ')//space at start
    c=0;
    else
    c=1;
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]==' ')&&(a[i+1]!=' ')&&(a[i+1]!='\0'))//space at end
        c++;
    }
    printf("%d",c);
}