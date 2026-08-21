#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i;
    float *p,sum,avg;
    printf("enter number of elements");
    scanf("%d",&n);
    p=(float*)malloc(n*sizeof(float));
    printf("enter values");
    for(i=0;i<n;i++)
    {
        scanf("%f",p+i);
        sum+=*(p+i);
    }
    avg=sum/n;
    printf("%f",avg);
    free(p);
}