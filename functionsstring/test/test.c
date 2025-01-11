#include <stdio.h>
#define MAX_SIZE 10

void fillMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    printf("Please enter the elements of the matrix (%dx%d):\n", rows, cols);
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    
    // Get matrix dimensions from user
    do {
        printf("Enter number of rows (max %d): ", MAX_SIZE);
        scanf("%d", &rows);
    } while(rows <= 0 || rows > MAX_SIZE);
    
    do {
        printf("Enter number of columns (max %d): ", MAX_SIZE);
        scanf("%d", &cols);
    } while(cols <= 0 || cols > MAX_SIZE);
    
    // Fill the matrix
    fillMatrix(matrix, rows, cols);
    
    // Print the matrix
    printf("\nThe matrix you entered is:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
