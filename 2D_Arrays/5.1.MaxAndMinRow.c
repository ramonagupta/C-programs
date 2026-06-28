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
    printf("enter row index to search");
    scanf("%d",&ind);
    max = a[ind][0];//fixing maximum element as first element of row stagnant row index
    min = a[ind][0];
    for(j=0;j<m;j++)
    {
        if(a[ind][j]>max)
        max = a[ind][j];
        if(a[ind][j]<min)
        min = a[ind][j];
    }
    printf("largest element in row with index %d is %d",ind,max);
    printf("smallest element in row with index %d is %d",ind,min);
}