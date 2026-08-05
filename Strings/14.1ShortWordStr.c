#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    int i=0,endindex=0,len=0,minlen=60;
    printf("enter string");
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]!=' ' && a[i]!='\0')
        {
            len++;
        }
        else
        {
            if(len<minlen)
            {
                minlen = len;
                endindex=i-1;
            }
            len=0;//resetting length for next word
        }
        i++;
    }
    if(len<minlen)//for first word
    {
        minlen = len;
        endindex = i-1;
    }
    for(i=endindex-minlen+1;i<=endindex;i++)//finding first index of first letter of word
    {
        printf("%c",a[i]);
    }
}