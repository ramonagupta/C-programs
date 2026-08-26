#include<stdio.h>
#include<stdlib.h>
void main()
{
    int **p;
    int i, j;
    p = (int**)malloc(2 * sizeof(int*));
    for(i = 0; i < 2; i++)
    {
        p[i] = (int*)malloc(3 * sizeof(int));
    }
    printf("Enter elements of 2x3 matrix:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }
    printf("Matrix is:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 2; i++)
    {
        free(p[i]);
    }
    free(p);
}