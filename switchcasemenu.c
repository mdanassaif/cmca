#include <stdio.h>
#include <stdlib.h>
// Its my first code
int main() {
    int a, b, c;
    char againCalc;

    do {
        
        printf("----------------\n");
        printf("-----MENU--------\n");
        printf("-----------------\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Exit\n");
        printf("\n\nWrite your choice by number between 1-4\n\n");
        scanf("%d", &a);

        switch(a) {
            case 1: {
                printf("Enter any two numbers\n");
                scanf("%d%d", &b, &c);
                printf("The addition of your numbers is = %d\n", b+c);
                break;
            }
            case 2: {
                printf("Enter any two numbers\n");
                scanf("%d%d", &b, &c);
                printf("The subtraction of your numbers is = %d\n", b-c);
                break;
            }
            case 3: {
                printf("Enter any two numbers\n");
                scanf("%d%d", &b, &c);
                printf("The multiplication of your numbers is = %d\n", b*c);
                break;
            }
            case 4: {
                printf("Exiting the program. Goodbye!\n");
                exit(0);
            }
            default: {
                printf("Please write a number between 1-4\n");
            }
        }

        printf("\nDo you want to try again or not ? Then write Y/N ");
        scanf(" %c", &againCalc);

    } while (againCalc == 'Y');

    printf("Sad to see you go , see you soon.\n");

    return 0;
}