#include<stdio.h>
#include<stdlib.h>
int sod(int x)
{
    int sum=0;
    while(x>0)
    {
        sum += x%10;
        x = x/10;
    }
    return sum;
}
void main()
{
    int *p,i,n;
    printf("enter number of elements");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter data");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        *(p+i)= sod(*(p+i));
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    free(p);
}