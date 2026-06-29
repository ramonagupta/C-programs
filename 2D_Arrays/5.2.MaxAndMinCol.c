#include<stdio.h>
void main()
{
    int a[10][10],i,j,n,m,ind,max,min;
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
    printf("enter column index to search");
    scanf("%d",&ind);
    max = a[0][ind];//fixing maximum element as first element of column; stagnant col index
    min = a[0][ind];
    for(i=0;i<n;i++)
    {
        if(a[ind][i]>max)
        max = a[ind][i];
        if(a[ind][i]<min)
        min = a[ind][i];
    }
    printf("largest element in row with index %d is %d",ind,max);
    printf("smallest element in row with index %d is %d",ind,min);
}