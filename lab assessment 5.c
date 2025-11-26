#include <stdio.h>
int main() 
{
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Entered Matrix:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int max = matrix[0][0];
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            if (matrix[i][j] > max) 
			{
                max = matrix[i][j];
            }
        }
    }

    printf("Maximum element of matrix: %d\n", max);

    return 0;
}