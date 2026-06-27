#include<stdio.h>
void main()
{
    int a[10][10],i,j,n,m,max;
    float avg;
    printf("enter no. of rows and columns");
    scanf("%d%d",&n,&m);
    printf("enter values");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]>max)
            max = a[i][j];
        }
    }
    printf("%d",max);
}