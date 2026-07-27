#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],b[20];
    int i,l,r,len,temp;
    printf("enter string");
    gets(a);
    printf("enter string two");
    gets(b);
    len=strlen(a);
    //reversing itself
    for(l=0,r=len-1;l<len/2;l++,r--)
    {
        temp=a[l];
        a[l]=a[r];
        a[r]=temp;
    }
    puts(a);
    //using function
    strrev(b);
    puts(b);
    //storing in new string
    for(i=0;a[i]!='\0';i++)
    {
        b[len-1]=a[i];
        len--;
    }
    b[i]='\0';
    puts(b);
}
