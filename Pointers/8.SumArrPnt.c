#include<stdio.h>
void main()
{
    int a[20]={0},*p,n,i,sum=0;
    printf("enter number of elements");
    scanf("%d",&n);
    p=a;
    printf("enter values");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
        sum+=*(p+i);
    }
    printf("%d",sum);
}