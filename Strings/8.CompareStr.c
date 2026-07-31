#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],b[20];
    int i,flag;
    printf("enter string");
    gets(a);
    printf("enter another string");
    gets(b);
    if(strlen(a)==strlen(b))
    {
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]!=b[i])
            flag=1;
        }
        if(flag==0)
        printf("yes the strings are the same\n");
        else
        printf("no.\n");
    }
    else 
    printf("not same\n");
    //using function
    i=strcmp(a,b);
    if(i==0)
    printf("twins\n");
    else
    printf("nah");
}