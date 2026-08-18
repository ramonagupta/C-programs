#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*p,i,max;
    printf("enter number of integers");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter values");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    max=*p;
    for(i=1;i<n;i++)
    {
        if(max<*(p+i))
        max=*(p+i);
    }
    printf("largest number - %d",max);
    free(p);
}