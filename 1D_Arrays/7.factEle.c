#include<stdio.h>
int fact (int x)
{
    int f=1,i;
    for(i=2;i<=x;i++)
    {
        f = f*i;
    }
    return f;
}
void main()
{
    int a[10],b[10],i,n;
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=fact(a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}