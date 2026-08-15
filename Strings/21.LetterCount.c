#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    int i,c=0;
    printf("enter string");
    fgets(a,50,stdin);
    a[strcspn(a,"\n")]='\0';
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
            c++;
        }
        else
        {
            if(c>0)
            {
                printf("%d ",c);
                c=0;
            }
        }
    }
    printf("%d",c);
}