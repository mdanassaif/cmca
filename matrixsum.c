#include <stdio.h>

int main() {
 
    int arrX[3][4];
    int arrY[3][4];

     int i, j;

    printf("Enter the values for i (0-2) and j (0-3): ");
    scanf("%d %d", &i, &j);
 


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arrX[i][j] + arrY[i][j]);
        }
        printf("\n");
    }

    return 0;
}
