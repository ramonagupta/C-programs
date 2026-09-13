#include<stdio.h>
void sort(int *, int);
void main()
{
    int a[20]={0},*p,n,i;
    printf("enter number of elements");
    scanf("%d",&n);
    p=a;
    printf("enter values");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    sort(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
}
void sort(int *p, int x)
{
    int i,j,temp;
    for(i=0;i<x-1;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(*(p+i)>*(p+j))
            {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
}
