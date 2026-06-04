#include<stdio.h>
void main()
{
    int a[10],i,n,c=0;
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        c++;
    }
    printf("%d",c);
}