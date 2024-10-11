#include <stdio.h>

int main()
{
    int values[6];
    int i;
    int sum = 0;
    // clrscr();
    printf("Base adress = %u\n", values);
    printf("value \t address\n");

    for (int i = 0; i < 6; i++){
        scanf("%d", &values[i]);
        sum = sum + values[i];
    }
    for (int i = 0; i < 6; i++){
        printf("%d Value %d \t %u\n", i + 1, values[i], &values[i]);
    }
    printf("memory %d bytes it takes", sizeof(values));
    printf("The sum of the given value = %d", sum);
    // getch();
}

// how many fcuntions
// how many operator
// how many variables
// how many loops
// which type of special charachter
// how many format specifies 
// which types of operators

// Functions: 3 (main, clrscr, getch)
// Operators: 7 (=, +, <, ++, &, sizeof, %)
// Variables: 4 (values, i, sum, values[i])
// Loops: 2 (for)
// Special characters: 1 (\t)
// Format specifiers: 4 (%u, %d, \n, \t)
// Types of operators: Assignment (=),  (+), Comparison (<), Increment (++), Address-of (&), Sizeof (sizeof), Modulus (%)