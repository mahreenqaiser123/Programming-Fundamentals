#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[10][10];
    int zeroCount = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }
    if (zeroCount >= ((rows * cols) / 2.0)) 
	{ 
        printf("\nThe matrix is a Sparse Matrix\n");
    } else 
	{
        printf("\nThe matrix is NOT a Sparse Matrix\n");
    }

    printf("Total number of zero elements: %d\n", zeroCount);

    return 0;
}