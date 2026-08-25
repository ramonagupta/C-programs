#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int i,n,*p,l,r,temp;
    char *q,tempo;
    printf("enter number of values");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter values of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("reversed array is");
    for(l=0,r=n-1;l<r;l++,r--)
    {
        temp=*(p+l);
        *(p+l)=*(p+r);
        *(p+r)=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
    q=(char*)malloc(100*sizeof(char));
    printf("enter string");
    getchar();
    fgets(q,100,stdin);
    for(l=0,r=strlen(q)-1;l<r;l++,r--)
    {
        tempo=*(q+l);
        *(q+l)=*(q+r);
        *(q+r)=tempo;
    }
    puts(q);
    free(p);
    free(q);
}