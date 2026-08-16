#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*p,i;
    printf("enter number of integers");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
    free(p);
}
