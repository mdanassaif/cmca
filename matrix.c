#include<stdio.h>

int main()
{
    // Declare a 2D array to store the matrix (max size 100x100)
    int mat[100][100];
    // Variables for row and column count, and loop counters
    int row, column, i, j;

    // Prompt user for matrix dimensions
    printf("Enter how many rows and columns you want:\n");
    scanf("%d", &row);
    scanf("%d", &column);

    //Enter matrix values
    printf("Enter the matrix values:\n");

    // Nested loop to input matrix elements
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            scanf("%d", &mat[i][j]);
        }
        printf("\n"); // Move to next line after each row
    }

    // Print the matrix
    printf("The matrix you entered is:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            printf("%d\t", mat[i][j]); // Print each element followed by a tab
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}