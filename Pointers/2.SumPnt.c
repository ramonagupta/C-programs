#include<stdio.h>
void main()
{
    int a,b,*p,*q;
    p=&a;
    q=&b;
    printf("enter two numbers");
    scanf("%d%d",p,q);
    printf("the sum of the numbers is %d",*p+*q);
}