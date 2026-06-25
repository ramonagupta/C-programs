#include<stdio.h>
void main()
{
    int a[10][10],i,j,n,m,sum=0;
    printf("enter no. of rows and columns");
    scanf("%d%d",&n,&m);
    printf("enter values");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    }
    printf("%d",sum);
}