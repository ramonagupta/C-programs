#include<stdio.h>
void main()
{
    int a[10],i,n,sum=0;
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum += a[i];
    }
    printf("%d",sum);
}