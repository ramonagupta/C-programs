#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,n,m,temp;
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
            b[i][j]=a[j][i];//switching i and j
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //not storing in a new matrix only works for sqaure matrix
    /*
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    */
}