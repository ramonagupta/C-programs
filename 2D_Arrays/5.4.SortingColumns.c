#include<stdio.h>
void main()
{
    int a[10][10],i,j,k,n,m,temp;
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
    for(i=0;i<m;i++)
    {
        for(j = 0; j < n - 1; j++)
        {          
            for(k = 0; k < n - j - 1; k++) 
            {  
                if(a[k][i] > a[k + 1][i]) 
                {
                    temp = a[k][i];
                    a[k][i] = a[k + 1][i];
                    a[k + 1][i]= temp;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}