#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,i,n,sum=0;
    printf("how many elements?");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter data");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        sum+=*(p+i)* *(p+i);
    }
    printf("%d",sum);
    free(p);
}