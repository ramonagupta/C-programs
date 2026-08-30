#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,i,n,c=0,count=0;
    printf("enter amount of no.s");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        while(*(p+i)>0)
        {
            c++;
            *(p+i)=*(p+i)/10;
        }
        if(c>1)
        count++;
    }
    printf("%d",count);
    free(p);
}