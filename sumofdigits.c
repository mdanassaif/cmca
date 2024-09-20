#include <stdio.h>
int main() {
    int num, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);  // Let's say user enters 123

    while(num != 0) {
        digit = num % 10;  // digit = 123 % 10 = 3
        sum += digit;      // sum = 0 + 3 = 3
        num /= 10;         // num = 123 / 10 = 12

        // Next iteration:
        // digit = 12 % 10 = 2
        // sum = 3 + 2 = 5
        // num = 12 / 10 = 1

        // Final iteration:
        // digit = 1 % 10 = 1
        // sum = 5 + 1 = 6
        // num = 1 / 10 = 0 (loop ends)
    }
    
    printf("Sum of number's digits = %d\n", sum);  // Prints: Sum of number's digits = 6
    
 
}