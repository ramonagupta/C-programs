#include <stdio.h>
void main() 
{
    int A[100][100], B[100][100];
    int m, n;
    int i, j;
    int flag = 1;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &B[i][j]);
        }
    }
    // Check row-wise mirror
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(A[i][j] != B[i][n - 1 - j]) {
                flag = 0;
            }
        }
    }
    if(flag == 1)
        printf("Both matrices are same");
    else
        printf("Matrices are not same");
}