#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p;
    int n, i, pos, value;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    p = (int*)malloc(n * sizeof(int));
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }
    printf("Enter position to insert: ");
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);
    p = (int*)realloc(p, (n + 1) * sizeof(int));
    for(i = n; i >= pos; i--)
    {
        *(p + i) = *(p + i - 1);
    }
    *(p + pos - 1) = value;
    n++;
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
    free(p);
}