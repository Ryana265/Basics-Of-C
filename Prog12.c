/* Get a Matrix from the user ,display it and find the transpose of a Matrix.
User should enter the number of rows  and columns. Their values should be less than 10.The user must be able to enter the elements of the matrix.*/
#include <stdio.h>
int main() {
    int row, col;

    printf("Enter the number of Rows (max 10): ");
    scanf("%d", &row);

    printf("Enter the number of Columns (max 10): ");
    scanf("%d", &col);

    if (row <= 0 || row > 10 || col <= 0 || col > 10) {
        printf("Invalid input for rows or columns.\n");
        return 1;
    }

    int matrix[row][col];
    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of Matrix:\n");
    for (int j = 0; j < col; j++) {
        for (int i = 0; i < row; i++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
