#include <stdio.h>
void main() 
{
    int n, m, found=0,mat[10][10],max,i,j,min,minCol;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                scanf("%d", &mat[i][j]);
            }
        }
    for ( i = 0; i < n; i++) 
    {
        min = mat[i][0], minCol = 0;
        for (j = 1; j < m; j++) 
        {
            if (mat[i][j] < min) 
            {
                min = mat[i][j];
                minCol = j;
            }
        }
        max = 1;
        for (int k = 0; k < n && max; k++) 
        {
            if (mat[k][minCol] > min)
                max = 0;
        }

        if (max=1) 
        {
            printf("Saddle point found: %d at (%d, %d)\n", min, i, minCol);
            found = 1;
        }
    }

    if (found!=1)
        printf("No saddle point found.\n");
}
