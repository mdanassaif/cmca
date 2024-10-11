#include <stdio.h>

int main()
{
    int x, y;

    printf("Write the number of rows you WANT : ");
    scanf("%d", &x);

    printf("Write the number of columns you WANT : ");
    scanf("%d", &y);

    int arrayOne[x][y];
    int arrayTwo[x][y];

    // asking values fo matrix one
    printf("Enter %d values of ArrayX:\n", x * y);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d\t", &arrayOne[i][j]);
        }
    }

    // asking values fo matrix two
    printf("Enter %d values of ArrayX:\n", x * y);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d\t", &arrayTwo[i][j]);
        }
    }

    // sum of both matrix
    printf("Sum of arrX and arrY:\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d\t", arrayOne[i][j] + arrayTwo[i][j]);
        }
        printf("\n");
    }
}