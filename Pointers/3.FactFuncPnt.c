#include<stdio.h>
int fact(int *);
void main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);
    printf("%d",fact(&a));
}
int fact(int *p)
{
    int f=1,i;
    for(i=2;i<=*p;i++)
    {
        f=f*i;
    }
    return f;
}