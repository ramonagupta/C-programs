#include<stdio.h>
void main()
{
    int a[10][10],i,j,n,m,flag=0;
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
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i][j]!=-a[j][i])
            flag=1;
        }
    }
    if(flag == 0)
    printf("skew");
    else
    printf("not skew");
}