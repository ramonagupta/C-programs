#include<stdio.h>
void mm(int *, int, int *, int *);
void main()
{
    int a[20]={0},*p,n,i,max,min;
    printf("enter number of elements");
    scanf("%d",&n);
    p=a;
    printf("enter values");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    max=a[0];
    min=a[0];
    mm(a,n,&max,&min);
    printf("%d\n",max);
    printf("%d",min);
}
void mm(int *b, int x, int *p, int *q)
{
    int i;
    for(i=0;i<x;i++)
    {
        if(*(p+i)>*p)
        *p = *(p+i);
        if(*(p+i)<*q)
        *q = *(p+i);
    }
}