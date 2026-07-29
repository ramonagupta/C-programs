#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i;
    printf("enter string");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>='A')&& (a[i]<='Z'))
        a[i]+=32;
        else if((a[i]>='a')&& (a[i]<='z'))
        a[i]-=32;
    }
    puts(a);
    //upper and lower case function
    strupr(a);
    puts(a);
    strlwr(a);
    puts(a);
}
