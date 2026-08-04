#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i,j,c=0,temp;
    printf("enter string");
    gets(a);
    for(i=0;a[i+1]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        printf("%c has frequency %d\n",a[i],c);
        i+=c-1;//to avoid repetition 
        c=0;//RESET COUNTER
    }
}