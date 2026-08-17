#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*p,i,ce=0,co=0;
    printf("enter number of integers");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter values");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        if(*(p+i)%2==0)
        ce++;
        else
        co++;
    }
    printf("even count %d",ce);
    printf("odd count %d",co);
    free(p);
}