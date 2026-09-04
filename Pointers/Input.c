#include<stdio.h>
void main()
{
    int a,*p;
    p=&a;
    printf("enter number");
    scanf("%d",p);
    printf("the number is %d",*p);
}
