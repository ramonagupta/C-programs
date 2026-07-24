#include<stdio.h>
void main()
{
    char a[20];
    //using gets and puts
    printf("enter string");
    gets(a);
    puts(a);
    //using do while loop
    int i=0;
    char b[20];
    printf("enter string");
    do
    {
        scanf("%c",&b[i]);
        i++;
    } while (b[i-1]!='\n');
    b[i-1]='\0';
    for(i=0;b[i]!='\0';i++)
    {
        printf("%c",b[i]);
    }
    //string format specifier
    char c[20];
    printf("enter string");
    scanf("%s",c);
    printf("%s",c);    
}
