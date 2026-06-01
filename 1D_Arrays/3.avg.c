#include<stdio.h>
void main()
{
    int a[10],i,n,sum=0;
    float avg;
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum += a[i];
    }
    avg = sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>avg)
        printf("%d ",a[i]);
    }
}