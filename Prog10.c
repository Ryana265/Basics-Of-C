// C program that takes input for the number of rows and columns of a matrix, then fills in the matrix with user-provided values, and finally displays the matrix
#include <stdio.h>
int main() {
    int row, col, a[50][50], i, j;
    
    printf("Enter the number of Rows : ");
    scanf("%d", &row);
    
    printf("Enter the number of Columns : ");
    scanf("%d", &col);
    
    printf("Enter the elements : ");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\nDisplaying the Matrix :\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%d ", a[i][j]);
            if(j == col - 1) {
                printf("\n");
            }
        }
    }
    
    return 0;
}
