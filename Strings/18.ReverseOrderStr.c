#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    int i,j,k,len,end,start;

    printf("Enter string: \n");
    fgets(a, sizeof(a), stdin); 
    a[strcspn(a, "\n")] = '\0';  

    len = strlen(a);
    end = len - 1;

    // Print words in reverse order
    for(i = len - 1; i >= 0; i--)
    {
        if(a[i] == ' ')
        {
            start = i + 1;
            for(j = start; j <= end; j++)
            {
                printf("%c", a[j]);
            }
            printf(" ");
            end = i - 1;
        }
    }
    // Print first word
    for(k = 0; k <= end; k++)
    {
        printf("%c", a[k]);
    }
}