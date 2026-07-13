#include<stdio.h>
void main()
{
    int a[10][10],i,j,n,m,flag=0;
    printf("enter no.s of rows and columns");
    scanf("%d%d",&n,&m);
    printf("enter values");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(a[i][j]!=a[j][i])
            flag=1;
        }
    }
    if(flag == 0)
    printf("symmetric");
    else
    printf("not symmetric");
}