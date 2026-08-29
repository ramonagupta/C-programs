#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p;
    int n, i, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    p = (int*)malloc(n * sizeof(int));
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    for(i = pos - 1; i < n - 1; i++)
    {
        *(p + i) = *(p + i + 1);
    }
    n--;
    p = (int*)realloc(p, n * sizeof(int));
    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
    free(p);
}