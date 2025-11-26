#include <stdio.h>
int main() 
{
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Original Matrix:\n");
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int transpose[n][n];
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            transpose[i][j] = matrix[j][i]; 
        }
    }
    printf("Transpose Matrix:\n");
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    int symmetric = 1;
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            if (matrix[i][j] != transpose[i][j]) 
			{
                symmetric = 0;
                break;
            }
        }
        if (!symmetric) break;
    }

    if (symmetric) 
	{
        printf("Matrix is symmetric\n");
    } else 
	{
        printf("Matrix is asymmetric\n");
    }

    return 0;
}