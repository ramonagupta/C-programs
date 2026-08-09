#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],ch,rc;
    int i,j,k;
    printf("enter string");
    gets(a);
    for(i=0;a[i+1]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;a[k]!='\0';k++)
                {
                    a[k]=a[k+1];//shifting left
                }
            }
        }
    }
    puts(a);
}