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
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
                if(a[i][i]==0)//diagonal elements must  be equal
                flag=1;
            }
            else if(a[i][j]!=0)
            flag = 1;
        }
    }
    if(flag==0)
    printf("diag matix");
    else
    printf("not diag");
}