#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int flag=0,l,r,len;
    printf("enter string");
    gets(a);
    len = strlen(a);
    for(l=0,r=len-1;l<len/2;l++,r--)
    {
        if(a[l]!=a[r])
        flag=1;
    }
    if(flag==0)
    printf("palindrome");
    else
    printf("not palindrome");
}