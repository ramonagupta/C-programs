#include<stdio.h>
int sod(int *);
void main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);
    printf("sum of digit is %d",sod(&a));
}
int sod(int *p)
{
    int sum=0,i;
    for(i=1;i<*p;i++)
    {
        sum+=*p%10;
        *p=*p/10;
    }
    return sum;
}