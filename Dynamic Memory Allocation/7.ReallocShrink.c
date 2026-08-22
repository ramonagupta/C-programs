#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,*p;
    printf("enter number of elements");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter the values");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("enter number of elements for new array");
    scanf("%d",&n);
    p=realloc(p, n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    free(p);
}