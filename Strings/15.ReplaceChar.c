#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],ch,rc;
    int i;
    printf("enter string");
    gets(a);
    printf("what character do u want to replace");
    scanf("%c",&ch);
    printf("what do u want to replace it with?");
    scanf(" %c",&rc);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==ch)
        a[i]=rc;
    }
    puts(a);
}