#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],b[20],c[20];
    int i;
    printf("enter string");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';//important as it is being used as character by character
    puts(b);
    //using function
    strcpy(c,a);
    puts(c);
}
    