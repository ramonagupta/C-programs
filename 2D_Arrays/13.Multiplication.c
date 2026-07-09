#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,l,r1,c1,r2,c2,sum=0;
    printf("enter no.s of rows and columns for first matrix");
    scanf("%d%d",&r1,&c1);
    printf("enter values for first matrix");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter no.s of rows and columns for second matrix");
    scanf("%d%d",&r2,&c2);
    printf("enter values for second matrix");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(c1==r2)
    {
        //storing in another matrix
        for(i=0;i<r1;i++)
        {
            for(l=0;l<c2;l++)
            {
                sum=0;//RESET SUM TO ZERO
                for(k=0;k<r2;k++)
                {
                    sum+=(a[i][k]*b[k][l]);
                }
                c[i][l]=sum;
            }
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
