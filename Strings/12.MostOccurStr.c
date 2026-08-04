#include<stdio.h>
#include<string.h>
void main()
{
    char a[300];
    int i,c=0,j,max=0,copy,counter=0;
    printf("enter string");
    gets(a);
    for(i=0;a[i+1]!='\0';i++)
    {
        for(j=i;a[j]!='\0';j++)//char included with j=i
        {
            if(a[i]==a[j])
            c++;
        }
        if(c>max)
        {
            max=c;
            copy=i;
            counter=c;
        }
        c=0;//RESET COUNTER FOR NEW CHAR
    }
    printf("the most occuring character is %c and it occurs %d",a[copy],counter);
}