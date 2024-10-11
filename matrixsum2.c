#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the number of Rows you want: ");
    scanf("%d", &x);
    printf("Enter the number of columns you want: ");
    scanf("%d", &y);

    int arrX[x][y];
    int arrY[x][y];


    // Values asking for Array X
    printf("Enter %d values for arrX:\n", x * y);
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            scanf("%d", &arrX[i][j]);
        }
    }


    // Values asking for Array Y
    printf("Enter %d values for arrY:\n", x * y);
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            scanf("%d", &arrY[i][j]);
        }
    }


    // sum of Array X And Array Y
    printf("Sum of arrX and arrY:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("%d ", arrX[i][j] + arrY[i][j]);
        }
        printf("\n");
    }
}