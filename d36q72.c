// Q. Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;

    // Input number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    // Input elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add element to sum
        }
    }

    // Display sum
    printf("Sum of all elements = %d\n", sum);

    return 0;
}
