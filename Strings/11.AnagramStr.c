#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],b[20];
    int i,j,temp,check;
    printf("enter string");
    gets(a);
    printf("enter second string");
    gets(b);
    for(i=0;a[i+1]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;b[i+1]!='\0';i++)
    {
        for(j=i+1;b[j]!='\0';j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    check=strcmp(a,b);
    if(check==0)
    printf("yes anagram");
    else
    printf("not anagram");
}