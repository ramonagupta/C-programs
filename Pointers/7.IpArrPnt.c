#include<stdio.h>
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
    //method one
    for(i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
    printf("\n");
    //method two
    for(i=0;i<n;i++)
    {
        printf("%d",*p);
        p++;
    }
}