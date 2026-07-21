#include<stdio.h>
void main()
{
    int a[10][10],i,j,n,m,cz=0,cn=0;
    printf("enter no.s of rows and columns");
    scanf("%d%d",&n,&m);
    printf("enter values");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
            cz++;
            else
            cn++;
        }
    }
    if(cz>cn)
    printf("sparse matrix");
    else
    printf("not sparse matrix");
}