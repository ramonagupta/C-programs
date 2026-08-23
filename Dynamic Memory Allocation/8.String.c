#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,c=0;
    char *p;
    p=(char*)malloc(100*sizeof(char));
    printf("enter string");
    fgets(p,100,stdin);
    for(i=0;*(p+i)!='\0';i++)
    {
        c++;
    }
    printf("string length is %d",c);
    free(p);
}