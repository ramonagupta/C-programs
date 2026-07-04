#include<stdio.h>
void main()
{
    int a[10][10],i,j,n;
    printf("enter no.s of rows");
    scanf("%d",&n);
    printf("enter values");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<j)
            printf("%d",a[i][j]);
        }
    }
    printf("\n");
    //diagonal included
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<=j)
            printf("%d",a[i][j]);
        }
    }
    printf("\n");
    //optimised
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            printf("%d",a[i][j]);//i=0,i<n-1,i++,j=i+1,j<n;j++
        }
    }
}