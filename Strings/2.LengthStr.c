#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i,c=0;
    printf("enter string");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    printf("%d\n",c);
    printf("%d",strlen(a));//using function
}