#include <stdio.h>

int main()
{
    int n;
    int isPrimaryScalar = 1;   // Flag to check if it's a primary diagonal matrix
    int isSecondaryScalar = 1; // Flag to check if it's a secondary diagonal matrix

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
    int x=matrix[0][0];
    int y=matrix[0][n-1];

    // Check for both primary and secondary diagonal properties
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)   // Primary diagonal element
            {
                if (matrix[i][j] != x)
                {
                    isPrimaryScalar = 0; // A primary diagonal element must be non-zero
                }
            }
            else if (i + j == n - 1)     // Secondary diagonal element
            {
                if (matrix[i][j] != y)
                {
                    isSecondaryScalar = 0; // A secondary diagonal element must be non-zero
                }
            }
            else     // Non-diagonal elements
            {
                if (matrix[i][j] != 0)
                {
                    isPrimaryScalar = 0;   // Non-diagonal elements must be zero
                    isSecondaryScalar = 0; // Non-diagonal elements must be zero
                }
            }
        }
    }

    // Output the result
    if (isPrimaryScalar && isSecondaryScalar)
    {
        printf("The matrix is both a primary and secondary Scalar matrix.\n");
    }
    else if (isPrimaryScalar)
    {
        printf("The matrix is a primary Scalar matrix.\n");
    }
    else if (isSecondaryScalar)
    {
        printf("The matrix is a secondary Scalar matrix.\n");
    }
    else
    {
        printf("The matrix is neither a primary nor a secondary Scalar matrix.\n");
    }

    return 0;
}
