#include <stdio.h>

int main()
{
    int n;
    int isPrimaryDiagonal = 1;   // Flag to check if it's a primary diagonal matrix
    int isSecondaryDiagonal = 1; // Flag to check if it's a secondary diagonal matrix

    // Input the size of the square matrix
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input the elements of the matrix
    printf("Enter the elements of the %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for both primary and secondary diagonal properties
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)   // Primary diagonal element
            {
                if (matrix[i][j] == 0)
                {
                    isPrimaryDiagonal = 0; // A primary diagonal element must be non-zero
                }
            }
            else if (i + j == n - 1)     // Secondary diagonal element
            {
                if (matrix[i][j] == 0)
                {
                    isSecondaryDiagonal = 0; // A secondary diagonal element must be non-zero
                }
            }
            else     // Non-diagonal elements
            {
                if (matrix[i][j] != 0)
                {
                    isPrimaryDiagonal = 0;   // Non-diagonal elements must be zero
                    isSecondaryDiagonal = 0; // Non-diagonal elements must be zero
                }
            }
        }
    }

    // Output the result
    if (isPrimaryDiagonal && isSecondaryDiagonal)
    {
        printf("The matrix is both a primary and secondary diagonal matrix.\n");
    }
    else if (isPrimaryDiagonal)
    {
        printf("The matrix is a primary diagonal matrix.\n");
    }
    else if (isSecondaryDiagonal)
    {
        printf("The matrix is a secondary diagonal matrix.\n");
    }
    else
    {
        printf("The matrix is neither a primary nor a secondary diagonal matrix.\n");
    }

    return 0;
}
