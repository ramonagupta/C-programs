#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,i,n,sum=0,cl=0,ce=0,cs=0;
    float avg;
    printf("enter number of elements: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("ENTER DATA");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        sum += *(p+i);
    }
    avg = sum/n;
    for(i=0;i<n;i++)
    {
        if(*(p+i)>avg)
        cl++;
        else if(*(p+i)==avg)
        ce++;
        else
        cs++;
    }
    printf("elements equal to average - %d\n", ce);
    printf("elements larger to average - %d\n", cl);
    printf("elements smaller to average - %d", cs);
    free(p);
}