// calculate factorial of given number
#include <stdio.h>
int main()
{
    int a;
    long i;
    printf("Write your fav number \n");
    scanf("%d", &a);  // Let's say user enters 5

    i = 1;
    while (a > 1)
    {
        i *= a;  // i = i * a
        a--;     // Decrement a

        // Iteration 1: i = 1 * 5 = 5,  a becomes 4
        // Iteration 2: i = 5 * 4 = 20, a becomes 3
        // Iteration 3: i = 20 * 3 = 60, a becomes 2
        // Iteration 4: i = 60 * 2 = 120, a becomes 1
        // Loop ends because a is no longer > 1
    }
    printf("Your number factorial : %d\n", i);  // Prints: Your number factorial : 120
}