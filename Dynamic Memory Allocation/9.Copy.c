#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,*q,*q1;
    char *p,*p1;
    printf("enter length of array");
    scanf("%d",&n);
    q=(int*)malloc(n*sizeof(int));
    q1=(int*)malloc(n*sizeof(int));
    printf("enter values");
    for(i=0;i<n;i++)
    {
        scanf("%d",q+i);
    }
    getchar();
    printf("copied array is ");
    for(i=0;i<n;i++)
    {
        *(q1+i)=*(q+i);
        printf("%d ",*(q1+i));
    }
    p=(char*)malloc(100*sizeof(char));
    p1=(char*)malloc(100*sizeof(char));
    printf("now enter your string");
    fgets(p,100,stdin);
    printf("copied string is ");
    for(i=0;*(p+i)!='\0';i++)
    {
        *(p1+i)=*(p+i);
    }
    puts(p1);
    free(p);
    free(p1);
    free(q);
    free(q1);
}