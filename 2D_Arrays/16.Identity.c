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
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                if(a[i][j]!=1)
                flag=1;
            }
            else if(a[i][j]!=0)
            flag=1;
        }

    }
    if(flag==0)
    printf("identity matrix");
    else
    printf("not identity matrix");
}