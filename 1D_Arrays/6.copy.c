#include<stdio.h>
void main()
{
    int a[10],b[10],i,n;
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}