#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i=0,endindex=0,len=0,maxlen=0;
    printf("enter string");
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]!=' '&& a[i]!='\0')
        {
            len++;
        }
        else
        {
            if(len>maxlen)
            {
                maxlen=len;
                endindex= i-1;
            }
            len=0;
        }
        i++;
    }
    if(len>maxlen)//for first word
    {
        maxlen=len;
        endindex=i-1;
    }
    for(i=endindex-maxlen+1;i<=endindex;i++)
    {
        printf("%c",a[i]);
    }
}
