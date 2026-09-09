#include<stdio.h>
void sad(int *, int *, int *, int*);
void main()
{
    int a,b,sum=0,diff=0;
    printf("enter numbers");
    scanf("%d%d",&a,&b);
    sad(&a,&b,&sum,&diff);
    printf("%d\n%d",sum,diff);
}
void sad(int *x, int *y, int *add, int *sub)
{
    *add=*x+*y;
    *sub=*x-*y;
}