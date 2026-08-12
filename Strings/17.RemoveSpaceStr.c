#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],ch,rc;
    int i,j,k;
    printf("enter string");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            for(k=i;a[k]!='\0';k++)
            {
                a[k]=a[k+1];//shifting to left
            }
        }
    }
    puts(a);
}