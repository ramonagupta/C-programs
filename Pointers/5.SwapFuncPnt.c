#include<stdio.h>
void swap(int *, int *);
void main()
{
    int a,b;
    printf("enter numbers");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
}
void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}