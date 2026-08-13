#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    int i,j,flag=0,c=0;
    printf("enter string");
    gets(a);
    printf("enter substring");
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
        j=0;
        while((a[i+j]==b[j])&&(b[j]!='\0'))
        {
            j++;
        }
        if(b[j]=='\0')
        {
            flag=1;
            c++;
        }
    }
    if(flag==1)
    printf("substring present %d times",c);
}
