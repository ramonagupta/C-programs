#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*p,i,sum=0;
    printf("enter number of integers");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter values");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        sum+=*(p+i);
    }
    printf("sum is %d",sum);
    free(p);
}