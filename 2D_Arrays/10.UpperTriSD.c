#include<stdio.h>
void main()
{
    int a[10][10],i,j,n;
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
            if(i+j<n-1)
            printf("%d",a[i][j]);//i+j<n-1
        }
    }
    printf("\n");
}